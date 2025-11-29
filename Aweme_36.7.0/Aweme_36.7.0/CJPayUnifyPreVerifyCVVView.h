@class CJPayUnifyCVVInputContainerView, CJPayButton, CJPayStandardButton, UILabel, CJPayKeyboardContainerView, NSString;

@interface CJPayUnifyPreVerifyCVVView : UIView

@property (retain, nonatomic) CJPayUnifyCVVInputContainerView *inputBoxView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) CJPayButton *tipsBtn;
@property (retain, nonatomic) CJPayStandardButton *confirmBtn;
@property (retain, nonatomic) CJPayKeyboardContainerView *keyBoardView;
@property (copy, nonatomic) NSString *inputContent;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (copy, nonatomic) id /* block */ clickTipsBlock;
@property (copy, nonatomic) id /* block */ trackBlock;
@property (copy, nonatomic) id /* block */ btmTrackerBlock;

- (void)clickConfirm;
- (void)clickTips;
- (void)updateErrorText:(id)a0;
- (void)keyboardDeleteStr;
- (void)keyboardInputStr:(id)a0;
- (void)p_updateInputStatus;
- (void)p_setupUI;
- (void)resetStatus;
- (void)clearInput;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;

@end
