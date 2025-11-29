@class NSString, CSSPrimitiveValue;

@interface SVGLength : NSObject

@property (retain, nonatomic) CSSPrimitiveValue *internalCSSPrimitiveValue;
@property (readonly, nonatomic) int unitType;
@property (nonatomic) float value;
@property (nonatomic) float valueInSpecifiedUnits;
@property (retain, nonatomic) NSString *valueAsString;

+ (float)pixelsPerInchForCurrentDevice;
+ (id)svgLengthZero;
+ (id)svgLengthFromNSString:(id)a0;
+ (void)initialize;

- (float)pixelsValueWithDimension:(float)a0;
- (id)initWithCSSPrimitiveValue:(id)a0;
- (float)pixelsValue;
- (void).cxx_destruct;
- (id)init;
- (float)numberValue;

@end
