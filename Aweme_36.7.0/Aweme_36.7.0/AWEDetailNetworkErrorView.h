@class UIImageView, AWEButton, UILabel, UIButton;

@interface AWEDetailNetworkErrorView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *informativeTextLabel;
@property (retain, nonatomic) AWEButton *primaryButton;
@property (retain, nonatomic) UIButton *solutionButton;

- (void)p_configureLayout;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
