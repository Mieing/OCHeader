@class UIImageView, UILabel, UIView;

@interface AWEECShareGoodsContainerView : UIView

@property (retain, nonatomic) UIImageView *goodsImage;
@property (retain, nonatomic) UIView *goodsCoverView;
@property (retain, nonatomic) UILabel *goodsTitleLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *markingPriceLabel;
@property (retain, nonatomic) UILabel *priceSuffixLabel;
@property (retain, nonatomic) UILabel *shareInfoLabel;
@property (retain, nonatomic) UILabel *shareRecommandLabel;

- (id)_convertFenToYuan:(id)a0;
- (void)setModel:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setUpSubviews;

@end
