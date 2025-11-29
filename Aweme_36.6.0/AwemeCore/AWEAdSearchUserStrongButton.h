@class UIImageView, UILabel, AWECommerceInsetsLabel;

@interface AWEAdSearchUserStrongButton : UIView <AWEAdSearchUserStrongButton>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) AWECommerceInsetsLabel *conversionLabel;

- (void)updateWithAweme:(id)a0;
- (void)configureUI;
- (void)setupLayouts;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
