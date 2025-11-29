@class UIColor, UIFont, NSString, NSMutableDictionary, UILabel, UIView;

@interface IESECPriceLabel : UIView {
    UILabel *_prefixLabel;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIView *_strikethroughView;
    NSMutableDictionary *_spacingMap;
}

@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *prefix;
@property (nonatomic) BOOL hasStrikethrough;
@property (nonatomic) long long price;
@property (nonatomic) struct { long long min; long long max; } precisionRange;

- (double)spacingAfterElement:(unsigned long long)a0;
- (void)updatePrice;
- (void)setFontSize:(double)a0 forElement:(unsigned long long)a1;
- (double)fontSizeForElement:(unsigned long long)a0;
- (void)setSpacing:(double)a0 afterElement:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)configureSubviews;

@end
