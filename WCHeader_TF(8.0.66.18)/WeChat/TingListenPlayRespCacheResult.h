@class MMListenPlayResponse;

@interface TingListenPlayRespCacheResult : WXPBGeneratedMessage

@property (nonatomic) unsigned long long expireTimestamp;
@property (retain, nonatomic) MMListenPlayResponse *playResponse;

+ (void)initialize;

@end
