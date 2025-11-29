@class NSString;

@interface TingCGIRespCacheResult : WXPBGeneratedMessage

@property (nonatomic) unsigned long long expireTimestamp;
@property (retain, nonatomic) NSString *respString;

+ (void)initialize;

@end
