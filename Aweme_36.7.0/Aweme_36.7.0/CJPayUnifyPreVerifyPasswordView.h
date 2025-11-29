@class NSString, CJPayKeyboardContainerView, UIView, NSMutableArray;
@protocol CJPaySafeInputViewDelegate;

@interface CJPayUnifyPreVerifyPasswordView : UIView <CJPayKeyboardContainerDelegate, CJPayInputComponentOperateProtocol>

@property (retain, nonatomic) CJPayKeyboardContainerView *keyBoardView;
@property (retain, nonatomic) UIView *inputComponentContainerView;
@property (retain, nonatomic) NSMutableArray *inputComponentsStack;
@property (weak, nonatomic) id<CJPaySafeInputViewDelegate> safeInputDelegate;
@property (copy, nonatomic) id /* block */ forgetPasswordBtnBlock;
@property (copy, nonatomic) id /* block */ trackBlock;
@property (copy, nonatomic) id /* block */ btmTrackerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateStatusWithType:(long long)a0 errorText:(id)a1;
- (void)keyboardDeleteStr;
- (void)keyboardInputStr:(id)a0;
- (double)p_getPasswordItemWidth;
- (double)p_getPasswordItemSpace;
- (double)p_inputPasswordViewWidth;
- (void)p_setupPasswordInputViewStyle:(id)a0;
- (void)p_clickBioAuthorityButton;
- (id)curInputComponent;
- (void)pushInputComponentWithModel:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)popToInputComponentAtIndex:(unsigned long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)popCurInputComponentWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)p_createPasswordInputComponentWithModel:(id)a0;
- (void)p_transitionInputComponentFromView:(id)a0 toView:(id)a1 containerView:(id)a2 animationType:(long long)a3 completion:(id /* block */)a4;
- (void)p_setupUI;
- (void)clearInput;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;

@end
