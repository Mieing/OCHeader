@class NSMutableArray, UITextField, UIView;

@interface TPIDKeyboardView : UIView {
    UITextField *curText;
    UIView *myKeyboardiPadPortrait;
    UIView *myKeyboardiPadLandscape;
    long long keybordOrientation;
    id _touchNumTarget;
    SEL _touchNumCallback;
    id _touchDeleteTarget;
    SEL _touchDeleteCallback;
    NSMutableArray *_portraitBtns;
    NSMutableArray *_landscapeBtns;
    NSMutableArray *_numberBtns;
}

@property (nonatomic) int maxInput;

+ (void)addLabelOnButton:(id)a0 text:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

- (id)init;
- (void)OrientationDidChange:(id)a0;
- (void)keyboardChangeFrame:(id)a0;
- (void)dealloc;
- (void)setKeyboradOrientation:(long long)a0;
- (void)setKeyboardNumFontColor:(id)a0 bgColor:(id)a1;
- (void)setKeyboardNumFontColor:(id)a0 bgColor:(id)a1 lineColor:(id)a2;
- (void)_setKeyboardNumFontColor:(id)a0 bgColor:(id)a1 lineColor:(id)a2 rootView:(id)a3;
- (void)updateKeyboardSizeForFloat:(struct CGSize { double x0; double x1; })a0 rootView:(id)a1 isFloatKb:(BOOL)a2;
- (id)createMainKeyboardWithWidth:(int)a0 andHeight:(int)a1 ImageNumNormal:(id)a2 ImageNumPress:(id)a3 ImageDelNormal:(id)a4 ImageDelPess:(id)a5 ImageExtendNormal:(id)a6 ImageExtendPess:(id)a7 forTarget:(id)a8 WithX:(BOOL)a9 orientation:(long long)a10;
- (void)UseKeyboardWithImageNumNormalOnIPad:(id)a0 ImageNumPress:(id)a1 ImageDelNormal:(id)a2 ImageDelPess:(id)a3 forTarget:(id)a4 Controller:(id)a5 WithX:(BOOL)a6;
- (void)UseKeyboardWithImageNumNormalOnIPad:(id)a0 ImageNumPress:(id)a1 ImageDelNormal:(id)a2 ImageDelPess:(id)a3 ImageExtendNormal:(id)a4 ImageExtendPess:(id)a5 forTarget:(id)a6 Controller:(id)a7 WithX:(BOOL)a8;
- (id)initWithX:(BOOL)a0 ImageNumNormal:(id)a1 ImageNumPress:(id)a2 ImageDelNormal:(id)a3 ImageDelPess:(id)a4;
- (id)initWithX:(BOOL)a0 ImageNumNormal:(id)a1 ImageNumPress:(id)a2 ImageDelNormal:(id)a3 ImageDelPess:(id)a4 ImageExtendNormal:(id)a5 ImageExtendPess:(id)a6;
- (void)addController:(id)a0;
- (void)touchInput:(id)a0;
- (void)SetTouchNum:(id)a0 callback:(SEL)a1;
- (void)SetTouchDelete:(id)a0 callback:(SEL)a1;
- (void)numberKeyBoardClicked:(id)a0;
- (void)HiddenKeyboardPressedState:(BOOL)a0;

@end
