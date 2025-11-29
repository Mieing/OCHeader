@class NSString, SKBuiltinBuffer_t, BaseRequest;

@interface UploadVoiceRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *toUserName;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int length;
@property (retain, nonatomic) NSString *clientMsgId;
@property (nonatomic) unsigned int msgId;
@property (nonatomic) unsigned int voiceLength;
@property (retain, nonatomic) SKBuiltinBuffer_t *data;
@property (nonatomic) unsigned int endFlag;
@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int cancelFlag;
@property (retain, nonatomic) NSString *msgSource;
@property (nonatomic) unsigned int voiceFormat;
@property (nonatomic) unsigned int uicreateTime;
@property (nonatomic) unsigned int forwardFlag;
@property (nonatomic) unsigned long long newMsgId;
@property (nonatomic) unsigned int reqTime;
@property (retain, nonatomic) SKBuiltinBuffer_t *voiceId;
@property (retain, nonatomic) NSString *sendMsgTicket;
@property (retain, nonatomic) NSString *aesKey;
@property (retain, nonatomic) NSString *voiceUrl;
@property (retain, nonatomic) NSString *extCommonInfoXml;

+ (void)initialize;

@end
