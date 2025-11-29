@class CAGradientLayer, UIImageView, AWEAdSearchLiveECommerceProductCardModel, UILabel;

@interface AWEAdSearchLiveECommerceProductCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEAdSearchLiveECommerceProductCardModel *adProductInfo;
@property (retain, nonatomic) UIImageView *productImageView;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (void)configAdProductCellWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
