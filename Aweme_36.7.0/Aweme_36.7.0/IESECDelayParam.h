@interface IESECDelayParam : GPBMessage

@property (nonatomic) int delayStrategy;
@property (nonatomic) int minDelayMs;
@property (nonatomic) int maxDelayMs;

+ (id)descriptor;

@end
