@class UIImageView, UILabel, UIView;

@interface AWEFeedNearbyShopCardStyle2ContentGroupBuyingView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *dishNameLabel;
@property (retain, nonatomic) UILabel *presentPriceLabel;
@property (retain, nonatomic) UILabel *originPriceLabel;
@property (retain, nonatomic) UILabel *discountLabel;
@property (retain, nonatomic) UIView *discountLabelView;
@property (retain, nonatomic) UILabel *moneyIconLabel;
@property (retain, nonatomic) UILabel *buyingLabel;
@property (retain, nonatomic) UIView *buyingLabelView;

- (void)updateWithSpuInfoModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)layoutUI;

@end
