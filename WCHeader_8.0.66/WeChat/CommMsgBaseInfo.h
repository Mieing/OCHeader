@class NSString;

@interface CommMsgBaseInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int msgId;
@property (nonatomic) unsigned int msgType;
@property (nonatomic) unsigned int dateTime;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int funcFlag;
@property (retain, nonatomic) NSString *uniqueId;

+ (void)initialize;

- (void)setUniqueId:(id)a0;
- (id)uniqueId;
- (void)setFuncFlag:(unsigned int)a0;
- (unsigned int)funcFlag;
- (void)setStatus:(unsigned int)a0;
- (unsigned int)status;
- (void)setDateTime:(unsigned int)a0;
- (unsigned int)dateTime;
- (void)setMsgType:(unsigned int)a0;
- (unsigned int)msgType;
- (void)setMsgId:(unsigned int)a0;
- (unsigned int)msgId;

@end
