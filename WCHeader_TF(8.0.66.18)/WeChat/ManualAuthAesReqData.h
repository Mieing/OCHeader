@class BaseRequest, NSString, BaseAuthReqInfo, PubKeyInfo, SKBuiltinBuffer_t;

@interface ManualAuthAesReqData : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) BaseAuthReqInfo *baseReqInfo;
@property (retain, nonatomic) NSString *imei;
@property (retain, nonatomic) NSString *softType;
@property (nonatomic) unsigned int builtinIpseq;
@property (retain, nonatomic) NSString *clientSeqId;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *deviceType;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *timeZone;
@property (nonatomic) int channel;
@property (nonatomic) unsigned int timeStamp;
@property (retain, nonatomic) NSString *deviceBrand;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *ostype;
@property (retain, nonatomic) NSString *realCountry;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *adSource;
@property (retain, nonatomic) NSString *iphoneVer;
@property (nonatomic) unsigned int inputType;
@property (retain, nonatomic) SKBuiltinBuffer_t *clientCheckData;
@property (retain, nonatomic) SKBuiltinBuffer_t *extSpamInfo;
@property (retain, nonatomic) NSString *androidPackageName;
@property (retain, nonatomic) PubKeyInfo *pubKey;
@property (retain, nonatomic) NSString *extSpamCtxString;

+ (void)initialize;

@end
