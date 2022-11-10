namespace WindowsFormsApplication1
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.Aceptar = new System.Windows.Forms.Button();
            this.C = new System.Windows.Forms.CheckBox();
            this.f = new System.Windows.Forms.CheckBox();
            this.T = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // Aceptar
            // 
            this.Aceptar.Location = new System.Drawing.Point(97, 170);
            this.Aceptar.Name = "Aceptar";
            this.Aceptar.Size = new System.Drawing.Size(75, 23);
            this.Aceptar.TabIndex = 0;
            this.Aceptar.Text = "Aceptar";
            this.Aceptar.UseVisualStyleBackColor = true;
            this.Aceptar.Click += new System.EventHandler(this.Aceptar_Click);
            // 
            // C
            // 
            this.C.AutoSize = true;
            this.C.Location = new System.Drawing.Point(97, 89);
            this.C.Name = "C";
            this.C.Size = new System.Drawing.Size(68, 17);
            this.C.TabIndex = 1;
            this.C.Text = "A celsius";
            this.C.UseVisualStyleBackColor = true;
            // 
            // f
            // 
            this.f.AutoSize = true;
            this.f.Location = new System.Drawing.Point(97, 122);
            this.f.Name = "f";
            this.f.Size = new System.Drawing.Size(80, 17);
            this.f.TabIndex = 2;
            this.f.Text = "A farenheid";
            this.f.UseVisualStyleBackColor = true;
            // 
            // T
            // 
            this.T.Location = new System.Drawing.Point(97, 39);
            this.T.Name = "T";
            this.T.Size = new System.Drawing.Size(75, 20);
            this.T.TabIndex = 3;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(284, 261);
            this.Controls.Add(this.T);
            this.Controls.Add(this.f);
            this.Controls.Add(this.C);
            this.Controls.Add(this.Aceptar);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button Aceptar;
        private System.Windows.Forms.CheckBox C;
        private System.Windows.Forms.CheckBox f;
        private System.Windows.Forms.TextBox T;
    }
}

