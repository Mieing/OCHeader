@class UIColor, UIFont, NSString;

@interface TTEpubLayoutConfig : TTIllusionConfig

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerRect;
@property (nonatomic) struct CGSize { double width; double height; } screenSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } containerInsets;
@property (retain, nonatomic) UIFont *textFont;
@property (nonatomic) unsigned long long textFontWeight;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) unsigned long long titleFontWeight;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double titleLineSpacing;
@property (nonatomic) double paragraphSpacing;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) NSString *defaultCssString;
@property (retain, nonatomic) NSString *preferCssString;
@property (retain, nonatomic) NSString *HTMLChapterID;
@property (nonatomic) long long textAlignment;
@property (nonatomic) double layoutBeforeOffset;
@property (nonatomic) double layoutTitleOffset;
@property (nonatomic) BOOL autoFirstLineHeadIndent;
@property (nonatomic) BOOL continuousLayout;
@property (nonatomic) BOOL useHyphen;
@property (nonatomic) BOOL hideFanqieTypeImageNode;
@property (nonatomic) BOOL isDark;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) double lineHeightScale;
@property (nonatomic) BOOL lineGapSplit;
@property (nonatomic) BOOL punctuationCompress;
@property (nonatomic) unsigned long long inlinePunctuationCompressType;
@property (nonatomic) float punctuationCompressRate;
@property (nonatomic) int lineBreakLimit;
@property (nonatomic) BOOL enableLineHeight;
@property (nonatomic) BOOL clearImageIndent;
@property (nonatomic) double fontPxToEmScale;
@property (nonatomic) double limitFontSize;
@property (nonatomic) BOOL lineHeightRoundToEven;
@property (nonatomic) BOOL constraintImageSize;

- (void).cxx_destruct;
- (id)init;

@end
