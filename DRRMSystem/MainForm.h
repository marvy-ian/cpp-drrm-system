#pragma once

namespace DRRMSystem {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MainForm : public System::Windows::Forms::Form
    {
    public:
        MainForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MainForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        // UI Components
        System::Windows::Forms::TabControl^ tabControl;
        System::Windows::Forms::TabPage^ tabDashboard;
        System::Windows::Forms::TabPage^ tabIncidents;
        System::Windows::Forms::TabPage^ tabResources;

        // Dashboard Tab Elements
        System::Windows::Forms::Label^ lblHeader;
        System::Windows::Forms::Panel^ pnlAlertStatus;
        System::Windows::Forms::Label^ lblAlertTitle;
        System::Windows::Forms::ComboBox^ cmbAlertLevel;
        System::Windows::Forms::ListBox^ lstActiveIncidents;

        // Incident Report Tab Elements
        System::Windows::Forms::Label^ lblReportTitle;
        System::Windows::Forms::TextBox^ txtLocation;
        System::Windows::Forms::ComboBox^ cmbDisasterType;
        System::Windows::Forms::RichTextBox^ rtbDetails;
        System::Windows::Forms::Button^ btnSubmitIncident;

        // Resource Tab Elements
        System::Windows::Forms::DataGridView^ dgvResources;
        System::Windows::Forms::Button^ btnDeployResource;

        System::ComponentModel::Container^ components;

        #pragma Windows Form Designer generated code
            void InitializeComponent(void)
        {
                this->tabControl = (gcnew System::Windows::Forms::TabControl());
                this->tabDashboard = (gcnew System::Windows::Forms::TabPage());
                this->lstActiveIncidents = (gcnew System::Windows::Forms::ListBox());
                this->pnlAlertStatus = (gcnew System::Windows::Forms::Panel());
                this->cmbAlertLevel = (gcnew System::Windows::Forms::ComboBox());
                this->lblAlertTitle = (gcnew System::Windows::Forms::Label());
                this->tabIncidents = (gcnew System::Windows::Forms::TabPage());
                this->btnSubmitIncident = (gcnew System::Windows::Forms::Button());
                this->rtbDetails = (gcnew System::Windows::Forms::RichTextBox());
                this->cmbDisasterType = (gcnew System::Windows::Forms::ComboBox());
                this->txtLocation = (gcnew System::Windows::Forms::TextBox());
                this->lblReportTitle = (gcnew System::Windows::Forms::Label());
                this->tabResources = (gcnew System::Windows::Forms::TabPage());
                this->btnDeployResource = (gcnew System::Windows::Forms::Button());
                this->dgvResources = (gcnew System::Windows::Forms::DataGridView());
                this->lblHeader = (gcnew System::Windows::Forms::Label());
                this->tabControl->SuspendLayout();
                this->tabDashboard->SuspendLayout();
                this->pnlAlertStatus->SuspendLayout();
                this->tabIncidents->SuspendLayout();
                this->tabResources->SuspendLayout();
                (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvResources))->BeginInit();
                this->SuspendLayout();
                // 
                // tabControl
                // 
                this->tabControl->Controls->Add(this->tabDashboard);
                this->tabControl->Controls->Add(this->tabIncidents);
                this->tabControl->Controls->Add(this->tabResources);
                this->tabControl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
                this->tabControl->Location = System::Drawing::Point(12, 65);
                this->tabControl->Name = L"tabControl";
                this->tabControl->SelectedIndex = 0;
                this->tabControl->Size = System::Drawing::Size(876, 510);
                this->tabControl->TabIndex = 1;
                // 
                // tabDashboard
                // 
                this->tabDashboard->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                    static_cast<System::Int32>(static_cast<System::Byte>(48)));
                this->tabDashboard->Controls->Add(this->lstActiveIncidents);
                this->tabDashboard->Controls->Add(this->pnlAlertStatus);
                this->tabDashboard->Location = System::Drawing::Point(4, 32);
                this->tabDashboard->Name = L"tabDashboard";
                this->tabDashboard->Size = System::Drawing::Size(868, 474);
                this->tabDashboard->TabIndex = 0;
                this->tabDashboard->Text = L"Live Dashboard";
                // 
                // lstActiveIncidents
                // 
                this->lstActiveIncidents->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
                    static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
                this->lstActiveIncidents->ForeColor = System::Drawing::Color::LightGreen;
                this->lstActiveIncidents->ItemHeight = 23;
                this->lstActiveIncidents->Location = System::Drawing::Point(340, 20);
                this->lstActiveIncidents->Name = L"lstActiveIncidents";
                this->lstActiveIncidents->Size = System::Drawing::Size(510, 418);
                this->lstActiveIncidents->TabIndex = 0;
                // 
                // pnlAlertStatus
                // 
                this->pnlAlertStatus->BackColor = System::Drawing::Color::DarkRed;
                this->pnlAlertStatus->Controls->Add(this->cmbAlertLevel);
                this->pnlAlertStatus->Controls->Add(this->lblAlertTitle);
                this->pnlAlertStatus->Location = System::Drawing::Point(20, 20);
                this->pnlAlertStatus->Name = L"pnlAlertStatus";
                this->pnlAlertStatus->Size = System::Drawing::Size(300, 120);
                this->pnlAlertStatus->TabIndex = 1;
                // 
                // cmbAlertLevel
                // 
                this->cmbAlertLevel->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                this->cmbAlertLevel->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"CRITICAL (Red)", L"WARNING (Orange)", L"MONITORING (White)" });
                this->cmbAlertLevel->Location = System::Drawing::Point(14, 60);
                this->cmbAlertLevel->Name = L"cmbAlertLevel";
                this->cmbAlertLevel->Size = System::Drawing::Size(200, 31);
                this->cmbAlertLevel->TabIndex = 0;
                this->cmbAlertLevel->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::cmbAlertLevel_SelectedIndexChanged);
                // 
                // lblAlertTitle
                // 
                this->lblAlertTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
                this->lblAlertTitle->ForeColor = System::Drawing::Color::White;
                this->lblAlertTitle->Location = System::Drawing::Point(10, 15);
                this->lblAlertTitle->Name = L"lblAlertTitle";
                this->lblAlertTitle->Size = System::Drawing::Size(200, 30);
                this->lblAlertTitle->TabIndex = 1;
                this->lblAlertTitle->Text = L"SYSTEM ALERT LEVEL";
                // 
                // tabIncidents
                // 
                this->tabIncidents->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                    static_cast<System::Int32>(static_cast<System::Byte>(48)));
                this->tabIncidents->Controls->Add(this->btnSubmitIncident);
                this->tabIncidents->Controls->Add(this->rtbDetails);
                this->tabIncidents->Controls->Add(this->cmbDisasterType);
                this->tabIncidents->Controls->Add(this->txtLocation);
                this->tabIncidents->Controls->Add(this->lblReportTitle);
                this->tabIncidents->Location = System::Drawing::Point(4, 32);
                this->tabIncidents->Name = L"tabIncidents";
                this->tabIncidents->Size = System::Drawing::Size(868, 474);
                this->tabIncidents->TabIndex = 1;
                this->tabIncidents->Text = L"Incident Reporting";
                // 
                // btnSubmitIncident
                // 
                this->btnSubmitIncident->BackColor = System::Drawing::Color::Crimson;
                this->btnSubmitIncident->ForeColor = System::Drawing::Color::White;
                this->btnSubmitIncident->Location = System::Drawing::Point(34, 350);
                this->btnSubmitIncident->Name = L"btnSubmitIncident";
                this->btnSubmitIncident->Size = System::Drawing::Size(280, 45);
                this->btnSubmitIncident->TabIndex = 0;
                this->btnSubmitIncident->Text = L"Dispatch Warning & Log Incident";
                this->btnSubmitIncident->UseVisualStyleBackColor = false;
                this->btnSubmitIncident->Click += gcnew System::EventHandler(this, &MainForm::btnSubmitIncident_Click);
                // 
                // rtbDetails
                // 
                this->rtbDetails->Location = System::Drawing::Point(34, 180);
                this->rtbDetails->Name = L"rtbDetails";
                this->rtbDetails->Size = System::Drawing::Size(500, 150);
                this->rtbDetails->TabIndex = 1;
                this->rtbDetails->Text = L"Provide detailed situational assessment, casualties, or immediate needs...";
                // 
                // cmbDisasterType
                // 
                this->cmbDisasterType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                this->cmbDisasterType->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
                    L"Typhoon / Flooding", L"Earthquake", L"Landslide",
                        L"Structure Fire"
                });
                this->cmbDisasterType->Location = System::Drawing::Point(34, 120);
                this->cmbDisasterType->Name = L"cmbDisasterType";
                this->cmbDisasterType->Size = System::Drawing::Size(400, 31);
                this->cmbDisasterType->TabIndex = 2;
                // 
                // txtLocation
                // 
                this->txtLocation->Location = System::Drawing::Point(34, 70);
                this->txtLocation->Name = L"txtLocation";
                this->txtLocation->Size = System::Drawing::Size(400, 30);
                this->txtLocation->TabIndex = 3;
                this->txtLocation->Text = L"Enter Hazard Location/Barangay...";
                // 
                // lblReportTitle
                // 
                this->lblReportTitle->ForeColor = System::Drawing::Color::White;
                this->lblReportTitle->Location = System::Drawing::Point(30, 20);
                this->lblReportTitle->Name = L"lblReportTitle";
                this->lblReportTitle->Size = System::Drawing::Size(400, 30);
                this->lblReportTitle->TabIndex = 4;
                this->lblReportTitle->Text = L"Log New DRRM Emergency Incident:";
                // 
                // tabResources
                // 
                this->tabResources->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                    static_cast<System::Int32>(static_cast<System::Byte>(48)));
                this->tabResources->Controls->Add(this->btnDeployResource);
                this->tabResources->Controls->Add(this->dgvResources);
                this->tabResources->Location = System::Drawing::Point(4, 32);
                this->tabResources->Name = L"tabResources";
                this->tabResources->Size = System::Drawing::Size(868, 474);
                this->tabResources->TabIndex = 2;
                this->tabResources->Text = L"Resource Logistics";
                // 
                // btnDeployResource
                // 
                this->btnDeployResource->BackColor = System::Drawing::Color::DodgerBlue;
                this->btnDeployResource->ForeColor = System::Drawing::Color::White;
                this->btnDeployResource->Location = System::Drawing::Point(20, 415);
                this->btnDeployResource->Name = L"btnDeployResource";
                this->btnDeployResource->Size = System::Drawing::Size(200, 40);
                this->btnDeployResource->TabIndex = 0;
                this->btnDeployResource->Text = L"Deploy Selected Asset";
                this->btnDeployResource->UseVisualStyleBackColor = false;
                this->btnDeployResource->Click += gcnew System::EventHandler(this, &MainForm::btnDeployResource_Click);
                // 
                // dgvResources
                // 
                this->dgvResources->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                    static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
                this->dgvResources->ColumnHeadersHeight = 29;
                this->dgvResources->Location = System::Drawing::Point(20, 20);
                this->dgvResources->Name = L"dgvResources";
                this->dgvResources->RowHeadersWidth = 51;
                this->dgvResources->Size = System::Drawing::Size(830, 380);
                this->dgvResources->TabIndex = 1;
                // 
                // lblHeader
                // 
                this->lblHeader->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold));
                this->lblHeader->ForeColor = System::Drawing::Color::White;
                this->lblHeader->Location = System::Drawing::Point(12, 9);
                this->lblHeader->Name = L"lblHeader";
                this->lblHeader->Size = System::Drawing::Size(876, 45);
                this->lblHeader->TabIndex = 0;
                this->lblHeader->Text = L"DISASTER RISK REDUCTION & MANAGEMENT SYSTEM";
                this->lblHeader->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
                // 
                // MainForm
                // 
                this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
                this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
                this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
                    static_cast<System::Int32>(static_cast<System::Byte>(33)));
                this->ClientSize = System::Drawing::Size(900, 600);
                this->Controls->Add(this->lblHeader);
                this->Controls->Add(this->tabControl);
                this->Name = L"MainForm";
                this->Text = L"DRRM Command & Control Center";
                this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
                this->tabControl->ResumeLayout(false);
                this->tabDashboard->ResumeLayout(false);
                this->pnlAlertStatus->ResumeLayout(false);
                this->tabIncidents->ResumeLayout(false);
                this->tabIncidents->PerformLayout();
                this->tabResources->ResumeLayout(false);
                (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvResources))->EndInit();
                this->ResumeLayout(false);

            }
        #pragma enregion

            // UI Interactive Logic (Simulating Data Operations dynamically)
    private:
        System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
            // Seed Mock Data into UI on startup
            cmbAlertLevel->SelectedIndex = 0;
            cmbDisasterType->SelectedIndex = 0;

            lstActiveIncidents->Items->Add(L"[08:00 AM] - FLOOD ALERT: Level 2 critical flooding at Brgy. Central");
            lstActiveIncidents->Items->Add(L"[09:15 AM] - RESCUE OP: 3 teams dispatched to Riverside Subdivision");

            // Setup DataGridView columns and initial mock fleet assets
            dgvResources->ColumnCount = 4;
            dgvResources->Columns[0]->Name = L"Asset/Team Name";
            dgvResources->Columns[1]->Name = L"Type";
            dgvResources->Columns[2]->Name = L"Current Status";
            dgvResources->Columns[3]->Name = L"Assigned Unit Location";

            dgvResources->Rows->Add(gcnew array<String^> { L"Rescue Boat Alpha", L"Marine Asset", L"Available", L"HQ Station 1" });
            dgvResources->Rows->Add(gcnew array<String^> { L"Medic Truck 04", L"Medical Response", L"Deployed", L"Brgy. Central" });
            dgvResources->Rows->Add(gcnew array<String^> { L"SRR Team Bravo", L"Search & Rescue", L"Available", L"HQ Base" });
        }

        System::Void cmbAlertLevel_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
            // UI Trick: Dynamically swap dashboard status panel color based on threat levels
            if (cmbAlertLevel->SelectedIndex == 0) {
                pnlAlertStatus->BackColor = System::Drawing::Color::DarkRed;
            }
            else if (cmbAlertLevel->SelectedIndex == 1) {
                pnlAlertStatus->BackColor = System::Drawing::Color::DarkOrange;
            }
            else {
                pnlAlertStatus->BackColor = System::Drawing::Color::DarkGreen;
            }
        }

        System::Void btnSubmitIncident_Click(System::Object^ sender, System::EventArgs^ e) {
            // Take inputs from the user interface and pass it right into the active monitor logs
            String^ incidentSummary = "[" + DateTime::Now.ToShortTimeString() + "] - " +
                cmbDisasterType->SelectedItem->ToString() + " reported at " +
                txtLocation->Text;

            lstActiveIncidents->Items->Insert(0, incidentSummary); // Prepend to top of logs
            MessageBox::Show(L"Emergency broadcast triggered successfully across simulated nodes!", L"DRRM Alert Broadcast", MessageBoxButtons::OK, MessageBoxIcon::Warning);

            // Return to dashboard panel to visually witness the update
            tabControl->SelectedIndex = 0;
        }

        System::Void btnDeployResource_Click(System::Object^ sender, System::EventArgs^ e) {
            if (dgvResources->SelectedRows->Count > 0) {
                dgvResources->SelectedRows[0]->Cells[2]->Value = L"Deployed";
                MessageBox::Show(L"Asset status flagged as DEPLOYED.", L"Logistics Updated", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
            else {
                MessageBox::Show(L"Please select an entire row in the grid to deploy.", L"Selection Needed", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
            }
        }
    };
}