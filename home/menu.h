#pragma once
#include <fstream>
#include "how_to_play.h"

namespace home {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// menu 的摘要
	/// </summary>
	public ref class menu : public System::Windows::Forms::Form
	{
	public:
		String^ mm = "0";

		menu(void)
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
		~menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(menu::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(535, 945);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 18);
			this->label1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightBlue;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 30));
			this->button1->Location = System::Drawing::Point(95, 135);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(400, 100);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &menu::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightBlue;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 30));
			this->button2->Location = System::Drawing::Point(95, 335);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(400, 100);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &menu::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightBlue;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 30));
			this->button3->Location = System::Drawing::Point(95, 535);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(400, 100);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &menu::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightBlue;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 30));
			this->button4->Location = System::Drawing::Point(95, 735);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(400, 100);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &menu::button4_Click);
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::SeaShell;
			this->ClientSize = System::Drawing::Size(590, 967);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"menu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"MENU";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//keep going
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->Close();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)//new game
{
	mm = "1";
	this->Close();
}
	
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)//cheat
{
	mm = "2";
	this->Close();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	how_to_play^ h = gcnew how_to_play();
	h->ShowDialog(this);
}
};
}
