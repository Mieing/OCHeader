@class UILabel;

@interface IESECGoodsFeedResourceCardPriceLabel : UIView {
    UILabel *_priceLabel;
    UILabel *_pricePrefix;
    UILabel *_crossedPriceLabel;
    BOOL _showCrossedMarketPrice;
    BOOL _fixShowCrossedMarketPrice;
}

- (void)setupUIWithModel:(id)a0;
- (id)initWithModel:(id)a0 showCrossedMarketPrice:(BOOL)a1 fixCrossedMarketPrice:(BOOL)a2;
- (void)updatePriceLabelWithModel:(id)a0 hasPriceHeader:(BOOL)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
