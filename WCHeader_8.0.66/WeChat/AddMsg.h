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

@end
