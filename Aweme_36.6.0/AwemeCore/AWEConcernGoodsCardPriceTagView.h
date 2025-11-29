@class UILabel, NSNumber, AWEConcernGoodsLifeFeedSpuPriceTag;

@interface AWEConcernGoodsCardPriceTagView : UIView

@property (retain, nonatomic) UILabel *prefixLabel;
@property (retain, nonatomic) UILabel *rmbLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) NSNumber *fontSize;
@property (retain, nonatomic) AWEConcernGoodsLifeFeedSpuPriceTag *spuPriceTag;

- (id)initWithFontSize:(id)a0;
- (void)updateSpuPriceTag:(id)a0;
- (double)calculateFullyTagWidth;
- (void)updateLayout;
- (void).cxx_destruct;
- (double)labelFontSize;
- (void)setupViews;

@end
