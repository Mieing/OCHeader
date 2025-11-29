@class UIImageView, IESIMButton, UILabel, UIButton;

@interface AWEIMCombineBadNetWorkView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *informativeTextLabel;
@property (retain, nonatomic) IESIMButton *primaryButton;
@property (retain, nonatomic) UIButton *solutionButton;
@property (copy, nonatomic) id /* block */ reloadBlock;
@property (copy, nonatomic) id /* block */ solutionBlock;

- (void)p_configureLayout;
- (void)onPrimaryButtonClicked;
- (void)onSolutionButtonClicked;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
