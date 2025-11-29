@class UIImageView, UILabel;

@interface AWEFeedNearbyShopCardContentPoiView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *dishesTypeLabel;
@property (retain, nonatomic) UILabel *averagePriceLabel;

- (void)updateWithPOIInfoModelModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)layoutUI;

@end
