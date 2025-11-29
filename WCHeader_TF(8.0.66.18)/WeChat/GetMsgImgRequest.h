@class BaseRequest, SKBuiltinString_t;

@interface GetMsgImgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int msgId;
@property (retain, nonatomic) SKBuiltinString_t *fromUserName;
@property (retain, nonatomic) SKBuiltinString_t *toUserName;
@property (nonatomic) unsigned int totalLen;
@property (nonatomic) unsigned int startPos;
@property (nonatomic) unsigned int dataLen;
@property (nonatomic) unsigned int compressType;
@property (nonatomic) unsigned long long newMsgId;

+ (void)initialize;

@end
