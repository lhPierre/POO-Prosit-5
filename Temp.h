#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button_back;


	private: System::Windows::Forms::Button^ button_next;
	private: System::Windows::Forms::Button^ button_source;
	private: System::Windows::Forms::Button^ btn_proceder;




	private: System::Windows::Forms::FolderBrowserDialog^ fld_source;
	private: System::Windows::Forms::FolderBrowserDialog^ fld_destination;

	private: int i = 0;
	private: array<String^>^ liste_images;
	private: System::Windows::Forms::Button^ button_dest;
	private: System::Windows::Forms::RadioButton^ rdb_copier;
	private: System::Windows::Forms::RadioButton^ rdb_coiperEffacer;
	private: NS_services::service_image image;
	private: NS_services::service_fichier svcFichier;
	private: System::Windows::Forms::TextBox^ txt_rslt;
	private: System::Windows::Forms::Button^ btn_first;
	private: System::Windows::Forms::Button^ btn_last;
	private: System::ComponentModel::IContainer^ components;


		   /// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   this->fld_source = (gcnew System::Windows::Forms::FolderBrowserDialog());
			   this->fld_destination = (gcnew System::Windows::Forms::FolderBrowserDialog());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->button_back = (gcnew System::Windows::Forms::Button());
			   this->button_next = (gcnew System::Windows::Forms::Button());
			   this->button_source = (gcnew System::Windows::Forms::Button());
			   this->btn_proceder = (gcnew System::Windows::Forms::Button());
			   this->button_dest = (gcnew System::Windows::Forms::Button());
			   this->rdb_copier = (gcnew System::Windows::Forms::RadioButton());
			   this->rdb_coiperEffacer = (gcnew System::Windows::Forms::RadioButton());
			   this->txt_rslt = (gcnew System::Windows::Forms::TextBox());
			   this->btn_first = (gcnew System::Windows::Forms::Button());
			   this->btn_last = (gcnew System::Windows::Forms::Button());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();

			   this->SuspendLayout();
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->pictureBox1->ImageLocation = L"C:\\Users\\ANGEL\\OneDrive - Association Cesi Viacesi mail\\Documents\\Cours\\A2\\POO\\Pr"
				   L"osit 5\\aucune_photo.png";
			   this->pictureBox1->Location = System::Drawing::Point(81, 39);
			   this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(444, 406);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox1->TabIndex = 1;
			   this->pictureBox1->TabStop = false;
			   // 
			   // button_back
			   // 
			   this->button_back->Anchor = System::Windows::Forms::AnchorStyles::Left;
			   this->button_back->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->button_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)));
			   this->button_back->FlatAppearance->BorderSize = 0;
			   this->button_back->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
			   this->button_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button_back->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button_back->Location = System::Drawing::Point(24, 219);
			   this->button_back->Name = L"button_back";
			   this->button_back->Size = System::Drawing::Size(41, 83);
			   this->button_back->TabIndex = 2;
			   this->button_back->Text = L"<";
			   this->button_back->UseVisualStyleBackColor = false;
			   this->button_back->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			   // 
			   // button_next
			   // 
			   this->button_next->Anchor = System::Windows::Forms::AnchorStyles::Right;
			   this->button_next->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)));
			   this->button_next->FlatAppearance->BorderSize = 0;
			   this->button_next->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button_next->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button_next->ForeColor = System::Drawing::SystemColors::ControlLight;
			   this->button_next->Location = System::Drawing::Point(539, 219);
			   this->button_next->Name = L"button_next";
			   this->button_next->Size = System::Drawing::Size(41, 83);
			   this->button_next->TabIndex = 3;
			   this->button_next->Text = L">";
			   this->button_next->UseVisualStyleBackColor = false;
			   this->button_next->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			   // 
			   // button_source
			   // 
			   this->button_source->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			   this->button_source->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				   static_cast<System::Int32>(static_cast<System::Byte>(82)));
			   this->button_source->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)),
				   static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(82)));
			   this->button_source->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button_source->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button_source->Location = System::Drawing::Point(317, 513);
			   this->button_source->Name = L"button_source";
			   this->button_source->Size = System::Drawing::Size(100, 27);
			   this->button_source->TabIndex = 4;
			   this->button_source->Text = L"Source";
			   this->button_source->UseVisualStyleBackColor = false;
			   this->button_source->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			   // 
			   // btn_proceder
			   // 
			   this->btn_proceder->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->btn_proceder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				   static_cast<System::Int32>(static_cast<System::Byte>(82)));
			   this->btn_proceder->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)),
				   static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(82)));
			   this->btn_proceder->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_proceder->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_proceder->Location = System::Drawing::Point(200, 513);
			   this->btn_proceder->Name = L"btn_proceder";
			   this->btn_proceder->Size = System::Drawing::Size(100, 27);
			   this->btn_proceder->TabIndex = 5;
			   this->btn_proceder->Text = L"Proc�der";
			   this->btn_proceder->UseVisualStyleBackColor = false;
			   this->btn_proceder->Click += gcnew System::EventHandler(this, &Form1::btn_proceder_Click);
			   // 
			   // button_dest
			   // 
			   this->button_dest->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			   this->button_dest->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				   static_cast<System::Int32>(static_cast<System::Byte>(82)));
			   this->button_dest->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)),
				   static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(82)));
			   this->button_dest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button_dest->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button_dest->Location = System::Drawing::Point(440, 513);
			   this->button_dest->Name = L"button_dest";
			   this->button_dest->Size = System::Drawing::Size(108, 27);
			   this->button_dest->TabIndex = 6;
			   this->button_dest->Text = L"destination";
			   this->button_dest->UseVisualStyleBackColor = false;
			   this->button_dest->Click += gcnew System::EventHandler(this, &Form1::button_dest_Click);
			   // 
			   // rdb_copier
			   // 
			   this->rdb_copier->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->rdb_copier->AutoSize = true;
			   this->rdb_copier->Checked = true;
			   this->rdb_copier->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->rdb_copier->Location = System::Drawing::Point(28, 473);
			   this->rdb_copier->Name = L"rdb_copier";
			   this->rdb_copier->Size = System::Drawing::Size(67, 23);
			   this->rdb_copier->TabIndex = 7;
			   this->rdb_copier->TabStop = true;
			   this->rdb_copier->Text = L"Copier";
			   this->rdb_copier->UseVisualStyleBackColor = true;
			   // 
			   // rdb_coiperEffacer
			   // 
			   this->rdb_coiperEffacer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->rdb_coiperEffacer->AutoSize = true;
			   this->rdb_coiperEffacer->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->rdb_coiperEffacer->Location = System::Drawing::Point(29, 519);
			   this->rdb_coiperEffacer->Name = L"rdb_coiperEffacer";
			   this->rdb_coiperEffacer->Size = System::Drawing::Size(111, 23);
			   this->rdb_coiperEffacer->TabIndex = 8;
			   this->rdb_coiperEffacer->TabStop = true;
			   this->rdb_coiperEffacer->Text = L"Copier effacer";
			   this->rdb_coiperEffacer->UseVisualStyleBackColor = true;
			   // 
			   // txt_rslt
			   // 
			   this->txt_rslt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->txt_rslt->Location = System::Drawing::Point(200, 471);
			   this->txt_rslt->MaximumSize = System::Drawing::Size(462, 26);
			   this->txt_rslt->Name = L"txt_rslt";
			   this->txt_rslt->Size = System::Drawing::Size(348, 22);
			   this->txt_rslt->TabIndex = 9;
			   // 
			   // btn_first
			   // 
			   this->btn_first->Anchor = System::Windows::Forms::AnchorStyles::Left;
			   this->btn_first->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->btn_first->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)));
			   this->btn_first->FlatAppearance->BorderSize = 0;
			   this->btn_first->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
			   this->btn_first->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_first->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_first->Location = System::Drawing::Point(-1, 214);
			   this->btn_first->Name = L"btn_first";
			   this->btn_first->Size = System::Drawing::Size(19, 113);
			   this->btn_first->TabIndex = 10;
			   this->btn_first->Text = L"<<";
			   this->btn_first->UseVisualStyleBackColor = false;
			   this->btn_first->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			   // 
			   // btn_last
			   // 
			   this->btn_last->Anchor = System::Windows::Forms::AnchorStyles::Right;
			   this->btn_last->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->btn_last->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)));
			   this->btn_last->FlatAppearance->BorderSize = 0;
			   this->btn_last->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
			   this->btn_last->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_last->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_last->Location = System::Drawing::Point(586, 214);
			   this->btn_last->Name = L"btn_last";
			   this->btn_last->Size = System::Drawing::Size(21, 113);
			   this->btn_last->TabIndex = 11;
			   this->btn_last->Text = L">>";
			   this->btn_last->UseVisualStyleBackColor = false;
			   this->btn_last->Click += gcnew System::EventHandler(this, &Form1::btn_last_Click);
			   // 
			   // 
			   // Form1
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)));
			   this->ClientSize = System::Drawing::Size(609, 569);
			   this->Controls->Add(this->btn_last);
			   this->Controls->Add(this->btn_first);
			   this->Controls->Add(this->txt_rslt);
			   this->Controls->Add(this->rdb_coiperEffacer);
			   this->Controls->Add(this->rdb_copier);
			   this->Controls->Add(this->button_dest);
			   this->Controls->Add(this->btn_proceder);
			   this->Controls->Add(this->button_source);
			   this->Controls->Add(this->button_next);
			   this->Controls->Add(this->button_back);
			   this->Controls->Add(this->pictureBox1);
			   this->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->Margin = System::Windows::Forms::Padding(2);
			   this->MinimumSize = System::Drawing::Size(625, 608);
			   this->Name = L"Form1";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Galerie Image";
			   this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (liste_images) {
			if (this->i > 0)
			{
				this->i--;
				this->pictureBox1->Image = image.lireImage(this->liste_images[this->i]);
				this->Text = liste_images[this->i];
			}
		}

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {


		this->fld_source->ShowDialog();
		liste_images = svcFichier.explorer(this->fld_source->SelectedPath);
		this->pictureBox1->Image = image.lireImage(liste_images[i]);
		this->Text = liste_images[this->i];

	}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		if (liste_images) {
			if (this->i < this->liste_images->Length - 1)
			{
				this->i++;
				this->pictureBox1->Image = image.lireImage(liste_images[i]);
			};
			this->Text = liste_images[this->i];
		}


	}

	private: System::Void btn_proceder_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->rdb_copier->Checked == true)
		{
			svcFichier.copier(this->liste_images, this->fld_destination->SelectedPath);
			this->txt_rslt->Clear();
			this->txt_rslt->Text = "Les fichiers ont �t� copi�s dans le dossier : " + this->fld_destination->SelectedPath;
		}
		else if (this->rdb_coiperEffacer->Checked == true)
		{
			svcFichier.copierEffacer(this->liste_images, this->fld_destination->SelectedPath);
			this->txt_rslt->Text = "Les fichiers ont �t� effac�s copi�s dans le dossier : " + this->fld_destination->SelectedPath;
		}

	}
	private: System::Void button_dest_Click(System::Object^ sender, System::EventArgs^ e) {

		this->fld_destination->ShowDialog();



	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (liste_images) {
			this->i = 0;
			this->pictureBox1->Image = image.lireImage(this->liste_images[this->i]);
			this->Text = liste_images[this->i];
		}

	}
	private: System::Void btn_last_Click(System::Object^ sender, System::EventArgs^ e) {
		if (liste_images) {
			this->i = this->liste_images->Length - 1;
			this->pictureBox1->Image = image.lireImage(this->liste_images[this->i]);
			this->Text = liste_images[this->i];
		}

	}
	};
}