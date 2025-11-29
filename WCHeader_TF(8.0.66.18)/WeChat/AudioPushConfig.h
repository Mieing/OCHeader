@interface AudioPushConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned long long intervalMs;
@property (nonatomic) unsigned long long clientStatusChangedIntervalMs;

+ (void)initialize;

@end
