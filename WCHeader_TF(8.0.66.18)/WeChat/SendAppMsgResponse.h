@class NSString, BaseResponse;

@interface SendAppMsgResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *toUserName;
@property (nonatomic) unsigned int msgId;
@property (retain, nonatomic) NSString *clientMsgId;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned long long newMsgId;
@property (retain, nonatomic) NSString *aeskey;
@property (retain, nonatomic) NSString *msgSource;
@property (nonatomic) unsigned int actionFlag;
@property (retain, nonatomic) NSString *fileUploadFinishBuffer;
@property (retain, nonatomic) NSString *extCommonInfoXml;

+ (void)initialize;

@end
