@class UIColor, UIFont;

@interface AWEPOIEntryViewLayout : NSObject

@property (nonatomic) double maxWidth;
@property (nonatomic) long long strategy;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } viewInset;
@property (nonatomic) double itemMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double arrowMargin;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } iconInset;
@property (nonatomic) double iconWidth;
@property (nonatomic) double firstLineViewTopMargin;
@property (nonatomic) double firstLineHeight;
@property (nonatomic) double firstLineViewBottomMargin;
@property (nonatomic) double firstLineItemMargin;
@property (nonatomic) double firstLineSeparatorMargin;
@property (nonatomic) double marginOfLines;
@property (nonatomic) double secondLineHeight;
@property (nonatomic) double secondBottomMargin;
@property (nonatomic) double secondLineItemMargin;
@property (nonatomic) double secondLineGrayItemGroupMargin;
@property (nonatomic) double secondLineIconItemMargin;
@property (nonatomic) double separatorWidthOfStyle1;
@property (nonatomic) double separatorHeightOfStyle1;
@property (nonatomic) double separatorCornerRadiusOfStyle1;
@property (retain, nonatomic) UIColor *separatorColorOfStyle1;
@property (nonatomic) double separatorWidthOfStyle2;
@property (nonatomic) double separatorHeightOfStyle2;
@property (nonatomic) double separatorCornerRadiusOfStyle2;
@property (retain, nonatomic) UIColor *separatorColorOfStyle2;
@property (nonatomic) double separatorPointWidth;
@property (nonatomic) double separatorPointMargin;
@property (nonatomic) double arrowIconWidth;
@property (nonatomic) double arrowIconLeftMargin;
@property (nonatomic) long long separatorLineStyle;
@property (retain, nonatomic) UIColor *typeNameLabelColor;
@property (retain, nonatomic) UIColor *nameLabelColor;
@property (retain, nonatomic) UIFont *typeNameTextFont;
@property (retain, nonatomic) UIFont *nameTextFont;

- (id)colorWithHexString:(id)a0 defaultColor:(id)a1;
- (void)configLayoutWithOriginalStyle;
- (void)configLayoutWithNewStyle;
- (void)configLayoutWithNewStyleWithModel:(id)a0;
- (id)initWithEntryViewScene:(long long)a0;
- (void)configMarginLayoutWithModel:(id)a0;
- (void).cxx_destruct;

@end
