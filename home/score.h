#pragma once
#include <fstream>

namespace home {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// score 的摘要
	/// </summary>
	public ref class score : public System::Windows::Forms::Form
	{
	public:
		score(void)
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
		~score()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;

	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label32;

	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(score::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(586, 944);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 18);
			this->label1->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label3->Location = System::Drawing::Point(19, 248);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 36);
			this->label3->TabIndex = 2;
			this->label3->Text = L"1.";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(86, 248);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 32);
			this->label4->TabIndex = 3;
			this->label4->Text = L"-------";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label5->Location = System::Drawing::Point(19, 320);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 36);
			this->label5->TabIndex = 5;
			this->label5->Text = L"2.";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label6->ForeColor = System::Drawing::Color::Orange;
			this->label6->Location = System::Drawing::Point(86, 320);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(127, 32);
			this->label6->TabIndex = 4;
			this->label6->Text = L"-------";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label7->Location = System::Drawing::Point(19, 392);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 36);
			this->label7->TabIndex = 7;
			this->label7->Text = L"3.";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label8->ForeColor = System::Drawing::Color::YellowGreen;
			this->label8->Location = System::Drawing::Point(86, 392);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(127, 32);
			this->label8->TabIndex = 6;
			this->label8->Text = L"-------";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label9->Location = System::Drawing::Point(19, 464);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 36);
			this->label9->TabIndex = 9;
			this->label9->Text = L"4.";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label10->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label10->Location = System::Drawing::Point(86, 464);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(127, 32);
			this->label10->TabIndex = 8;
			this->label10->Text = L"-------";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label11->Location = System::Drawing::Point(19, 536);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 36);
			this->label11->TabIndex = 11;
			this->label11->Text = L"5.";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label12->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label12->Location = System::Drawing::Point(86, 536);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(127, 32);
			this->label12->TabIndex = 10;
			this->label12->Text = L"-------";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label13->Location = System::Drawing::Point(19, 608);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(51, 36);
			this->label13->TabIndex = 13;
			this->label13->Text = L"6.";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label14->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label14->Location = System::Drawing::Point(86, 608);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(127, 32);
			this->label14->TabIndex = 12;
			this->label14->Text = L"-------";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label15->Location = System::Drawing::Point(19, 680);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(51, 36);
			this->label15->TabIndex = 15;
			this->label15->Text = L"7.";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label16->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label16->Location = System::Drawing::Point(86, 680);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(127, 32);
			this->label16->TabIndex = 14;
			this->label16->Text = L"-------";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label17->Location = System::Drawing::Point(19, 752);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(51, 36);
			this->label17->TabIndex = 17;
			this->label17->Text = L"8.";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label18->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label18->Location = System::Drawing::Point(86, 752);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(127, 32);
			this->label18->TabIndex = 16;
			this->label18->Text = L"-------";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label19->Location = System::Drawing::Point(19, 824);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(51, 36);
			this->label19->TabIndex = 19;
			this->label19->Text = L"9.";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label20->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label20->Location = System::Drawing::Point(86, 824);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(127, 32);
			this->label20->TabIndex = 18;
			this->label20->Text = L"-------";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 18));
			this->label21->Location = System::Drawing::Point(19, 896);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(69, 36);
			this->label21->TabIndex = 21;
			this->label21->Text = L"10.";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label22->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label22->Location = System::Drawing::Point(86, 896);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(127, 32);
			this->label22->TabIndex = 20;
			this->label22->Text = L"-------";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label23->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label23->Location = System::Drawing::Point(255, 896);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(127, 32);
			this->label23->TabIndex = 31;
			this->label23->Text = L"-------";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label24->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label24->Location = System::Drawing::Point(255, 824);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(127, 32);
			this->label24->TabIndex = 30;
			this->label24->Text = L"-------";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label25->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label25->Location = System::Drawing::Point(255, 752);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(127, 32);
			this->label25->TabIndex = 29;
			this->label25->Text = L"-------";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label26->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label26->Location = System::Drawing::Point(255, 680);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(127, 32);
			this->label26->TabIndex = 28;
			this->label26->Text = L"-------";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label27->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label27->Location = System::Drawing::Point(255, 608);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(127, 32);
			this->label27->TabIndex = 27;
			this->label27->Text = L"-------";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label28->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label28->Location = System::Drawing::Point(255, 536);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(127, 32);
			this->label28->TabIndex = 26;
			this->label28->Text = L"-------";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label29->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label29->Location = System::Drawing::Point(255, 464);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(127, 32);
			this->label29->TabIndex = 25;
			this->label29->Text = L"-------";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label30->ForeColor = System::Drawing::Color::YellowGreen;
			this->label30->Location = System::Drawing::Point(255, 392);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(127, 32);
			this->label30->TabIndex = 24;
			this->label30->Text = L"-------";
			this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label31->ForeColor = System::Drawing::Color::Orange;
			this->label31->Location = System::Drawing::Point(255, 320);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(127, 32);
			this->label31->TabIndex = 23;
			this->label31->Text = L"-------";
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 22));
			this->label33->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label33->Location = System::Drawing::Point(422, 169);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(130, 44);
			this->label33->TabIndex = 32;
			this->label33->Text = L"Level";
			this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 22));
			this->label34->Location = System::Drawing::Point(93, 169);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(108, 44);
			this->label34->TabIndex = 33;
			this->label34->Text = L"Name";
			this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 22));
			this->label35->Location = System::Drawing::Point(252, 169);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(130, 44);
			this->label35->TabIndex = 34;
			this->label35->Text = L"Score";
			this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label32->ForeColor = System::Drawing::Color::Red;
			this->label32->Location = System::Drawing::Point(255, 248);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(127, 32);
			this->label32->TabIndex = 45;
			this->label32->Text = L"-------";
			this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label37->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label37->Location = System::Drawing::Point(421, 824);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(127, 32);
			this->label37->TabIndex = 43;
			this->label37->Text = L"-------";
			this->label37->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label38->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label38->Location = System::Drawing::Point(421, 752);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(127, 32);
			this->label38->TabIndex = 42;
			this->label38->Text = L"-------";
			this->label38->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label39->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label39->Location = System::Drawing::Point(421, 680);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(127, 32);
			this->label39->TabIndex = 41;
			this->label39->Text = L"-------";
			this->label39->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label40->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label40->Location = System::Drawing::Point(421, 608);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(127, 32);
			this->label40->TabIndex = 40;
			this->label40->Text = L"-------";
			this->label40->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label41->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label41->Location = System::Drawing::Point(421, 536);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(127, 32);
			this->label41->TabIndex = 39;
			this->label41->Text = L"-------";
			this->label41->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label42->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label42->Location = System::Drawing::Point(421, 464);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(127, 32);
			this->label42->TabIndex = 38;
			this->label42->Text = L"-------";
			this->label42->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label43->ForeColor = System::Drawing::Color::YellowGreen;
			this->label43->Location = System::Drawing::Point(421, 392);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(127, 32);
			this->label43->TabIndex = 37;
			this->label43->Text = L"-------";
			this->label43->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label44->ForeColor = System::Drawing::Color::Orange;
			this->label44->Location = System::Drawing::Point(421, 320);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(127, 32);
			this->label44->TabIndex = 36;
			this->label44->Text = L"-------";
			this->label44->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label45->ForeColor = System::Drawing::Color::Red;
			this->label45->Location = System::Drawing::Point(421, 248);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(127, 32);
			this->label45->TabIndex = 35;
			this->label45->Text = L"-------";
			this->label45->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 16));
			this->label36->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label36->Location = System::Drawing::Point(421, 896);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(127, 32);
			this->label36->TabIndex = 46;
			this->label36->Text = L"-------";
			this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(110, 52);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(390, 72);
			this->pictureBox1->TabIndex = 47;
			this->pictureBox1->TabStop = false;
			// 
			// score
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::SeaShell;
			this->ClientSize = System::Drawing::Size(590, 967);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"score";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"SCORE";
			this->Load += gcnew System::EventHandler(this, &score::score_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void score_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		array<String^>^ name = gcnew array<String^>(11);
		array<String^>^ ssscore = gcnew array<String^>(11);
		array<String^>^ level = gcnew array<String^>(11);
		
		StreamReader^ ww = gcnew StreamReader("score.txt", true);
		String^ str = gcnew String("");
		String^ delimStr = " ";
		array<Char>^ delimiter = delimStr->ToCharArray();
		array<String^>^ words = gcnew array<String^>{};
		int num = 0;
		while ((str = ww->ReadLine()) != nullptr)
		{
			words = str->Split(delimiter);
			name[num] = words[0];
			ssscore[num] = words[1];
			level[num] = words[2];
			num++;
		}
		ww->Close();
		if (num == 10)
		{
			int nn = 4;
			String^ sstr = "label";
			for (int i = 0; i < 10; i++)
			{
				sstr = "label";
				sstr += nn;
				if (name[i] == "-1")
				{
					Controls->Find(sstr, true)[0]->Text = "-------";
				}
				else
				{
					Controls->Find(sstr, true)[0]->Text = name[i];
				}
				nn += 2;
			}
			for (int i = 0; i < 10; i++)
			{
				sstr = "label";
				int sum = 32 - i;
				sstr += sum;
				if (name[i] == "-1")
				{
					Controls->Find(sstr, true)[0]->Text = "-------";
				}
				else
				{
					Controls->Find(sstr, true)[0]->Text = ssscore[i];
				}
			}
			for (int i = 0; i < 10; i++)
			{
				sstr = "label";
				int sum = 45 - i;
				sstr += sum;
				if (name[i] == "-1")
				{
					Controls->Find(sstr, true)[0]->Text = "-------";
				}
				else
				{
					if (level[i] == "0")
					{
						Controls->Find(sstr, true)[0]->Text = "易";
					}
					else if (level[i] == "1")
					{
						Controls->Find(sstr, true)[0]->Text = "中";
					}
					else if (level[i] == "2")
					{
						Controls->Find(sstr, true)[0]->Text = "難";
					}
				}
			}
		}
		else
		{
			StreamReader^ www = gcnew StreamReader("score.txt");//清空
			www->Close();
			long long int min = UInt64::Parse(ssscore[0]);//找最小跟他交換
			int m;
			for (int i = 1; i < 10; i++)
			{
				if (min > UInt64::Parse(ssscore[i]))
				{
					min = UInt64::Parse(ssscore[i]);
					m = i;
				}
			}
			String^ temp;
			temp = name[m];
			name[m] = name[10];
			name[10] = temp;

			temp = ssscore[m];
			ssscore[m] = ssscore[10];
			ssscore[10] = temp;
			
			temp = level[m];
			level[m] = level[10];
			level[10] = temp;
			
			for (int i = 0; i < 10; i++)//排序
			{
				for (int j = i + 1; j < 10; j++)
				{
					if (UInt64::Parse(ssscore[i]) < UInt64::Parse(ssscore[j]))
					{
						String^ temp;
						temp = name[j];
						name[j] = name[i];
						name[i] = temp;

						temp = ssscore[j];
						ssscore[j] = ssscore[i];
						ssscore[i] = temp;

						temp = level[j];
						level[j] = level[i];
						level[i] = temp;
					}
				}
			}
			//改變顯示
			int nn = 4;
			String^ sstr = "label";
			for (int i = 0; i < 10; i++)
			{
				sstr = "label";
				sstr += nn;
				if (name[i] == "-1")
				{
					Controls->Find(sstr, true)[0]->Text = "-------";
				}
				else
				{
					Controls->Find(sstr, true)[0]->Text = name[i];
				}
				nn += 2;
			}
			for (int i = 0; i < 10; i++)
			{
				sstr = "label";
				int sum = 32 - i;
				sstr += sum;
				if (name[i] == "-1")
				{
					Controls->Find(sstr, true)[0]->Text = "-------";
				}
				else
				{
					Controls->Find(sstr, true)[0]->Text = ssscore[i];
				}
			}
			for (int i = 0; i < 10; i++)
			{
				sstr = "label";
				int sum = 45 - i;
				sstr += sum;
				if (name[i] == "-1")
				{
					Controls->Find(sstr, true)[0]->Text = "-------";
				}
				else
				{
					if (level[i] == "0")
					{
						Controls->Find(sstr, true)[0]->Text = "易";
					}
					else if (level[i] == "1")
					{
						Controls->Find(sstr, true)[0]->Text = "中";
					}
					else if (level[i] == "2")
					{
						Controls->Find(sstr, true)[0]->Text = "難";
					}
				}
			}
			StreamWriter^ wrt = gcnew StreamWriter("score.txt");//重新寫入
			for (int i = 0; i < 10; i++)
			{
				wrt->WriteLine(name[i] + " " + ssscore[i] + " " + level[i]);
			}
			wrt->Close();
		}
	}	
};
}
