@class UIImageView, UIView, UILabel, UIButton;

@interface AWEMateListTipCardView : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *secondaryButton;
@property (retain, nonatomic) UIButton *primaryButton;
@property (copy, nonatomic) id /* block */ tapCloseButtonBlock;
@property (copy, nonatomic) id /* block */ primaryButtonBlock;
@property (copy, nonatomic) id /* block */ tapSecondaryButtonBlock;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } customEdgeInsets;

- (void)configTitle:(id)a0 subtitle:(id)a1 iconUrl:(id)a2;
- (void)tapSecondaryButtonTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)closeButtonTapped:(id)a0;
- (void)primaryButtonTapped:(id)a0;

@end
