@class UILabel, UIButton, UIView;

@interface IESLiveAudienceClaritySwitchTipsView : UIView

@property (retain, nonatomic) UILabel *captionLabel;
@property (retain, nonatomic) UIButton *switchButton;
@property (retain, nonatomic) UIButton *exitButton;
@property (retain, nonatomic) UIView *backgroundView;
@property (copy, nonatomic) id /* block */ onclickSwitchButtonBlock;
@property (copy, nonatomic) id /* block */ onclickExitButtonBlock;

- (void)updateDisplayWithModel:(id)a0;
- (void)onclickExitButton:(id)a0;
- (void)onclickSwitchButton:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupUI;

@end
