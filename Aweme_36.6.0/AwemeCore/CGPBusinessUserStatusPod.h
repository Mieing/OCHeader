@interface CGPBusinessUserStatusPod : GPBMessage

@property (nonatomic) int result;
@property (nonatomic) int from;
@property (nonatomic) int current;
@property (nonatomic) int durationCountdown;

+ (id)descriptor;

@end
