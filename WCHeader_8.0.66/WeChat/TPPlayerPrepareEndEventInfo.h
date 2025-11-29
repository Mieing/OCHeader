@interface TPPlayerPrepareEndEventInfo : TPPlayerEventInfo

@property (nonatomic) long long durationMs;
@property (nonatomic) long long playerType;

- (id)init;

@end
