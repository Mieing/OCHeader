@class BaseRequest, SKBuiltinBuffer_t, NSString;

@interface AxAuthRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int businessType;
@property (retain, nonatomic) SKBuiltinBuffer_t *axTicket;
@property (retain, nonatomic) NSString *imei;
@property (retain, nonatomic) NSString *softType;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *deviceType;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *timeZone;
@property (nonatomic) int channel;
@property (retain, nonatomic) SKBuiltinBuffer_t *extSpamInfo;

+ (void)initialize;

- (void)setExtSpamInfo:(id)a0;
- (id)extSpamInfo;
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
- (void)setSoftType:(id)a0;
- (id)softType;
- (void)setImei:(id)a0;
- (id)imei;
- (void)setAxTicket:(id)a0;
- (id)axTicket;
- (void)setBusinessType:(unsigned int)a0;
- (unsigned int)businessType;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
