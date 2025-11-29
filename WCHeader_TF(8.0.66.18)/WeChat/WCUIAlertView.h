@class MMTipsViewController;

@interface WCUIAlertView : NSObject {
    MMTipsViewController *_tipsVc;
}

+ (id)showAlertWithTitle:(id)a0 message:(id)a1 cancelBtnTitle:(id)a2 target:(id)a3 sel:(SEL)a4 btnTitle:(id)a5 target:(id)a6 sel:(SEL)a7;
+ (id)showAlertWithTitle:(id)a0 message:(id)a1;
+ (id)showAlertWithTitle:(id)a0 message:(id)a1 btnTitle:(id)a2;
+ (id)showAlertWithTitle:(id)a0 message:(id)a1 btnTitle:(id)a2 target:(id)a3 sel:(SEL)a4;
+ (id)showAlertWithTitle:(id)a0 message:(id)a1 btnTitle:(id)a2 target:(id)a3 sel:(SEL)a4 btnTitle:(id)a5 target:(id)a6 sel:(SEL)a7;
+ (id)showAlertWithTitle:(id)a0 message:(id)a1 btnTitle:(id)a2 target:(id)a3 sel:(SEL)a4 btnTitle:(id)a5 target:(id)a6 sel:(SEL)a7 btnTitle:(id)a8 target:(id)a9 sel:(SEL)a10;
+ (id)showAlertWithTitle:(id)a0 message:(id)a1 btnTitle:(id)a2 target:(id)a3 sel:(SEL)a4 btnTitle:(id)a5 target:(id)a6 sel:(SEL)a7 rightBtnStyle:(long long)a8 view:(id)a9;
+ (id)showAlertWithTitle:(id)a0 message:(id)a1 btnTitle:(id)a2 target:(id)a3 sel:(SEL)a4 btnTitle:(id)a5 target:(id)a6 sel:(SEL)a7 rightBtnStyle:(long long)a8 view:(id)a9 forbidDarkMode:(BOOL)a10;
+ (id)showAlertWithTitle:(id)a0 message:(id)a1 destructiveBtnTitle:(id)a2 target:(id)a3 sel:(SEL)a4 cancelBtnTitle:(id)a5 target:(id)a6 sel:(SEL)a7 view:(id)a8;
+ (id)showAlertWithTitle:(id)a0 message:(id)a1 btnTitle:(id)a2 target:(id)a3 sel:(SEL)a4 btnTitle:(id)a5 target:(id)a6 sel:(SEL)a7 view:(id)a8;
+ (id)showAlertWithTitle:(id)a0 message:(id)a1 cancelBtnTitle:(id)a2 target:(id)a3 sel:(SEL)a4 btnTitle:(id)a5 target:(id)a6 sel:(SEL)a7 view:(id)a8;
+ (id)showAlertWithTitle:(id)a0 message:(id)a1 btnTitle:(id)a2 target:(id)a3 sel:(SEL)a4 view:(id)a5;
+ (id)showAlertWithTitle:(id)a0 message:(id)a1 btnTitle:(id)a2 target:(id)a3 sel:(SEL)a4 btnTitle:(id)a5 target:(id)a6 sel:(SEL)a7 btnTitle:(id)a8 target:(id)a9 sel:(SEL)a10 view:(id)a11;
+ (id)showAlertWithTitle:(id)a0 message:(id)a1 btnTitle:(id)a2 handler:(id /* block */)a3;
+ (id)showAlertWithTitle:(id)a0 message:(id)a1 btnTitle:(id)a2 handler:(id /* block */)a3 btnTitle:(id)a4 handler:(id /* block */)a5;
+ (id)showAlertWithTitle:(id)a0 message:(id)a1 btnTitle:(id)a2 handler:(id /* block */)a3 btnTitle:(id)a4 handler:(id /* block */)a5 windowLevel:(int)a6;
+ (id)showAlertWithTitle:(id)a0 message:(id)a1 btnTitle:(id)a2 handler:(id /* block */)a3 btnTitle:(id)a4 handler:(id /* block */)a5 btnTitle:(id)a6 handler:(id /* block */)a7;
+ (id)showAlertWithTitle:(id)a0 message:(id)a1 cancelBtnTitle:(id)a2 handler:(id /* block */)a3 btnTitle:(id)a4 handler:(id /* block */)a5;
+ (id)getTopVc;

- (id)initWithTitle:(id)a0 message:(id)a1;
- (id)tipsViewController;
- (void)setRequestKeyWindow:(BOOL)a0;
- (void)showTextFieldWithMaxLen:(unsigned int)a0;
- (id)getTextField;
- (id)getTextFieldText;
- (BOOL)isFirstResponder;
- (void)setTextFieldPlaceHolder:(id)a0;
- (void)setTextFieldDefaultText:(id)a0;
- (void)addBtnTitle:(id)a0 target:(id)a1 sel:(SEL)a2;
- (void)addCancelBtnTitle:(id)a0 target:(id)a1 sel:(SEL)a2;
- (void)addBtnTitle:(id)a0 target:(id)a1 sel:(SEL)a2 btnStyle:(long long)a3;
- (void)addBtnTitle:(id)a0 handler:(id /* block */)a1;
- (void)addDestructiveBtnTitle:(id)a0 handler:(id /* block */)a1;
- (void)addCancelBtnTitle:(id)a0 handler:(id /* block */)a1;
- (void)show;
- (void)dismissAnimated:(BOOL)a0;
- (BOOL)isVisible;
- (void).cxx_destruct;

@end
