@class UILabel, UIView;

@interface AWEGDContentBoxView : UIView

@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *priceView;
@property (retain, nonatomic) UILabel *pricePrefixLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *unitLabel;
@property (retain, nonatomic) UIView *descriptionView;

- (void)configWithContentBoxModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
