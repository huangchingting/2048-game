#pragma once
#include "menu.h"
#include "score.h"
#include <sstream>
#include <fstream>
#include "time.h"
namespace home {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// five 的摘要
	/// </summary>
	public ref class five : public System::Windows::Forms::Form
	{
	public:
		int longlength = 25;
		int shortlength = 5;
		array<long long int>^ play_2048 = gcnew array<long long int>(longlength);
		array<int>^ check = gcnew array<int>(longlength);
		int line_num = 0;
		long long int score1 = 0;
		int achive = 0;
		int checkrun = 0;
		int keepcheck = 0;
		int cheatcheck = 0;
		long long int max_score = 0;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox4;

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Button^  button1;
	public:
		long long int seq = 0;
		five(void)
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
		~five()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;



	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;

	private: System::Windows::Forms::TextBox^  textBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(five::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(536, 945);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 18);
			this->label1->TabIndex = 0;
			// 
			// label23
			// 
			this->label23->BackColor = System::Drawing::Color::LightGray;
			this->label23->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label23->Location = System::Drawing::Point(27, 674);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(96, 96);
			this->label23->TabIndex = 50;
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label22
			// 
			this->label22->BackColor = System::Drawing::Color::LightGray;
			this->label22->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label22->Location = System::Drawing::Point(466, 564);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(96, 96);
			this->label22->TabIndex = 49;
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label21
			// 
			this->label21->BackColor = System::Drawing::Color::LightGray;
			this->label21->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label21->Location = System::Drawing::Point(357, 564);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(96, 96);
			this->label21->TabIndex = 48;
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::Color::LightGray;
			this->label20->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label20->Location = System::Drawing::Point(248, 564);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(96, 96);
			this->label20->TabIndex = 47;
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::Color::LightGray;
			this->label19->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label19->Location = System::Drawing::Point(136, 564);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(96, 96);
			this->label19->TabIndex = 46;
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::Color::LightGray;
			this->label18->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label18->Location = System::Drawing::Point(27, 564);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(96, 96);
			this->label18->TabIndex = 45;
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::LightGray;
			this->label17->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label17->Location = System::Drawing::Point(466, 454);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(96, 96);
			this->label17->TabIndex = 44;
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::Color::LightGray;
			this->label16->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label16->Location = System::Drawing::Point(357, 454);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(96, 96);
			this->label16->TabIndex = 43;
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::Color::LightGray;
			this->label15->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label15->Location = System::Drawing::Point(248, 454);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(96, 96);
			this->label15->TabIndex = 42;
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::LightGray;
			this->label14->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label14->Location = System::Drawing::Point(136, 454);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(96, 96);
			this->label14->TabIndex = 41;
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::LightGray;
			this->label13->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label13->Location = System::Drawing::Point(27, 454);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(96, 96);
			this->label13->TabIndex = 40;
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::LightGray;
			this->label12->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label12->Location = System::Drawing::Point(466, 344);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(96, 96);
			this->label12->TabIndex = 39;
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::LightGray;
			this->label11->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label11->Location = System::Drawing::Point(357, 344);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(96, 96);
			this->label11->TabIndex = 38;
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::LightGray;
			this->label10->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label10->Location = System::Drawing::Point(248, 344);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(96, 96);
			this->label10->TabIndex = 37;
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::LightGray;
			this->label9->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label9->Location = System::Drawing::Point(136, 344);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(96, 96);
			this->label9->TabIndex = 36;
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::LightGray;
			this->label8->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label8->Location = System::Drawing::Point(27, 344);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(96, 96);
			this->label8->TabIndex = 35;
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Silver;
			this->label7->Location = System::Drawing::Point(14, 330);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(564, 564);
			this->label7->TabIndex = 34;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Coral;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->button2->Location = System::Drawing::Point(423, 202);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(154, 64);
			this->button2->TabIndex = 33;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &five::button2_Click);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::PowderBlue;
			this->label6->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label6->Location = System::Drawing::Point(423, 148);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(154, 38);
			this->label6->TabIndex = 31;
			this->label6->Text = L"0";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::PowderBlue;
			this->label5->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label5->Location = System::Drawing::Point(256, 148);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(154, 38);
			this->label5->TabIndex = 30;
			this->label5->Text = L"0";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label24
			// 
			this->label24->BackColor = System::Drawing::Color::LightGray;
			this->label24->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label24->Location = System::Drawing::Point(136, 674);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(96, 96);
			this->label24->TabIndex = 51;
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label25
			// 
			this->label25->BackColor = System::Drawing::Color::LightGray;
			this->label25->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label25->Location = System::Drawing::Point(248, 674);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(96, 96);
			this->label25->TabIndex = 52;
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label26
			// 
			this->label26->BackColor = System::Drawing::Color::LightGray;
			this->label26->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label26->Location = System::Drawing::Point(357, 674);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(96, 96);
			this->label26->TabIndex = 53;
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label27
			// 
			this->label27->BackColor = System::Drawing::Color::LightGray;
			this->label27->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label27->Location = System::Drawing::Point(466, 674);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(96, 96);
			this->label27->TabIndex = 54;
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label28
			// 
			this->label28->BackColor = System::Drawing::Color::LightGray;
			this->label28->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label28->Location = System::Drawing::Point(27, 784);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(96, 96);
			this->label28->TabIndex = 55;
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label29
			// 
			this->label29->BackColor = System::Drawing::Color::LightGray;
			this->label29->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label29->Location = System::Drawing::Point(136, 784);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(96, 96);
			this->label29->TabIndex = 56;
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label30
			// 
			this->label30->BackColor = System::Drawing::Color::LightGray;
			this->label30->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label30->Location = System::Drawing::Point(248, 784);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(96, 96);
			this->label30->TabIndex = 57;
			this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label31
			// 
			this->label31->BackColor = System::Drawing::Color::LightGray;
			this->label31->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label31->Location = System::Drawing::Point(357, 784);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(96, 96);
			this->label31->TabIndex = 58;
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label32
			// 
			this->label32->BackColor = System::Drawing::Color::LightGray;
			this->label32->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label32->Location = System::Drawing::Point(466, 784);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(96, 96);
			this->label32->TabIndex = 59;
			this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 30));
			this->textBox1->ForeColor = System::Drawing::Color::PeachPuff;
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->textBox1->Location = System::Drawing::Point(78, 514);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(434, 67);
			this->textBox1->TabIndex = 60;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->Visible = false;
			this->textBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &five::textBox1_KeyUp);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(14, 72);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(228, 194);
			this->pictureBox1->TabIndex = 62;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(424, 72);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(154, 76);
			this->pictureBox4->TabIndex = 79;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(256, 72);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(154, 76);
			this->pictureBox2->TabIndex = 77;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(78, 386);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(434, 135);
			this->pictureBox5->TabIndex = 80;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(256, 202);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 65);
			this->button1->TabIndex = 85;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &five::button1_Click);
			// 
			// five
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::SeaShell;
			this->ClientSize = System::Drawing::Size(590, 748);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"five";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"５x５";
			this->Load += gcnew System::EventHandler(this, &five::five_Load);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &five::five_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void five_Load(System::Object^  sender, System::EventArgs^  e)
	{
		srand(time(NULL));
		this->Visible = true;
		//載入最高分
		StreamReader^ maxs = gcnew StreamReader("score.txt");
		String^ str = gcnew String("");
		array<String^>^ words = gcnew array<String^>{};
		while ((str = maxs->ReadLine()) != nullptr)
		{
			words = str->Split(' ');
			if (max_score < UInt64::Parse(words[1]))
			{
				max_score = UInt64::Parse(words[1]);
			}
		}
		maxs->Close();
		if (max_score > 100000000)
		{
			label6->Font = gcnew System::Drawing::Font("華康海報體W9", 12);
		}
		else
		{
			label6->Font = gcnew System::Drawing::Font("華康海報體W9", 16);
		}
		label6->Text = max_score.ToString();
		StreamReader^ read = gcnew StreamReader("five_square.txt");
		if ((str = read->ReadLine()) == nullptr)//txt裡面沒東西
		{
			for (int i = 0; i < longlength; i++)
			{
				play_2048[i] = 0;
				check[i] = 0;
			}
			keepcheck = 0;
			Random^ rand = gcnew Random();
			int one = rand->Next(longlength) + 8;
			int two = rand->Next(longlength) + 8;
			String^ dynamic = "label";
			String^ dynamic1 = "label";
			while (one == two)
			{
				one = rand->Next(longlength) + 8;
				two = rand->Next(longlength) + 8;
			}
			dynamic += one;
			dynamic1 += two;
			play_2048[one - 8] = 2;
			play_2048[two - 8] = 2;
			print();
			read->Close();
			line_num++;
			StreamWriter^ f = gcnew StreamWriter("five_square.txt");
			for (int i = 0; i < longlength; i++)
			{
				f->Write(play_2048[i] + " ");
			}
			f->Write(score1.ToString());
			f->WriteLine();
			f->Close();
			if (max_score > 100000000)
			{
				label6->Font = gcnew System::Drawing::Font("華康海報體W9", 12);
			}
			else
			{
				label6->Font = gcnew System::Drawing::Font("華康海報體W9", 16);
			}
			label6->Text = max_score.ToString();
		}
		else//載入and問要不要繼續玩
		{
			read->Close();
			//載入
			StreamReader^ read1 = gcnew StreamReader("five_square.txt");
			while ((str = read1->ReadLine()) != nullptr)
			{
				line_num++;
			}
			//line_num--;
			read1->Close();
			StreamReader^ read = gcnew StreamReader("five_square.txt");
			String^ delimStr = " ";
			array<Char>^ delimiter = delimStr->ToCharArray();
			array<String^>^ words = gcnew array<String^>{};
			for (int i = 0; i < line_num; i++)
			{
				str = read->ReadLine();
				if (i == line_num - 1)
				{
					words = str->Split(delimiter);
					for (int j = 0; j < longlength; j++)
					{
						play_2048[j] = UInt64::Parse(words[j]);
					}
					score1 = UInt64::Parse(words[longlength]);
				}
			}
			read->Close();
			print();
			//跟上次紀錄比有沒有更高分
			long long int most = UInt64::Parse(label5->Text);
			if (most > max_score)
			{
				max_score = most;
				if (max_score > 100000000)
				{
					label6->Font = gcnew System::Drawing::Font("華康海報體W9", 12);
				}
				else
				{
					label6->Font = gcnew System::Drawing::Font("華康海報體W9", 16);
				}
				label6->Text = max_score.ToString();
			}
			System::Windows::Forms::DialogResult^ result = gcnew System::Windows::Forms::DialogResult;
			*result = MessageBox::Show("是否要繼續遊戲", "Question", MessageBoxButtons::YesNo);
			if (*result == System::Windows::Forms::DialogResult::Yes)
			{

			}
			else if (*result == System::Windows::Forms::DialogResult::No)
			{
				for (int i = 0; i < longlength; i++)
				{
					play_2048[i] = 0;
					check[i] = 0;
				}
				line_num = 0;
				score1 = 0;
				Random^ rand = gcnew Random();
				int one = rand->Next(longlength) + 8;
				int two = rand->Next(longlength) + 8;
				String^ dynamic = "label";
				String^ dynamic1 = "label";
				while (one == two)
				{
					one = rand->Next(longlength) + 8;
					two = rand->Next(longlength) + 8;
				}
				dynamic += one;
				dynamic1 += two;
				play_2048[one - 8] = 2;
				play_2048[two - 8] = 2;
				print();

				line_num++;
				StreamWriter^ f = gcnew StreamWriter("five_square.txt");
				for (int i = 0; i < longlength; i++)
				{
					f->Write(play_2048[i] + " ");
				}
				f->Write(score1.ToString());
				f->WriteLine();
				f->Close();
				if (max_score < score1)
				{
					max_score = score1;
					if (max_score > 100000000)
					{
						label6->Font = gcnew System::Drawing::Font("華康海報體W9", 12);
					}
					else
					{
						label6->Font = gcnew System::Drawing::Font("華康海報體W9", 16);
					}
					label6->Text = max_score.ToString();
				}
			}

		}
	}


			 //返回上一步動作
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		StreamReader^ din1 = File::OpenText("five_square.txt");
		String^ delimStr = " ";
		array<Char>^ delimiter = delimStr->ToCharArray();
		String^ str;
		line_num = 0;
		while ((str = din1->ReadLine()) != nullptr)
		{
			line_num++;
		}
		line_num--;
		din1->Close();
		if (line_num != 0)
		{
			StreamReader^ din = File::OpenText("five_square.txt");
			int^ count = 0;
			int^ a = 0;
			int^ j = 0;
			int^ k = 0;
			array<String^>^ words = gcnew array<String^>{};
			array<long long int>^ record = gcnew array<long long int>(line_num * (longlength + 1));

			while ((str = din->ReadLine()) != nullptr)
			{
				words = str->Split(delimiter);
				for (int b = 0; b < words->Length; b++)			//存進一維陣列，每17個為一次紀錄(第17個是分數)
				{
					record[*a] = Convert::ToUInt64(words[b]);
					(*a)++;
				}

				if (*a == (longlength + 1) * line_num)						//如在最後一行，跳出
				{
					break;
				}
			}
			din->Close();
			*a = 0;

			StreamReader^ maxs = gcnew StreamReader("score.txt");
			String^ str = gcnew String("");
			array<String^>^ wordw = gcnew array<String^>{};
			while ((str = maxs->ReadLine()) != nullptr)
			{
				for (int i = 0; i < line_num; i++)
				{
					wordw = str->Split(' ');
					if (seq < UInt64::Parse(wordw[1]))
					{
						seq = UInt64::Parse(wordw[1]);
					}
				}
			}
			maxs->Close();

			StreamWriter^ f = gcnew StreamWriter("five_square.txt", false);
			for (int i = 0; i < record->Length; i++)
			{
				if (i % (longlength + 1) != longlength)
				{
					f->Write(record[i] + " ");
				}

				if (i % (longlength + 1) == longlength)			//分數
				{
					f->Write(score1.ToString());
					score1 = record[i];
					f->WriteLine();
				}

				if (i >= (longlength + 1) * (line_num - 1) && i != (record->Length - 1))
				{
					play_2048[*a] = record[i];
					(*a)++;
				}
				if (seq < score1)//最高分
				{
					max_score = score1;
				}
				else
				{
					max_score = seq;
				}
				if (max_score > 100000000)
				{
					label6->Font = gcnew System::Drawing::Font("華康海報體W9", 12);
				}
				else
				{
					label6->Font = gcnew System::Drawing::Font("華康海報體W9", 16);
				}
				label6->Text = max_score.ToString();
			}
			f->Close();
			print();
		}
		else
		{
			MessageBox::Show("已經是最一開始的遊戲畫面，不能再返回了");
		}
	}

	public:
		void print()
		{
			String^ dynamic = "label";
			for (int i = 0; i < longlength; i++)
			{
				dynamic = "label";
				dynamic += (i + 8);
				if (play_2048[i] != 0)
				{
					Controls->Find(dynamic, true)[0]->Text = "" + play_2048[i];
					if (play_2048[i] == 2)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::Ivory;
						Controls->Find(dynamic, true)[0]->ForeColor = Color::Black;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 18);
					}
					else if (play_2048[i] == 4)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::BlanchedAlmond;
						Controls->Find(dynamic, true)[0]->ForeColor = Color::Black;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 18);
					}
					else if (play_2048[i] == 8)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::FromArgb(255, 192, 128);
						Controls->Find(dynamic, true)[0]->ForeColor = Color::Black;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 18);
					}
					else if (play_2048[i] == 16)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::FromArgb(255, 168, 40);
						Controls->Find(dynamic, true)[0]->ForeColor = Color::Black;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 18);
					}
					else if (play_2048[i] == 32)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::FromArgb(255, 128, 90);
						Controls->Find(dynamic, true)[0]->ForeColor = Color::Black;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 18);
					}
					else if (play_2048[i] == 64)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::OrangeRed;
						Controls->Find(dynamic, true)[0]->ForeColor = Color::White;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 18);
					}
					else if (play_2048[i] == 128)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::FromArgb(255, 255, 150);
						Controls->Find(dynamic, true)[0]->ForeColor = Color::Black;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 18);
					}
					else if (play_2048[i] == 256)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::FromArgb(255, 255, 100);
						Controls->Find(dynamic, true)[0]->ForeColor = Color::Black;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 18);
					}
					else if (play_2048[i] == 512)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::FromArgb(255, 255, 50);
						Controls->Find(dynamic, true)[0]->ForeColor = Color::Black;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 18);
					}
					else if (play_2048[i] == 1024)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::Yellow;
						Controls->Find(dynamic, true)[0]->ForeColor = Color::Black;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 18);
					}
					else if (play_2048[i] == 2048)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::Gold;
						Controls->Find(dynamic, true)[0]->ForeColor = Color::Black;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 18);
					}
					else if (play_2048[i] == 4096)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::LightCoral;
						Controls->Find(dynamic, true)[0]->ForeColor = Color::Black;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 18);
					}
					else if (play_2048[i] == 8192)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::FromArgb(255, 81, 81);
						Controls->Find(dynamic, true)[0]->ForeColor = Color::Black;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 18);
					}
					else if (play_2048[i] == 16384)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::FromArgb(255, 45, 45);
						Controls->Find(dynamic, true)[0]->ForeColor = Color::White;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 15);
					}
					else if (play_2048[i] == 32768)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::FromArgb(151, 203, 255);
						Controls->Find(dynamic, true)[0]->ForeColor = Color::Black;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 15);
					}
					else if (play_2048[i] == 65536)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::FromArgb(112, 169, 255);
						Controls->Find(dynamic, true)[0]->ForeColor = Color::Black;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 15);
					}
					else if (play_2048[i] == 131072)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::FromArgb(40, 148, 255);
						Controls->Find(dynamic, true)[0]->ForeColor = Color::Black;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 13);
					}
					else if (play_2048[i] == 262144)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::FromArgb(74, 74, 255);
						Controls->Find(dynamic, true)[0]->ForeColor = Color::Black;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 13);
					}
					else if (play_2048[i] == 524288)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::FromArgb(40, 40, 255);
						Controls->Find(dynamic, true)[0]->ForeColor = Color::White;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 13);
					}
					else if (play_2048[i] == 1048576)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::FromArgb(192, 255, 192);
						Controls->Find(dynamic, true)[0]->ForeColor = Color::Black;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 12);
					}
					else if (play_2048[i] == 2097152)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::FromArgb(128, 255, 128);
						Controls->Find(dynamic, true)[0]->ForeColor = Color::Black;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 12);
					}
					else if (play_2048[i] == 4194304)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::FromArgb(78, 254, 179);
						Controls->Find(dynamic, true)[0]->ForeColor = Color::Black;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 12);
					}
					else if (play_2048[i] == 8388608)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::FromArgb(0, 253, 80);
						Controls->Find(dynamic, true)[0]->ForeColor = Color::Black;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 12);
					}
					else if (play_2048[i] == 16777216)
					{
						Controls->Find(dynamic, true)[0]->BackColor = Color::FromArgb(0, 192, 0);
						Controls->Find(dynamic, true)[0]->ForeColor = Color::White;
						Controls->Find(dynamic, true)[0]->Font = gcnew System::Drawing::Font("華康海報體W9", 10);
					}

				}
				else
				{
					Controls->Find(dynamic, true)[0]->Text = "";
					Controls->Find(dynamic, true)[0]->BackColor = Color::LightGray;
				}

			}
			if (score1 > 100000000)
			{
				label5->Font = gcnew System::Drawing::Font("華康海報體W9", 12);
			}
			else
			{
				label5->Font = gcnew System::Drawing::Font("華康海報體W9", 16);
			}
			label5->Text = "" + score1;
		}

		void produce()
		{
			print();
			for (int i = 0; i < longlength; i++)
			{
				if (play_2048[i] == 2048 && achive == 0)
				{
					MessageBox::Show("恭喜你達到2048!!", "Congratulations");
					achive = 1;
				}
			}
			Random^ rand = gcnew Random();
			int one = rand->Next(longlength);
			String^ dynamic = "label";
			while (play_2048[one] != 0)
			{
				one = rand->Next(longlength);
			}
			dynamic += (one + 8);
			if (rand->Next(2) == 0)			//產生2
			{
				Controls->Find(dynamic, true)[0]->Text = "2";
				play_2048[one] = 2;
			}
			else							//產生4
			{
				Controls->Find(dynamic, true)[0]->Text = "4";
				play_2048[one] = 4;
			}
			int ccc = 0;
			for (int i = 0; i < longlength; i++)
			{
				if (play_2048[i] != 0)
				{
					ccc++;
				}
			}
			if (ccc == longlength)
			{
				print();
				int keep = 40;
				for (int i = 0; i < play_2048->Length; i++)
				{
					if (i >= shortlength)//上
					{
						if (play_2048[i] == play_2048[i - shortlength])
						{
							keep--;
						}
						if (keep < 40)
						{
							break;
						}
					}
					if (i % shortlength < (shortlength - 1))//右
					{
						if (play_2048[i] == play_2048[i + 1])
						{
							keep--;
						}
						if (keep < 40)
						{
							break;
						}
					}
				}
				if (keep == 40)
				{
					if (max_score < score1)
					{
						max_score = score1;
						if (max_score > 100000000)
						{
							label6->Font = gcnew System::Drawing::Font("華康海報體W9", 12);
						}
						else
						{
							label6->Font = gcnew System::Drawing::Font("華康海報體W9", 16);
						}
						label6->Text = max_score.ToString();
					}
					MessageBox::Show("遊戲結束！分數：" + score1);
					keepcheck = 1;
					StreamWriter^ f = gcnew StreamWriter("five_square.txt");
					f->Close();
					pictureBox5->Visible = true;
					textBox1->Visible = true;
				}
			}
		}

	private: System::Void five_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
	{
		if (e->KeyData == Keys::Up)//上
		{
			checkrun = 0;
			for (int i = 0; i < longlength; i++)
				check[i] = 0;

			for (int i = 0; i < shortlength; i++)			//一直排一直排自己往上檢查
			{
				for (int k = i + shortlength; k < longlength; k += shortlength)
				{
					int j = k - shortlength;
					for (int m = k - shortlength; m >= 0; m -= shortlength)			//跟上面全部比較
					{
						if (play_2048[m] == play_2048[k] && check[m] != 1 && play_2048[m] != 0)		//如相等就相加
						{
							play_2048[m] += play_2048[k];
							play_2048[k] = 0;
							score1 += play_2048[m];
							check[m] = 1;
							checkrun = 1;
						}
						else if (play_2048[m] != 0)
						{
							break;
						}
					}

					while (play_2048[j] == 0 && play_2048[j + shortlength] != 0)		//全部往上移
					{
						play_2048[j] = play_2048[j + shortlength];
						play_2048[j + shortlength] = 0;
						j -= shortlength;
						checkrun = 1;
						if (j < i)
							break;
					}
				}
			}
			if (checkrun == 1)
			{
				produce();
				if (keepcheck == 0)
				{
					StreamWriter^ f = gcnew StreamWriter("five_square.txt", true);
					for (int i = 0; i < longlength; i++)
					{
						f->Write(play_2048[i] + " ");
					}
					f->Write(score1.ToString());
					f->WriteLine();
					f->Close();
					line_num++;
				}
				if (max_score < score1)
				{
					max_score = score1;
					if (max_score > 100000000)
					{
						label6->Font = gcnew System::Drawing::Font("華康海報體W9", 12);
					}
					else
					{
						label6->Font = gcnew System::Drawing::Font("華康海報體W9", 16);
					}
					label6->Text = max_score.ToString();
				}
			}
			print();
		}
		else if (e->KeyCode == Keys::Right)//右
		{
			checkrun = 0;
			for (int i = 0; i < longlength; i++)
				check[i] = 0;

			for (int k = 0; k < longlength; k += shortlength)			//一橫排一橫排自己往右檢查
			{
				for (int i = k + (shortlength - 2); i >= k; i--)
				{
					int j = i + 1;
					for (int m = i + 1; m < k + shortlength; m++)
					{
						if (play_2048[m] == play_2048[i] && check[m] != 1 && play_2048[m] != 0)		//如相等就相加
						{
							play_2048[m] += play_2048[i];
							play_2048[i] = 0;
							score1 += play_2048[m];
							checkrun = 1;
							check[m] = 1;
						}
						else if (play_2048[m] != 0)
						{
							break;
						}
					}
					while (play_2048[j] == 0 && play_2048[j - 1] != 0)		//全部往右移
					{
						play_2048[j] = play_2048[j - 1];
						play_2048[j - 1] = 0;
						checkrun = 1;
						j++;
						if (j >= k + shortlength)
							break;
					}
				}
			}
			if (checkrun == 1)
			{
				produce();
				if (keepcheck == 0)
				{
					StreamWriter^ f = gcnew StreamWriter("five_square.txt", true);
					for (int i = 0; i < longlength; i++)
					{
						f->Write(play_2048[i] + " ");
					}
					f->Write(score1.ToString());
					f->WriteLine();
					f->Close();
					line_num++;
				}
				if (max_score < score1)
				{
					max_score = score1;
					if (max_score > 100000000)
					{
						label6->Font = gcnew System::Drawing::Font("華康海報體W9", 12);
					}
					else
					{
						label6->Font = gcnew System::Drawing::Font("華康海報體W9", 16);
					}
					label6->Text = max_score.ToString();
				}
			}
			print();
		}
		else if (e->KeyCode == Keys::Down)//下
		{
			checkrun = 0;
			for (int i = 0; i < longlength; i++)
				check[i] = 0;

			for (int i = 0; i < shortlength; i++)			//一直排一直排自己往下檢查
			{
				for (int k = i + shortlength*(shortlength - 2); k >= 0; k -= shortlength)
				{

					int j = k + shortlength;
					for (int m = k + shortlength; m < longlength; m += shortlength)
					{
						if (play_2048[m] == play_2048[k] && check[m] != 1 && play_2048[m] != 0)
						{
							play_2048[m] += play_2048[k];
							play_2048[k] = 0;
							score1 += play_2048[m];
							checkrun = 1;
							check[m] = 1;
						}
						else if (play_2048[m] != 0)
						{
							break;
						}
					}

					while (play_2048[j] == 0 && play_2048[j - shortlength] != 0)		//全部往下移
					{
						play_2048[j] = play_2048[j - shortlength];
						play_2048[j - shortlength] = 0;
						checkrun = 1;
						j += shortlength;
						if (j > i + shortlength*(shortlength - 1))
							break;
					}

				}
			}
			if (checkrun == 1)
			{
				produce();
				if (keepcheck == 0)
				{
					StreamWriter^ f = gcnew StreamWriter("five_square.txt", true);
					for (int i = 0; i < longlength; i++)
					{
						f->Write(play_2048[i] + " ");
					}
					f->Write(score1.ToString());
					f->WriteLine();
					f->Close();
					line_num++;
				}
				if (max_score < score1)
				{
					max_score = score1;
					if (max_score > 100000000)
					{
						label6->Font = gcnew System::Drawing::Font("華康海報體W9", 12);
					}
					else
					{
						label6->Font = gcnew System::Drawing::Font("華康海報體W9", 16);
					}
					label6->Text = max_score.ToString();
				}
			}
			print();

		}
		else if (e->KeyCode == Keys::Left)//左
		{
			checkrun = 0;
			for (int i = 0; i < longlength; i++)
				check[i] = 0;

			for (int k = 0; k < longlength; k += shortlength)			//一橫排一橫排自己往左檢查
			{
				for (int i = k + 1; i <= k + (shortlength - 1); i++)
				{
					int j = i - 1;
					for (int m = i - 1; m >= k; m--)
					{
						if (play_2048[m] == play_2048[i] && check[m] != 1 && play_2048[m] != 0)		//如相等就相加
						{
							play_2048[m] += play_2048[i];
							play_2048[i] = 0;
							score1 += play_2048[m];
							checkrun = 1;
							check[m] = 1;
						}
						else if (play_2048[m] != 0)
						{
							break;
						}
					}

					while (play_2048[j] == 0 && play_2048[j + 1] != 0)		//全部往左移
					{
						play_2048[j] = play_2048[j + 1];
						play_2048[j + 1] = 0;
						checkrun = 1;
						j--;
						if (j < k)
							break;
					}

				}

			}
			if (checkrun == 1)
			{
				produce();
				if (keepcheck == 0)
				{
					StreamWriter^ f = gcnew StreamWriter("five_square.txt", true);
					for (int i = 0; i < longlength; i++)
					{
						f->Write(play_2048[i] + " ");
					}
					f->Write(score1.ToString());
					f->WriteLine();
					f->Close();
					line_num++;
				}
				if (max_score < score1)
				{
					max_score = score1;
					if (max_score > 100000000)
					{
						label6->Font = gcnew System::Drawing::Font("華康海報體W9", 12);
					}
					else
					{
						label6->Font = gcnew System::Drawing::Font("華康海報體W9", 16);
					}
					label6->Text = max_score.ToString();
				}
			}

			print();
		}
	}
	private: System::Void textBox1_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Enter)
		{
			pictureBox5->Visible = false;
			textBox1->Visible = false;
			StreamWriter^ ww = gcnew StreamWriter("score.txt", true);
			ww->WriteLine(textBox1->Text + " " + score1 + " " + 1);//中
			ww->Close();
			score^ ss = gcnew score();
			this->Close();
			ss->ShowDialog(this);
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		menu^ f = gcnew menu();
		//this->Visible = false;
		f->ShowDialog(this);
		/*if (f->DialogResult == System::Windows::Forms::DialogResult::Cancel)
		{
		//若使用者在Form1直接點選X關閉視窗，會進入這個判斷式
		//this->Close();
		}*/
		if (f->mm == "1")				//new game
		{
			//清空txt
			StreamWriter^ wrt = gcnew StreamWriter("five_square.txt");
			wrt->Write("");
			wrt->Close();
			f->mm = "0";
			this->Close();
		}
		else if (f->mm == "2")//cheat
		{
			int ran = 0;
			int ran1 = 0;
			Random^ rand = gcnew Random();
			ran = rand->Next(longlength);
			ran1 = rand->Next(longlength);
			for (int i = 0; i < longlength; i++)
			{
				if (play_2048[i] == 0)
				{
					cheatcheck = 1;			//代表有空位
					break;
				}
			}
			while (play_2048[ran] != 0 && cheatcheck == 1)		//要選兩個空的 把它變成1024
			{
				ran = rand->Next(longlength);
			}
			if (cheatcheck == 1)
			{
				cheatcheck = 0;
				for (int i = 0; i < longlength; i++)
				{
					if (play_2048[i] == 0 && i != ran)
					{
						cheatcheck = 1;			//代表有空位
						break;
					}
				}
				while (play_2048[ran1] != 0 && cheatcheck == 1 || ran1 == ran)		//要選兩個空的 把它變成1024
				{
					ran1 = rand->Next(longlength);
				}
				if (cheatcheck == 1)
				{
					play_2048[ran] = 1024;
					play_2048[ran1] = 1024;
				}
				else
					MessageBox::Show("沒有空位來存放第二個1024", "error");
			}
			else
				MessageBox::Show("沒有空位來存放1024", "error");
			StreamWriter^ ff = gcnew StreamWriter("five_square.txt", true);
			for (int i = 0; i < longlength; i++)
			{
				ff->Write(play_2048[i] + " ");
			}
			ff->WriteLine(score1.ToString());
			ff->Close();
			line_num++;
			print();
			f->mm = "0";
		}
	}
};
}
