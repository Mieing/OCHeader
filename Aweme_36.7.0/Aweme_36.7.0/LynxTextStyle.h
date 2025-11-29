@class UIColor, NSString, NSShadow, NSArray, NSAttributedString, LynxGradient, NSMutableArray;

@interface LynxTextStyle : NSObject <NSCopying>

@property (nonatomic) double fontSize;
@property (nonatomic) double lineHeight;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double letterSpacing;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long usedParagraphTextAlignment;
@property (nonatomic) long long direction;
@property (nonatomic) double fontWeight;
@property (nonatomic) unsigned long long fontStyle;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSString *fontFamilyName;
@property (retain, nonatomic) NSString *underLine;
@property (retain, nonatomic) NSString *lineThrough;
@property (nonatomic) long long textDecorationStyle;
@property (retain, nonatomic) UIColor *textDecorationColor;
@property (retain, nonatomic) NSShadow *textShadow;
@property (retain, nonatomic) LynxGradient *textGradient;
@property (nonatomic) unsigned long long wordBreak;
@property (retain, nonatomic) NSArray *fontFeatureSettings;
@property (retain, nonatomic) NSArray *fontVariationSettings;
@property (nonatomic) BOOL fontOpticalSizing;
@property (retain, nonatomic) NSMutableArray *backgroundDrawable;
@property (retain, nonatomic) NSMutableArray *backgroundPosition;
@property (retain, nonatomic) NSMutableArray *backgroundRepeat;
@property (retain, nonatomic) NSMutableArray *backgroundImageSize;
@property (nonatomic) struct { struct _LynxBorderUnitValue { double val; long long unit; } topLeftX; struct _LynxBorderUnitValue { double val; long long unit; } topLeftY; struct _LynxBorderUnitValue { double val; long long unit; } topRightX; struct _LynxBorderUnitValue { double val; long long unit; } topRightY; struct _LynxBorderUnitValue { double val; long long unit; } bottomLeftX; struct _LynxBorderUnitValue { double val; long long unit; } bottomLeftY; struct _LynxBorderUnitValue { double val; long long unit; } bottomRightX; struct _LynxBorderUnitValue { double val; long long unit; } bottomRightY; } borderRadius;
@property (nonatomic) BOOL enableFontScaling;
@property (nonatomic) BOOL textFakeBold;
@property (nonatomic) BOOL enableLanguageAlignment;
@property (nonatomic) double textIndent;
@property (nonatomic) double textStrokeWidth;
@property (retain, nonatomic) UIColor *textStrokeColor;
@property (nonatomic) BOOL isAutoFontSize;
@property (nonatomic) double autoFontSizeMaxSize;
@property (nonatomic) double autoFontSizeMinSize;
@property (nonatomic) double autoFontSizeStepGranularity;
@property (retain, nonatomic) NSArray *autoFontSizePresetSizes;
@property (nonatomic) BOOL hyphen;
@property (retain, nonatomic) NSAttributedString *truncationAttributedStr;

- (id)toAttributesWithFontFaceContext:(id)a0 withFontFaceObserver:(id)a1;
- (void)updateBackgroundDrawableSize;
- (void)updateBackgroundDrawablePosition;
- (void)updateBackgroundDrawableRepeat;
- (void)updateBackgroundRadius;
- (id)genParagraphStyle;
- (double)fontScaleWithSizeCategory:(id)a0;
- (id)applyFontScaling:(id)a0;
- (id)fontWithFontFaceContext:(id)a0 fontFaceObserver:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyTextStyle:(id)a0;

@end
