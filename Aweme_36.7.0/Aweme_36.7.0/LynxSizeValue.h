@interface LynxSizeValue : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) double value;

+ (id)sizeValueFromCSSString:(id)a0;

- (double)convertToDevicePtWithFullSize:(double)a0;
- (id)init;
- (id)initWithType:(unsigned long long)a0 value:(double)a1;

@end
