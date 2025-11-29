@interface RTVTimeInterval : NSObject

@property (readonly, nonatomic) double interval;

+ (id)timeIntervalWithDouble:(double)a0;
+ (id)timeIntervalWithDefine:(unsigned long long)a0;

- (id)initWithDouble:(double)a0;
- (double)doubleValue;

@end
