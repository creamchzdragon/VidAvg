#pragma once
#include <string>
#include <sstream>
#include <msclr\marshal_cppstd.h>
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
namespace imageviewer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
		
	private: System::Windows::Forms::ProgressBar^  progressBar;
	protected: 
	private: System::Windows::Forms::Button^  startBut;
	private: System::Windows::Forms::TextBox^  inputFileBox;
	private: System::Windows::Forms::Button^  inputFileBut;
	private: System::Windows::Forms::TextBox^  outputFileBox;
	private: System::Windows::Forms::Button^  outputFileBut;
	private: System::Windows::Forms::PictureBox^  pictureBox;
	private: System::Windows::Forms::Label^  estTime;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;



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
			this->progressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->startBut = (gcnew System::Windows::Forms::Button());
			this->inputFileBox = (gcnew System::Windows::Forms::TextBox());
			this->inputFileBut = (gcnew System::Windows::Forms::Button());
			this->outputFileBox = (gcnew System::Windows::Forms::TextBox());
			this->outputFileBut = (gcnew System::Windows::Forms::Button());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->estTime = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// progressBar
			// 
			this->progressBar->Location = System::Drawing::Point(12, 685);
			this->progressBar->Name = L"progressBar";
			this->progressBar->Size = System::Drawing::Size(1134, 23);
			this->progressBar->TabIndex = 2;
			// 
			// startBut
			// 
			this->startBut->Location = System::Drawing::Point(1193, 685);
			this->startBut->Name = L"startBut";
			this->startBut->Size = System::Drawing::Size(75, 23);
			this->startBut->TabIndex = 3;
			this->startBut->Text = L"Start";
			this->startBut->UseVisualStyleBackColor = true;
			this->startBut->Click += gcnew System::EventHandler(this, &Form1::startButClick);
			// 
			// inputFileBox
			// 
			this->inputFileBox->Location = System::Drawing::Point(13, 657);
			this->inputFileBox->Name = L"inputFileBox";
			this->inputFileBox->Size = System::Drawing::Size(544, 20);
			this->inputFileBox->TabIndex = 4;
			// 
			// inputFileBut
			// 
			this->inputFileBut->Location = System::Drawing::Point(562, 655);
			this->inputFileBut->Name = L"inputFileBut";
			this->inputFileBut->Size = System::Drawing::Size(75, 23);
			this->inputFileBut->TabIndex = 5;
			this->inputFileBut->Text = L"Input File";
			this->inputFileBut->UseVisualStyleBackColor = true;
			this->inputFileBut->Click += gcnew System::EventHandler(this, &Form1::inputFileBut_Click);
			// 
			// outputFileBox
			// 
			this->outputFileBox->Location = System::Drawing::Point(643, 658);
			this->outputFileBox->Name = L"outputFileBox";
			this->outputFileBox->Size = System::Drawing::Size(544, 20);
			this->outputFileBox->TabIndex = 6;
			// 
			// outputFileBut
			// 
			this->outputFileBut->Location = System::Drawing::Point(1193, 655);
			this->outputFileBut->Name = L"outputFileBut";
			this->outputFileBut->Size = System::Drawing::Size(75, 23);
			this->outputFileBut->TabIndex = 7;
			this->outputFileBut->Text = L"Output File";
			this->outputFileBut->UseVisualStyleBackColor = true;
			this->outputFileBut->Click += gcnew System::EventHandler(this, &Form1::outputFileBut_Click);
			// 
			// pictureBox
			// 
			this->pictureBox->Location = System::Drawing::Point(13, 13);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(1255, 637);
			this->pictureBox->TabIndex = 8;
			this->pictureBox->TabStop = false;
			// 
			// estTime
			// 
			this->estTime->AutoSize = true;
			this->estTime->Location = System::Drawing::Point(1152, 690);
			this->estTime->Name = L"estTime";
			this->estTime->Size = System::Drawing::Size(34, 13);
			this->estTime->TabIndex = 9;
			this->estTime->Text = L"00:00";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"txt files (*.txt)|*.txt|All files (*.*)|*.*";
			this->openFileDialog1->FilterIndex = 2;
			this->openFileDialog1->InitialDirectory = L"c:\\";
			this->openFileDialog1->RestoreDirectory = true;
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->estTime);
			this->Controls->Add(this->pictureBox);
			this->Controls->Add(this->outputFileBut);
			this->Controls->Add(this->outputFileBox);
			this->Controls->Add(this->inputFileBut);
			this->Controls->Add(this->inputFileBox);
			this->Controls->Add(this->startBut);
			this->Controls->Add(this->progressBar);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void startButClick(System::Object^  sender, System::EventArgs^  e) {
				 this->start();
				 
			 }
	public:
		void lockInput()
		{
			this->inputFileBox->Enabled = false;
			this->outputFileBox->Enabled = false;
			this->inputFileBut->Enabled = false;
			this->outputFileBut->Enabled = false;
			this->startBut->Enabled = false;
		}
		void unlockInput()
		{
			this->inputFileBox->Enabled = true;
			this->outputFileBox->Enabled = true;
			this->inputFileBut->Enabled = true;
			this->outputFileBut->Enabled = true;
			this->startBut->Enabled = true;
			
		}
		void setInText(std::string s)
		{
			this->inputFileBox->Text = gcnew String(s.c_str());
		}
		void setOutText(std::string s)
		{
			this->outputFileBox->Text = gcnew String(s.c_str());
		}
		void setInText(System::String^ s)
		{
			this->inputFileBox->Text =s;
		}
		void setOutText(System::String^ s)
		{
			this->outputFileBox->Text = s;
		}
		std::string getInText()
		{
			return msclr::interop::marshal_as<std::string>(this->inputFileBox->Text);
		}
		std::string getOutText()
		{
			return msclr::interop::marshal_as<std::string>(this->outputFileBox->Text);
		}
		void setProgress(int i){
			if(0<=i&&i<=100)
				this->progressBar->Value = i;
		}
		int  getProgress(){
			return this->progressBar->Value;
		}
		void setImage(std::string path){
			this->pictureBox->ImageLocation=gcnew String(path.c_str());
		}
		void setAcceptedExt(std::string ext){
			this->openFileDialog1->Filter = gcnew String(ext.c_str());
		}
		void (*start)(void);
		void setProcess(void (*start)(void)){
			this->start=start;
		}


private: System::Void inputFileBut_Click(System::Object^  sender, System::EventArgs^  e) {

			 openFileDialog1->FileName=gcnew String(getInText().c_str());
			 setAcceptedExt("mp4 files (*.mp4)|*.mp4|avi files (*.avi)|*.avi|All Files (*.*)|*.*");
			if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
          {
             setInText(openFileDialog1->FileName);
          }
	
		 }
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

		 }
private: System::Void outputFileBut_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 saveFileDialog1->FileName=gcnew String(getOutText().c_str());
			 saveFileDialog1->Filter="jpg files (*.jpg)|*.jpg|All Files (*.*)|*.*";
			if ( saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
          {
             setOutText(saveFileDialog1->FileName);
          }
		 }
};
}

