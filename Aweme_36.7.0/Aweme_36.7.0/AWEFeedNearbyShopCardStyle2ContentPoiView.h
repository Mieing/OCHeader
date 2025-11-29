@class UILabel, UIImageView;

@interface AWEFeedNearbyShopCardStyle2ContentPoiView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *dishesNamesLabel;
@property (retain, nonatomic) UIImageView *top1ImageView;
@property (retain, nonatomic) UIImageView *top2ImageView;
@property (retain, nonatomic) UIImageView *iconView;

- (void)updateWithPOIInfoModelModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)layoutUI;

@end
