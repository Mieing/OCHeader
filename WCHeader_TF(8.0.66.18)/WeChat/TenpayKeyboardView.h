@class NSString, UITextField, UIView;

@interface TenpayKeyboardView : UIView {
    id _touchNumTarget;
    SEL _touchNumCallback;
    id _touchDeleteTarget;
    SEL _touchDeleteCallback;
    NSString *_keyboardText;
    UITextField *_curTextField;
    UIView *_myKeyboardiPadPortrait;
    UIView *_myKeyboardiPadLandscape;
    long long _keybordOrientation;
}

- (id)init;
- (void)dealloc;
- (id)initWithType:(long long)a0 ImageNumNormal:(id)a1 ImageNumPress:(id)a2 ImageDelNormal:(id)a3 ImageDelPess:(id)a4 Controller:(id)a5;
- (id)initWithType:(long long)a0 ImageNumNormal:(id)a1 ImageNumPress:(id)a2 ImageDelNormal:(id)a3 ImageDelPess:(id)a4 ImageExtendNormal:(id)a5 ImageExtendPess:(id)a6 Controller:(id)a7;
- (void)setPhoneKeyBoard:(long long)a0 ImageNumNormal:(id)a1 ImageNumPress:(id)a2 ImageDelNormal:(id)a3 ImageDelPess:(id)a4 ImageExtendNormal:(id)a5 ImageExtendPess:(id)a6;
- (void)setPadKeyBoard;
- (void)orientationDidChange:(id)a0;
- (void)setKeyboradOrientation:(long long)a0;
- (void)keyboardChangeFrame:(id)a0;
- (void)updateKeyboardSizeForFloat:(struct CGSize { double x0; double x1; })a0 rootView:(id)a1 isFloatKeyboard:(BOOL)a2;
- (void)useKeyboardWithImageNumNormalOnIPad:(long long)a0 ImageNumNormal:(id)a1 ImageNumPress:(id)a2 ImageDelNormal:(id)a3 ImageDelPess:(id)a4 ImageExtendNormal:(id)a5 ImageExtendPess:(id)a6 Controller:(id)a7;
- (id)createMainKeyboardWithWidth:(int)a0 andHeight:(int)a1 type:(long long)a2 ImageNumNormal:(id)a3 ImageNumPress:(id)a4 ImageDelNormal:(id)a5 ImageDelPess:(id)a6 ImageExtendNormal:(id)a7 ImageExtendPess:(id)a8 orientation:(long long)a9;
- (void)setKeyboardNumFontColor:(id)a0 bgColor:(id)a1 lineColor:(id)a2;
- (void)setKeyboardNumFontColor:(id)a0 bgColor:(id)a1 lineColor:(id)a2 rootView:(id)a3;
- (void)SetTouchNum:(id)a0 callback:(SEL)a1;
- (void)SetTouchDelete:(id)a0 callback:(SEL)a1;
- (void)numberKeyBoardClicked:(id)a0;

@end
