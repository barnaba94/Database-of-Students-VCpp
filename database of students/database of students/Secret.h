#pragma once

namespace databaseofstudents {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Secret
	/// </summary>
	public ref class Secret : public System::Windows::Forms::Form
	{
	public:
		Secret(void)
		{
			InitializeComponent();
			textBox2 -> PasswordChar = '*';
			textBox1 -> MaxLength = 15;
			textBox2 -> MaxLength = 15;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Secret()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Secret::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(258, 81);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(237, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"SECRET PANEL";
			this->label1->Click += gcnew System::EventHandler(this, &Secret::label1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(470, 186);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 36);
			this->button1->TabIndex = 5;
			this->button1->Text = L"ADD ADMIN";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Secret::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(470, 237);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 36);
			this->button2->TabIndex = 6;
			this->button2->Text = L"SUB ADMIN";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Secret::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(260, 128);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(119, 20);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(260, 169);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(119, 20);
			this->textBox2->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(168, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"LOGIN";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(144, 172);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"PASSWORD";
			// 
			// Secret
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(635, 328);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Secret";
			this->Text = L"Secret";
			this->Load += gcnew System::EventHandler(this, &Secret::Secret_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void Secret_Load(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 ;
		 }

private:Void FillCombo( void ) {}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			  try
			 {
				MySqlConnection^ connect = gcnew MySqlConnection("Server=127.0.0.1;Uid=root;Pwd=;Database=studenci");
				
				String^ sLogin;
				String^ sPasswd;

				sLogin = textBox1 -> Text; 
				sPasswd = textBox2 -> Text;

				MySqlCommand^ command = gcnew MySqlCommand( "insert into admin_data values( NULL , '"+sLogin+"', '"+sPasswd+"') ", connect );
				MySqlDataReader^ DataR;
				connect -> Open();
				DataR = command -> ExecuteReader();
				MessageBox::Show( "ADD NEW ADMIN COMPLETED!!!" );
			 }
			 catch( Exception^ ex )
			 {
				MessageBox::Show( ex -> Message );
			 }
		 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 try
			{
				MySqlConnection^ connect = gcnew MySqlConnection("Server=127.0.0.1;Uid=root;Pwd=;Database=studenci");
			 
				String^ sLogin;
				sLogin = textBox1 -> Text; 
			 
				MySqlCommand^ command = gcnew MySqlCommand( "delete from admin_data WHERE Login='"+sLogin+"' ", connect );
				
				MySqlDataReader^ DataR;
				connect -> Open();
				DataR = command -> ExecuteReader();
				connect -> Close();
				MessageBox::Show( "REMOVE ADMIN COMPLETED!!!" );
			}
			catch( Exception^ ex )
			{
				MessageBox::Show(ex -> Message);
			}
			 }
};
}