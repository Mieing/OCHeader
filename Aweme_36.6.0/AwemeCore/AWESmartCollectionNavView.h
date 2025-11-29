@class UIImageView, UILabel, UIView, UIButton;

@interface AWESmartCollectionNavView : UIView

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *titleIcon;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *bottomLineView;
@property (copy, nonatomic) id /* block */ backButtonBlock;

- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)backButtonTapped:(id)a0;

@end
