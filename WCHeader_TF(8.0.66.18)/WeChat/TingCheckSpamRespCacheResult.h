@class MMListenCheckSpamResponse;

@interface TingCheckSpamRespCacheResult : WXPBGeneratedMessage

@property (nonatomic) unsigned long long expirationTimestamp;
@property (retain, nonatomic) MMListenCheckSpamResponse *checkSpamResponse;

+ (void)initialize;

@end
