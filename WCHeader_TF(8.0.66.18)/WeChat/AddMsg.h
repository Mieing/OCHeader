@class NSString, SKBuiltinString_t, SKBuiltinBuffer_t;

@interface AddMsg : WXPBGeneratedMessage

@property (nonatomic) int msgId;
@property (retain, nonatomic) SKBuiltinString_t *fromUserName;
@property (retain, nonatomic) SKBuiltinString_t *toUserName;
@property (nonatomic) int msgType;
@property (retain, nonatomic) SKBuiltinString_t *content;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int imgStatus;
@property (retain, nonatomic) SKBuiltinBuffer_t *imgBuf;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *msgSource;
@property (retain, nonatomic) NSString *pushContent;
@property (nonatomic) long long newMsgId;
@property (nonatomic) unsigned int msgSeq;

+ (void)initialize;

- (void)setMsgSeq:(unsigned int)a0;
- (unsigned int)msgSeq;
- (void)setNewMsgId:(long long)a0;
- (long long)newMsgId;
- (void)setPushContent:(id)a0;
- (id)pushContent;
- (void)setMsgSource:(id)a0;
- (id)msgSource;
- (void)setCreateTime:(unsigned int)a0;
- (unsigned int)createTime;
- (void)setImgBuf:(id)a0;
- (id)imgBuf;
- (void)setImgStatus:(unsigned int)a0;
- (unsigned int)imgStatus;
- (void)setStatus:(unsigned int)a0;
- (unsigned int)status;
- (void)setContent:(id)a0;
- (id)content;
- (void)setMsgType:(int)a0;
- (int)msgType;
- (void)setToUserName:(id)a0;
- (id)toUserName;
- (void)setFromUserName:(id)a0;
- (id)fromUserName;
- (void)setMsgId:(int)a0;
- (int)msgId;

@end
