#pragma once

namespace TylorTrubCppCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{

	public:
		Calculator(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::TextBox^ txtParam1;
	private: System::Windows::Forms::TextBox^ txtParam2;


	private: System::Windows::Forms::Label^ lblResult;

	private: System::Windows::Forms::Label^ lblOperator;

	private: System::Windows::Forms::Button^ btnAddition;
	private: System::Windows::Forms::Button^ btnSubtraction;
	private: System::Windows::Forms::Button^ btnMultiplication;
	private: System::Windows::Forms::Button^ btnDivision;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Calculator::typeid));
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->txtParam1 = (gcnew System::Windows::Forms::TextBox());
			this->txtParam2 = (gcnew System::Windows::Forms::TextBox());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->lblOperator = (gcnew System::Windows::Forms::Label());
			this->btnAddition = (gcnew System::Windows::Forms::Button());
			this->btnSubtraction = (gcnew System::Windows::Forms::Button());
			this->btnMultiplication = (gcnew System::Windows::Forms::Button());
			this->btnDivision = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->Location = System::Drawing::Point(63, 18);
			this->lblTitle->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(260, 21);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"Simple arithmetic calculator";
			// 
			// txtParam1
			// 
			this->txtParam1->Location = System::Drawing::Point(28, 59);
			this->txtParam1->Name = L"txtParam1";
			this->txtParam1->Size = System::Drawing::Size(100, 28);
			this->txtParam1->TabIndex = 1;
			// 
			// txtParam2
			// 
			this->txtParam2->Location = System::Drawing::Point(203, 59);
			this->txtParam2->Name = L"txtParam2";
			this->txtParam2->Size = System::Drawing::Size(100, 28);
			this->txtParam2->TabIndex = 2;
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Location = System::Drawing::Point(309, 62);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(20, 21);
			this->lblResult->TabIndex = 3;
			this->lblResult->Text = L"=";
			// 
			// lblOperator
			// 
			this->lblOperator->AutoSize = true;
			this->lblOperator->Location = System::Drawing::Point(147, 62);
			this->lblOperator->Name = L"lblOperator";
			this->lblOperator->Size = System::Drawing::Size(43, 21);
			this->lblOperator->TabIndex = 4;
			this->lblOperator->Text = L"N/A";
			// 
			// btnAddition
			// 
			this->btnAddition->Font = (gcnew System::Drawing::Font(L"Cooper Black", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddition->Location = System::Drawing::Point(28, 108);
			this->btnAddition->Name = L"btnAddition";
			this->btnAddition->Size = System::Drawing::Size(74, 72);
			this->btnAddition->TabIndex = 5;
			this->btnAddition->Text = L"+";
			this->btnAddition->UseVisualStyleBackColor = true;
			this->btnAddition->Click += gcnew System::EventHandler(this, &Calculator::btnAddition_Click);
			// 
			// btnSubtraction
			// 
			this->btnSubtraction->Font = (gcnew System::Drawing::Font(L"Cooper Black", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubtraction->Location = System::Drawing::Point(127, 108);
			this->btnSubtraction->Name = L"btnSubtraction";
			this->btnSubtraction->Size = System::Drawing::Size(74, 72);
			this->btnSubtraction->TabIndex = 6;
			this->btnSubtraction->Text = L"-";
			this->btnSubtraction->UseVisualStyleBackColor = true;
			this->btnSubtraction->Click += gcnew System::EventHandler(this, &Calculator::btnSubtraction_Click);
			// 
			// btnMultiplication
			// 
			this->btnMultiplication->Font = (gcnew System::Drawing::Font(L"Cooper Black", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiplication->Location = System::Drawing::Point(226, 108);
			this->btnMultiplication->Name = L"btnMultiplication";
			this->btnMultiplication->Size = System::Drawing::Size(74, 72);
			this->btnMultiplication->TabIndex = 7;
			this->btnMultiplication->Text = L"X";
			this->btnMultiplication->UseVisualStyleBackColor = true;
			this->btnMultiplication->Click += gcnew System::EventHandler(this, &Calculator::btnMultiplication_Click);
			// 
			// btnDivision
			// 
			this->btnDivision->Font = (gcnew System::Drawing::Font(L"Cooper Black", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivision->Location = System::Drawing::Point(325, 108);
			this->btnDivision->Name = L"btnDivision";
			this->btnDivision->Size = System::Drawing::Size(74, 72);
			this->btnDivision->TabIndex = 8;
			this->btnDivision->Text = L"/";
			this->btnDivision->UseVisualStyleBackColor = true;
			this->btnDivision->Click += gcnew System::EventHandler(this, &Calculator::btnDivision_Click);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(411, 192);
			this->Controls->Add(this->btnDivision);
			this->Controls->Add(this->btnMultiplication);
			this->Controls->Add(this->btnSubtraction);
			this->Controls->Add(this->btnAddition);
			this->Controls->Add(this->lblOperator);
			this->Controls->Add(this->lblResult);
			this->Controls->Add(this->txtParam2);
			this->Controls->Add(this->txtParam1);
			this->Controls->Add(this->lblTitle);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAddition_Click(System::Object^ sender, System::EventArgs^ e) {
		lblOperator->Text = "+";
		double result = System::Convert::ToDouble(txtParam1->Text) + System::Convert::ToDouble(txtParam2->Text);
		lblResult->Text = "= " + result.ToString();
	}

	private: System::Void btnSubtraction_Click(System::Object^ sender, System::EventArgs^ e) {
		lblOperator->Text = "-";
		double result = System::Convert::ToDouble(txtParam1->Text) - System::Convert::ToDouble(txtParam2->Text);
		lblResult->Text = "= " + result.ToString();
	}


	private: System::Void btnMultiplication_Click(System::Object^ sender, System::EventArgs^ e) {
		lblOperator->Text = "X";
		double result = System::Convert::ToDouble(txtParam1->Text) * System::Convert::ToDouble(txtParam2->Text);
		lblResult->Text = "= " + result.ToString();
	}

	private: System::Void btnDivision_Click(System::Object^ sender, System::EventArgs^ e) {
		lblOperator->Text = "/";
		double result = System::Convert::ToDouble(txtParam1->Text) / System::Convert::ToDouble(txtParam2->Text);
		lblResult->Text = "= " + result.ToString();
	}
};
}
