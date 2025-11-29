@class NSString;

@interface CSSPrimitiveValue : CSSValue

@property (nonatomic) float internalValue;
@property (retain, nonatomic) NSString *internalString;
@property (nonatomic) float pixelsPerInch;
@property (nonatomic) int primitiveType;

- (void).cxx_destruct;
- (id)init;
- (id)getStringValue;
- (void)getRGBColorValue;
- (float)getFloatValue:(int)a0;
- (void)setCssText:(id)a0;
- (void)setFloatValue:(int)a0 floatValue:(float)a1;
- (void)setStringValue:(int)a0 stringValue:(id)a1;
- (void)getCounterValue;
- (void)getRectValue;

@end
