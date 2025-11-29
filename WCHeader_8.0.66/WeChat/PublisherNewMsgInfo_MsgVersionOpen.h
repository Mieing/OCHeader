@interface PublisherNewMsgInfo_MsgVersionOpen : WXPBGeneratedMessage

@property (nonatomic) unsigned int msgVersion;
@property (nonatomic) int msgOpen;

+ (void)initialize;

- (void)setMsgOpen:(int)a0;
- (int)msgOpen;
- (void)setMsgVersion:(unsigned int)a0;
- (unsigned int)msgVersion;

@end
