@class NSString, SKBuiltinString_t, BaseResponse;

@interface UploadMsgImgResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int msgId;
@property (retain, nonatomic) SKBuiltinString_t *clientImgId;
@property (retain, nonatomic) SKBuiltinString_t *fromUserName;
@property (retain, nonatomic) SKBuiltinString_t *toUserName;
@property (nonatomic) unsigned int totalLen;
@property (nonatomic) unsigned int startPos;
@property (nonatomic) unsigned int dataLen;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned long long newMsgId;
@property (retain, nonatomic) NSString *aeskey;
@property (retain, nonatomic) NSString *fileId;
@property (retain, nonatomic) NSString *msgSource;
@property (nonatomic) unsigned int actionFlag;

+ (void)initialize;

@end
