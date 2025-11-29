@class BaseRequest, NSString, SmsUpCheckExtInfo, SKBuiltinBuffer_t;

@interface BindOpMobileRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *mobile;
@property (nonatomic) int opcode;
@property (retain, nonatomic) NSString *verifycode;
@property (nonatomic) int dialFlag;
@property (retain, nonatomic) NSString *dialLang;
@property (retain, nonatomic) NSString *authTicket;
@property (nonatomic) unsigned int forceReg;
@property (retain, nonatomic) NSString *safeDeviceName;
@property (retain, nonatomic) NSString *safeDeviceType;
@property (retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) unsigned int inputMobileRetrys;
@property (nonatomic) unsigned int adjustRet;
@property (retain, nonatomic) NSString *clientSeqId;
@property (nonatomic) unsigned int mobileCheckType;
@property (retain, nonatomic) NSString *regSessionId;
@property (retain, nonatomic) SKBuiltinBuffer_t *spamBuffer;
@property (retain, nonatomic) SKBuiltinBuffer_t *extSpamInfo;
@property (retain, nonatomic) NSString *thirdAppAuthTicket;
@property (retain, nonatomic) SmsUpCheckExtInfo *smsUpCheckExtInfo;
@property (retain, nonatomic) NSString *extRegUrl;
@property (retain, nonatomic) NSString *policyAgreementTicket;
@property (retain, nonatomic) NSString *verifyTicket;
@property (nonatomic) unsigned int isAffiliated;
@property (retain, nonatomic) NSString *simMobileMsgId;
@property (retain, nonatomic) NSString *authTargetUserName;
@property (retain, nonatomic) NSString *userSelfShowName;

+ (void)initialize;

@end
