#ifndef APP_H
        #define APP_H


        #include <Application.h>


        class App : public BApplication
        {
        public:
          App(void);
          void MessageReceived(BMessage *msg);
        private:
            int32 fCount;
            BWindow *myWindow;
        };


        #endif
