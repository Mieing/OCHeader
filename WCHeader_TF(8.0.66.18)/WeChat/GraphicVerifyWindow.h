@class UIWindow, UIImageView, UITextField, UIButton;
@protocol GraphicVerifyWindowDelegate;

@interface GraphicVerifyWindow : MMUIWindow {
    UIButton *m_changeImgBtn;
    UIButton *m_verifyBtn;
    UIButton *m_cancelBtn;
    UITextField *m_textFieldCode;
    id<GraphicVerifyWindowDelegate> m_delegate;
}

@property (retain, nonatomic) UIWindow *oldKeyWindow;
@property (retain, nonatomic) UIImageView *m_codeImageView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)internalInit;
- (void)initHeaderView;
- (void)onGraphicVerifyChangeImage;
- (void)onGraphicVerifyBack;
- (void)onNext;
- (void)setDelegate:(id)a0;
- (void)textFieldDidEndOnExit:(id)a0;
- (void)makeKeyAndVisible;
- (void)resignKeyWindow;
- (void).cxx_destruct;

@end
