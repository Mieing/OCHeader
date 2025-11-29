@class UIColor, NSString;

@interface AWEStoryColor : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) NSString *colorString;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) NSString *borderColorString;
@property (retain, nonatomic) UIColor *customBackgroundColor;
@property (retain, nonatomic) NSString *customBackgroundColorString;
@property (retain, nonatomic) UIColor *customTextColor;
@property (retain, nonatomic) NSString *customTextColorString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)colorWithTextColorHexString:(id)a0 borderColorHexString:(id)a1;
+ (id)hexStringFromUIColor:(id)a0;
+ (id)colorWithCustomTextColorHexString:(id)a0 borderColorHexString:(id)a1 customBackgroundHexString:(id)a2 textStyle:(unsigned long long)a3;
+ (id)colorWithTextColorHexString:(id)a0 borderColorHexString:(id)a1 alpha:(float)a2;
+ (unsigned int)argbValueWithColor:(id)a0;
+ (id)colorWithHexString:(id)a0 alpha:(float)a1;
+ (id)colorWithargbValue:(unsigned int)a0;
+ (id)transformerForColor;
+ (id)borderColorJSONTransformer;
+ (id)customBackgroundColorJSONTransformer;
+ (id)customTextColorJSONTransformer;
+ (id)colorWithHexString:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)colorJSONTransformer;

- (void)updateCustomColorsWithTextStyle:(unsigned long long)a0;
- (void)clearCustomColors;
- (id)initWithTextHexString:(id)a0 borderHexString:(id)a1 alpha:(float)a2;
- (id)initWithCustomTextHexString:(id)a0 borderHexString:(id)a1 customBackgroundHexString:(id)a2 textStyle:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)colorFromHexString:(id)a0 alpha:(float)a1;

@end
