@class NSString, SKBuiltinString_t;

@interface MicroMsgResponseNew : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (retain, nonatomic) SKBuiltinString_t *toUserName;
@property (nonatomic) unsigned int msgId;
@property (nonatomic) unsigned int clientMsgId;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int serverTime;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned long long newMsgId;
@property (retain, nonatomic) NSString *msgSource;

+ (void)initialize;

@end
