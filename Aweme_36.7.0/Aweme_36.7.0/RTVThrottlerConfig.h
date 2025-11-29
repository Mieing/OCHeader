@interface RTVThrottlerConfig : NSObject

@property (nonatomic) double timeInterval;

+ (id)defaultConfig;

- (id)initWithInterval:(double)a0;

@end
