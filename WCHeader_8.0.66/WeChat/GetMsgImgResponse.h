@class SKBuiltinBuffer_t, SKBuiltinString_t, BaseResponse;

@interface GetMsgImgResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int msgId;
@property (retain, nonatomic) SKBuiltinString_t *fromUserName;
@property (retain, nonatomic) SKBuiltinString_t *toUserName;
@property (nonatomic) unsigned int totalLen;
@property (nonatomic) unsigned int startPos;
@property (nonatomic) unsigned int dataLen;
@property (retain, nonatomic) SKBuiltinBuffer_t *data;
@property (nonatomic) unsigned long long newMsgId;

+ (void)initialize;

@end
