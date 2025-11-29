@interface CdnCost : WXPBGeneratedMessage

@property (nonatomic) unsigned int queueMs;
@property (nonatomic) unsigned int dnsMs;
@property (nonatomic) unsigned int connectMs;
@property (nonatomic) unsigned int responseWaitMs;
@property (nonatomic) unsigned int responseAllMs;
@property (nonatomic) unsigned long long beginUnixTimestamp;
@property (nonatomic) unsigned long long connectUnixTimestamp;
@property (nonatomic) unsigned long long endUnixTimestamp;
@property (nonatomic) unsigned int totalMs;

+ (void)initialize;

@end
