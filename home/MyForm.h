#pragma once
#include "MyForm1.h"
#include "five.h"
#include "six.h"
#include "score.h"
#include "menu.h"

namespace home {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::PictureBox^  easy;
	private: System::Windows::Forms::PictureBox^  middle;
	private: System::Windows::Forms::PictureBox^  hard;


	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->easy = (gcnew System::Windows::Forms::PictureBox());
			this->middle = (gcnew System::Windows::Forms::PictureBox());
			this->hard = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->easy))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->middle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hard))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(130, 49);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(330, 330);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(130, 49);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(330, 330);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(130, 49);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(330, 330);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(535, 945);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 18);
			this->label2->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(130, 623);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(330, 77);
			this->button1->TabIndex = 5;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(130, 781);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(330, 77);
			this->button2->TabIndex = 6;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(143, 476);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 56);
			this->button3->TabIndex = 7;
			this->button3->Text = L"<";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 28));
			this->button4->Location = System::Drawing::Point(371, 476);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 56);
			this->button4->TabIndex = 8;
			this->button4->Text = L">";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// easy
			// 
			this->easy->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"easy.BackgroundImage")));
			this->easy->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->easy->Location = System::Drawing::Point(241, 454);
			this->easy->Name = L"easy";
			this->easy->Size = System::Drawing::Size(103, 78);
			this->easy->TabIndex = 9;
			this->easy->TabStop = false;
			// 
			// middle
			// 
			this->middle->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"middle.BackgroundImage")));
			this->middle->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->middle->Location = System::Drawing::Point(241, 454);
			this->middle->Name = L"middle";
			this->middle->Size = System::Drawing::Size(112, 91);
			this->middle->TabIndex = 10;
			this->middle->TabStop = false;
			this->middle->Visible = false;
			// 
			// hard
			// 
			this->hard->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hard.BackgroundImage")));
			this->hard->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->hard->Location = System::Drawing::Point(241, 454);
			this->hard->Name = L"hard";
			this->hard->Size = System::Drawing::Size(103, 78);
			this->hard->TabIndex = 11;
			this->hard->TabStop = false;
			this->hard->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::SeaShell;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(590, 967);
			this->Controls->Add(this->hard);
			this->Controls->Add(this->middle);
			this->Controls->Add(this->easy);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"２０４８";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->easy))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->middle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hard))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{

	}
	//難易度往右	
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (easy->Visible == true)
		{
			easy->Visible = false;
			middle->Visible = true;
			pictureBox1->Visible = false;
			pictureBox2->Visible = true;
			pictureBox3->Visible = false;
		}
		else if (middle->Visible == true)
		{
			middle->Visible = false;
			hard->Visible = true;
			pictureBox1->Visible = true;
			pictureBox2->Visible = false;
			pictureBox3->Visible = false;
		}		
	}
	//難易度往左
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (hard->Visible == true)
		{
			middle->Visible = true;
			hard->Visible = false;
			pictureBox1->Visible = false;
			pictureBox2->Visible = true;
			pictureBox3->Visible = false;
		}
		else if (middle->Visible == true)
		{
			easy->Visible = true;
			middle->Visible = false;
			pictureBox1->Visible = false;
			pictureBox2->Visible = false;
			pictureBox3->Visible = true;
		}
	}
	//開始遊戲
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (easy->Visible == true)
		{
			six^ f = gcnew six();
			//this->Visible = false;
			f->ShowDialog(this);

			if (f->DialogResult == System::Windows::Forms::DialogResult::Cancel)
			{
				//若使用者在Form1直接點選X關閉視窗，會進入這個判斷式
				//this->Close();
			}
		}
		else if (middle->Visible == true)
		{
			five^ f = gcnew five();
			//this->Visible = false;
			f->ShowDialog(this);

			if (f->DialogResult == System::Windows::Forms::DialogResult::Cancel)
			{
				//若使用者在Form1直接點選X關閉視窗，會進入這個判斷式
				//this->Close();
			}
		}
		else if (hard->Visible == true)
		{
			MyForm1^ f = gcnew MyForm1();
			//this->Visible = false;
			f->ShowDialog(this);
			if (f->DialogResult == System::Windows::Forms::DialogResult::Cancel)
			{
				//若使用者在Form1直接點選X關閉視窗，會進入這個判斷式
				//this->Close();
			}
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		score^ f1 = gcnew score();
		//this->Visible = false;
		f1->ShowDialog(this);
		if (f1->DialogResult == System::Windows::Forms::DialogResult::Cancel)
		{
			//若使用者在Form1直接點選X關閉視窗，會進入這個判斷式
			//this->Close();
		}
	}

};
}
