@class UIFont, UIColor, NSDictionary, NSArray;

@interface AWEPOIDetailNGCommonUIConfig : NSObject

@property (copy, nonatomic) NSDictionary *rawData;
@property (nonatomic) double fontSize;
@property (nonatomic) double fontWeight;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *contentColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) float breakPriority;
@property (nonatomic) long long lineBreakMode;
@property (copy, nonatomic) NSArray *gradientColors;
@property (nonatomic) struct CGPoint { double x; double y; } gradientStartPoint;
@property (nonatomic) struct CGPoint { double x; double y; } gradientEndPoint;

+ (id)uiConfigWithDictionary:(id)a0;
+ (id)kfontWeightDict;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })parseInsets:(id)a0;
+ (id)kgradientPointsDict;
+ (id)colorWithHexRGBAString:(id)a0 defaultColor:(id)a1;
+ (id)getColorFromString:(id)a0;

- (void).cxx_destruct;

@end
