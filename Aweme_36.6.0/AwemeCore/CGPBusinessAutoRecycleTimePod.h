@interface CGPBusinessAutoRecycleTimePod : GPBMessage

@property (nonatomic) int action;
@property (nonatomic) int result;
@property (nonatomic) int current;
@property (nonatomic) int durationCountdown;
@property (nonatomic) int type;

+ (id)descriptor;

@end
