@interface CGPBusinessAutoRecycleTimeClient : GPBMessage

@property (nonatomic) int action;
@property (nonatomic) long long durationSeconds;
@property (nonatomic) int durationCountdown;
@property (nonatomic) int type;

+ (id)descriptor;

@end
