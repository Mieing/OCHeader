@class BaseRequest, NSString, BaseAuthReqInfo, PubKeyInfo, SKBuiltinBuffer_t;

@interface AutoAuthAesReqData : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) BaseAuthReqInfo *baseReqInfo;
@property (retain, nonatomic) SKBuiltinBuffer_t *autoAuthKey;
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
@property (retain, nonatomic) SKBuiltinBuffer_t *clientCheckData;
@property (retain, nonatomic) SKBuiltinBuffer_t *extSpamInfo;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *androidPackageName;
@property (retain, nonatomic) PubKeyInfo *pubKey;

+ (void)initialize;

- (void)setPubKey:(id)a0;
- (id)pubKey;
- (void)setAndroidPackageName:(id)a0;
- (id)androidPackageName;
- (void)setBundleId:(id)a0;
- (id)bundleId;
- (void)setExtSpamInfo:(id)a0;
- (id)extSpamInfo;
- (void)setClientCheckData:(id)a0;
- (id)clientCheckData;
- (void)setChannel:(int)a0;
- (int)channel;
- (void)setTimeZone:(id)a0;
- (id)timeZone;
- (void)setLanguage:(id)a0;
- (id)language;
- (void)setDeviceType:(id)a0;
- (id)deviceType;
- (void)setDeviceName:(id)a0;
- (id)deviceName;
- (void)setSignature:(id)a0;
- (id)signature;
- (void)setClientSeqId:(id)a0;
- (id)clientSeqId;
- (void)setBuiltinIpseq:(unsigned int)a0;
- (unsigned int)builtinIpseq;
- (void)setSoftType:(id)a0;
- (id)softType;
- (void)setImei:(id)a0;
- (id)imei;
- (void)setAutoAuthKey:(id)a0;
- (id)autoAuthKey;
- (void)setBaseReqInfo:(id)a0;
- (id)baseReqInfo;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
