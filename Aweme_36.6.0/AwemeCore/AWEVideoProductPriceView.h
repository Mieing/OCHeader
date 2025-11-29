@class UILabel, AWEVideoProductPriceLabel;

@interface AWEVideoProductPriceView : UIView

@property (retain, nonatomic) AWEVideoProductPriceLabel *priceLabel;
@property (retain, nonatomic) UILabel *unitLabel;

- (void)setPriceFont:(id)a0;
- (void)setUnitColor:(id)a0;
- (BOOL)enableAdaptLargeFontModeV3;
- (double)priceLabelFontSize;
- (double)unitLabelFontSize;
- (void)setPriceColor:(id)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (BOOL)accessibilityElementsHidden;
- (id)init;
- (void)setupSubviews;
- (void)setUnitText:(id)a0;
- (void)setUnitFont:(id)a0;
- (void)setPriceText:(id)a0;

@end
