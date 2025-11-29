@class UILabel;

@interface AWEFeedNearbyShopCardStyle2ContentTitleView : UIView

@property (retain, nonatomic) UILabel *poiTitleLabel;
@property (retain, nonatomic) UILabel *poiInfoLabel;

- (void)updateWithPOIShopCardModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)layoutUI;

@end
