@class ECDHKey, BaseRequest, NSString, PubKeyInfo, SKBuiltinBuffer_t;

@interface NewRegRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *pwd;
@property (retain, nonatomic) NSString *nickName;
@property (nonatomic) unsigned int bindUin;
@property (retain, nonatomic) NSString *bindEmail;
@property (retain, nonatomic) NSString *bindMobile;
@property (retain, nonatomic) NSString *ticket;
@property (nonatomic) unsigned int builtinIpseq;
@property (nonatomic) unsigned int dlsrc;
@property (nonatomic) unsigned int regMode;
@property (retain, nonatomic) NSString *timeZone;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) unsigned int forceReg;
@property (retain, nonatomic) NSString *realCountry;
@property (retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey;
@property (retain, nonatomic) NSString *alias;
@property (retain, nonatomic) NSString *verifySignature;
@property (retain, nonatomic) NSString *verifyContent;
@property (nonatomic) unsigned int hasHeadImg;
@property (nonatomic) unsigned int suggestRet;
@property (retain, nonatomic) NSString *clientSeqId;
@property (retain, nonatomic) NSString *adSource;
@property (retain, nonatomic) NSString *androidId;
@property (retain, nonatomic) NSString *macAddr;
@property (retain, nonatomic) NSString *androidInstallRef;
@property (retain, nonatomic) NSString *clientFingerprint;
@property (retain, nonatomic) ECDHKey *cliPubEcdhkey;
@property (retain, nonatomic) NSString *googleAid;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *bioSigTicket;
@property (nonatomic) unsigned int bioSigCheckType;
@property (retain, nonatomic) SKBuiltinBuffer_t *clientCheckData;
@property (nonatomic) unsigned int mobileCheckType;
@property (retain, nonatomic) NSString *regSessionId;
@property (retain, nonatomic) NSString *privacyPolicyCountry;
@property (retain, nonatomic) NSString *thirdAppAuthTicket;
@property (retain, nonatomic) SKBuiltinBuffer_t *extSpamInfo;
@property (retain, nonatomic) NSString *appleIdTicket;
@property (retain, nonatomic) PubKeyInfo *pubKey;

+ (void)initialize;

@end
