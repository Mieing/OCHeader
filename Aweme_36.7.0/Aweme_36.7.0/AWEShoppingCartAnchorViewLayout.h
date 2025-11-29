@class UIColor, UIFont;

@interface AWEShoppingCartAnchorViewLayout : NSObject

@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double rightMargin;
@property (nonatomic) double rightMarginExpanded;
@property (nonatomic) double iconTopMargin;
@property (nonatomic) double iconLeftMargin;
@property (nonatomic) double iconRightMargin;
@property (nonatomic) double iconWidth;
@property (nonatomic) double iconHeight;
@property (nonatomic) double iconLeftMarginExpanded;
@property (nonatomic) double iconRightMarginExpanded;
@property (nonatomic) double customImageTopMargin;
@property (nonatomic) double customImageLeftMargin;
@property (nonatomic) double customImageBottomMargin;
@property (nonatomic) double customImageRightMargin;
@property (nonatomic) double customImageExpandedWidth;
@property (nonatomic) double customImageExpandedHeight;
@property (nonatomic) double firstLineTopMargin;
@property (nonatomic) double firstLineHeight;
@property (nonatomic) double firstLineHeightExpanded;
@property (nonatomic) double firstLineItemMargin;
@property (nonatomic) double firstLineBottomMargin;
@property (nonatomic) double firstLineCountTagLeftMargin;
@property (nonatomic) double secondLineTopMargin;
@property (nonatomic) double secondLineHeight;
@property (nonatomic) double secondLineBottomMargin;
@property (nonatomic) double secondLineItemMargin;
@property (nonatomic) double separatorWidth;
@property (nonatomic) double separatorHeight;
@property (nonatomic) double separatorCornerRadius;
@property (nonatomic) double smallSeparatorWidth;
@property (nonatomic) double smallSeparatorHeight;
@property (nonatomic) double smallSeparatorCornerRadius;
@property (retain, nonatomic) UIColor *containerBackgroundColor;
@property (retain, nonatomic) UIColor *separatorBackgroundColor;
@property (retain, nonatomic) UIColor *smallSeparatorBackgroundColor;
@property (retain, nonatomic) UIColor *firstLineTextColor;
@property (retain, nonatomic) UIColor *secondeLineTextColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *mainTag1TextColor;
@property (retain, nonatomic) UIColor *mainTag2TextColor;
@property (retain, nonatomic) UIFont *mainTag1TextFont;
@property (retain, nonatomic) UIFont *mainTag2TextFont;

+ (id)layout;

- (id)colorWithHexString:(id)a0 defaultColor:(id)a1;
- (void)configLayoutWithOriginalStyle;
- (void)configLayoutWithNewStyle;
- (BOOL)enableEcommerceLargeFont;
- (void)configLayoutWithStyle:(unsigned long long)a0;
- (void)configLayoutWithNewStyleWithAwemeModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
