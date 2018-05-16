	#include "App.h"
        #include <Window.h>
        #include <Button.h>
        #include <View.h>
        #include <String.h>


        enum
        {
          M_BUTTON_CLICKED = 'btcl'
        };
 
        App::App(void)
            :    BApplication("application/x-vnd.lh-ClickApp")
        {
          //counter
          fCount = 0;


          //create window
          BRect frame(100,100,500,400);
          myWindow = new BWindow(frame,"Click app"
                                         , B_TITLED_WINDOW
                                         , B_ASYNCHRONOUS_CONTROLS
                                           | B_QUIT_ON_WINDOW_CLOSE);


          //create button and add to window
          BButton *button = new BButton(BRect(10,10,11,11),"button","Click here!"
                                       , new BMessage(M_BUTTON_CLICKED));
          button->SetTarget(this);
          button->ResizeToPreferred();
          myWindow->AddChild(button);


          //display the window
          myWindow->Show();
        }
        
        const char *path = "/boot/home/Desktop/File.txt";
        void
        WriteFile(path)
        {
        BFile file(path,B_READ_WRITE| B_CREATE_FILE);
        File.Write("Your message box opened!");
        return B_OK;
        }


        void
        App::MessageReceived(BMessage *msg)
        {
          switch(msg->what)
          {
            case M_BUTTON_CLICKED:
            {
              WriteFile(path);	
              fCount++;
              BString labelString("Clicks: ");
              labelString << fCount;
              myWindow->SetTitle(labelString.String());
              break;
            }
            def