@class NSData;

@interface FinderSyncClientStatus_ReddotSession_ReddotInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long exposeInterval;
@property (nonatomic) unsigned int ctrlType;
@property (retain, nonatomic) NSData *bypassInfo;
@property (nonatomic) unsigned long long mentionCount;

+ (void)initialize;

- (void)setMentionCount:(unsigned long long)a0;
- (unsigned long long)mentionCount;
- (void)setBypassInfo:(id)a0;
- (id)bypassInfo;
- (void)setCtrlType:(unsigned int)a0;
- (unsigned int)ctrlType;
- (void)setExposeInterval:(unsigned long long)a0;
- (unsigned long long)exposeInterval;
- (id)description;

@end
