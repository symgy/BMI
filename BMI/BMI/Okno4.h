#pragma once

namespace BMI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Okno4
	/// </summary>
	public ref class Okno4 : public System::Windows::Forms::Form
	{
	public:
		Okno4(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
			waga = 50;
			wzrost = 155;
			textBox1->Text = Convert::ToString(waga);
			textBox2->Text = Convert::ToString(wzrost);
			pictureBox1->Image = imageList1->Images[0];
			label5->Visible = false;
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Okno4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ImageList^  imageList1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		double wzrost=0, waga=0, bmi;
		float x=0 ,y=0;



	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  pilka;



	private: System::Windows::Forms::Label^  label5;



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda wsparcia projektanta - nie nale¿y modyfikowaæ
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Okno4::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pilka = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Wpisz swoj¹ wagê w kg:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Wpisz swój wzrost w cm:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(155, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(155, 46);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 207);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(130, 130);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Okno4::pictureBox1_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"pytajnik.png");
			this->imageList1->Images->SetKeyName(1, L"dobrze.png");
			this->imageList1->Images->SetKeyName(2, L"zle.png");
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(261, 20);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 46);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Oblicz!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Okno4::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(148, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 25);
			this->label3->TabIndex = 9;
			this->label3->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(24, 78);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 25);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Twoje BMI:";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(362, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(443, 431);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 127);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"label5";
			// 
			// pilka
			// 
			this->pilka->BackColor = System::Drawing::Color::Red;
			this->pilka->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pilka->ForeColor = System::Drawing::Color::Red;
			this->pilka->Location = System::Drawing::Point(421, 383);
			this->pilka->Name = L"pilka";
			this->pilka->Size = System::Drawing::Size(10, 10);
			this->pilka->TabIndex = 14;
			this->pilka->Text = L"button2";
			this->pilka->UseVisualStyleBackColor = false;
			// 
			// Okno4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(842, 498);
			this->Controls->Add(this->pilka);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"Okno4";
			this->Text = L"Okno4";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
				 
	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
		 
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 wzrost = Convert::ToDouble(textBox2->Text);
			 waga = Convert::ToDouble(textBox1->Text);
			 label5->Visible = true;


			 float x1;
				//obliczanie pozycji x
			 if (waga > 100){
				 x1 = ((waga - 30)*16.65);
			 }
			 else{
				 x1 = ((waga - 30)*16.1); 
			 }
			 x = x1 / 5; //11.7 pxl na kratke
			 x = Math::Round(x, 0);
			 pilka->Left = 421 + x;



				// obliczanie pozycji y
				float y1 = ((wzrost - 125) * 16.5);
				y =  y1 / 5;
				y = Math::Round(y, 0);
				pilka->Top = 383-(y);
				 bmi = (waga / ((wzrost*wzrost) / 10000));
				 bmi = Math::Round(bmi, 2); // zaokraglenie do 2 miejsc po przecinku
				 label3->Text = Convert::ToString(bmi);
				 

				 if (bmi < 17) label5->Text = "Twój wspó³czynnik bmi oznacza: WYCHUDZENIE!";
				 if ((bmi > 17) && (bmi < 18.5)) label5->Text = "Twój wspó³czynnik bmi oznacza: NIEDOWAGÊ!";
				 if ((bmi > 25) && (bmi < 30)) label5->Text = "Twój wspó³czynnik bmi oznacza: NADWAGÊ!";
				 if (bmi > 30) label5->Text = "Twój wspó³czynnik bmi oznacza: OTY£OŒÆ!";
				 if ((bmi > 18.5) && (bmi < 25)) {
					 label5->Text = "Twój wspó³czynnik bmi oznacza: PRAWID£OW¥ WAGÊ";
					 pictureBox1->Image = imageList1->Images[1];
				 }
				 else pictureBox1->Image = imageList1->Images[2];
			
}
};
}
