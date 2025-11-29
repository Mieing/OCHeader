@class CAGradientLayer, UIImageView, UILabel, AWESearchEcommerceAnchorModel;

@interface AWESearchLiveSearchMultiGoodsListMediumViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) CAGradientLayer *goodsImageGradientLayer;
@property (retain, nonatomic) UIImageView *statusIconView;
@property (retain, nonatomic) UILabel *priceSymbolLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) AWESearchEcommerceAnchorModel *model;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithModel:(id)a0;

@end
