@class MMFinderLiveGoodsSerialNumberView, MMFinderLiveMultiPriceView, MMWebImageView;

@interface MMFinderLiveAnchorGoodsCellLeftCardView : UIView

@property (retain, nonatomic) MMWebImageView *goodsImageView;
@property (retain, nonatomic) MMFinderLiveGoodsSerialNumberView *serialNumberView;
@property (retain, nonatomic) MMFinderLiveMultiPriceView *priceView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setIsPromoting:(BOOL)a0;
- (void)updateWithGoodsViewModel:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
