@class UIButton, UILabel, UIView;

@interface IESLiveAudienceClarityDegradeTipsView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIButton *exitButton;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIButton *lowerLevelButton;
@property (copy, nonatomic) id /* block */ onclickDegradeButtonBlock;
@property (copy, nonatomic) id /* block */ onclickExitDegradeButtonBlock;

- (void)updateTextStringWithQuality:(id)a0;
- (void)onclickExitButton:(id)a0;
- (void)onclickLowerLevelButton:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
