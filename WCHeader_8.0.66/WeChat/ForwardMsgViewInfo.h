@class NSString, SKBuiltinString_t;

@interface ForwardMsgViewInfo : WXPBGeneratedMessage

@property (nonatomic) int msgId;
@property (retain, nonatomic) SKBuiltinString_t *fromUserName;
@property (retain, nonatomic) SKBuiltinString_t *toUserName;
@property (nonatomic) int msgType;
@property (nonatomic) int appMsgInnerType;
@property (nonatomic) int createTime;
@property (retain, nonatomic) NSString *msgSource;
@property (nonatomic) long long newMsgId;
@property (nonatomic) unsigned int msgSeq;

+ (void)initialize;

@end
