@class UIStackView;

@interface IESECVideoPriceItemView : UIView

@property (retain, nonatomic) UIStackView *stackView;

- (id)mainStringWithItem:(id)a0;
- (void)setUpHighlightStyleViewWithMainString:(id)a0 prefix:(id)a1 suffix:(id)a2;
- (void)setUpDefaultStyleViewWithMainString:(id)a0;
- (id)createHighlightAdditionalLabelWithText:(id)a0;
- (id)processPriceStringWithPrice:(id)a0;
- (id)makeHighlightAttributedStringWithPriceString:(id)a0;
- (id)makeStrikethroughAttributedStringWithPriceString:(id)a0 prefix:(id)a1 suffix:(id)a2;
- (id)makeNormalAttributedStringWithPriceString:(id)a0 prefix:(id)a1 suffix:(id)a2;
- (id)makeAttributedStringWithPriceString:(id)a0 symbolFont:(id)a1 integerFont:(id)a2 decimalFont:(id)a3 lineHeightMultiple:(double)a4;
- (id)paragraphStyleWithLineHeightMultiple:(double)a0;
- (id)makeAttributedStringWithPriceString:(id)a0 symbolFont:(id)a1 symbolLineHeightMultiple:(double)a2 integerFont:(id)a3 integerLineHeightMultiple:(double)a4 decimalFont:(id)a5 decimalLineHeightMultiple:(double)a6;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0;

@end
