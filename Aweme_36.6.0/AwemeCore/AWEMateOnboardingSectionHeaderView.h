@class UILabel, UIButton, UIStackView;

@interface AWEMateOnboardingSectionHeaderView : UIView

@property (retain, nonatomic) UIStackView *titleStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void)initView;
- (void)refreshWithTitle:(id)a0 subTitle:(id)a1 actionButtonTitle:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)actionButtonTapped;

@end
