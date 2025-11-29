@interface AffOutboxAppMsgId : WXPBGeneratedMessage

@property (nonatomic) unsigned int appmsgid;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long failedTimestamp;

+ (void)initialize;

@end
