@class NSString, CJPayPasswordView, UIImageView, CJPayFixKeyboardView, UIView, CJPayPasswordSetModel, CJPayPassCodeSetBaseViewModel;

@interface CJPayPassCodeSetBaseViewController : CJPayFullPageBaseViewController <CJPaySafeInputViewDelegate, CJPayBindCardPageProtocol>

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) CJPayPasswordView *passwordView;
@property (retain, nonatomic) CJPayFixKeyboardView *keyboardView;
@property (retain, nonatomic) UIView *keyboardSnapshotView;
@property (retain, nonatomic) CJPayPasswordSetModel *setModel;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) CJPayPassCodeSetBaseViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)associatedModelClass;

- (BOOL)cjAllowTransition;
- (void)clearInputContent;
- (void)inputView:(id)a0 completeInputWithCurrentInput:(id)a1;
- (void)inputView:(id)a0 textDidChangeWithCurrentInput:(id)a1;
- (BOOL)inputViewShouldResignFirstResponder:(id)a0;
- (void)p_superBack;
- (id)getLoadingView;
- (void)createAssociatedModelWithParams:(id)a0;
- (void)updateWithPassCodeType:(unsigned long long)a0;
- (void)p_setupBackgroundImageView;
- (void)clearErrorText;
- (void)trackerEventName:(id)a0 params:(id)a1;
- (void)showErrorText:(id)a0;
- (id)buttonInfoActions:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)back;

@end
