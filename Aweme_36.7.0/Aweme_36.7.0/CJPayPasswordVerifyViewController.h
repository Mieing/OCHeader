@class CJPayPasswordView, UIImageView, CJPayFixKeyboardView, CJPayPassCodeVerifyModel, NSString;

@interface CJPayPasswordVerifyViewController : CJPayFullPageBaseViewController <CJPaySafeInputViewDelegate>

@property (retain, nonatomic) CJPayPasswordView *passwordView;
@property (retain, nonatomic) CJPayFixKeyboardView *keyboardView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) CJPayPassCodeVerifyModel *verifyModel;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)cjAllowTransition;
- (void)inputView:(id)a0 completeInputWithCurrentInput:(id)a1;
- (void)inputView:(id)a0 textDidChangeWithCurrentInput:(id)a1;
- (BOOL)inputViewShouldResignFirstResponder:(id)a0;
- (void)p_setupBackgroundImageView;
- (void)p_trackerEventName:(id)a0 params:(id)a1;
- (void)p_clearErrorText;
- (void)p_handleWebViewCloseCallBack:(id)a0;
- (void)p_clearInputContent;
- (id)p_buttonInfoActions;
- (void)p_clickForgetBtn;
- (id)initWithVerifyModel:(id)a0 completion:(id /* block */)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)back;

@end
