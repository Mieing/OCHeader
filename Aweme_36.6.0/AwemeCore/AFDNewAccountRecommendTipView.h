@class UIImageView, UILabel, UIButton;

@interface AFDNewAccountRecommendTipView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (copy, nonatomic) id /* block */ closeButtonBlock;

- (void)closeBtnClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
