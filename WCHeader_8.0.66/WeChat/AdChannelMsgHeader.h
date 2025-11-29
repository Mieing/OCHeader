@class NSData, NSString;

@interface AdChannelMsgHeader : WXPBGeneratedMessage

@property (nonatomic) unsigned int uin;
@property (nonatomic) unsigned int networkType;
@property (nonatomic) unsigned int clientIp;
@property (retain, nonatomic) NSData *clientIpV6;
@property (nonatomic) int osType;
@property (nonatomic) int clientVersion;
@property (retain, nonatomic) NSString *oaid;
@property (retain, nonatomic) NSString *imei;
@property (retain, nonatomic) NSString *idfa;
@property (retain, nonatomic) NSString *idfv;
@property (retain, nonatomic) NSString *ua;
@property (retain, nonatomic) NSString *commonDeviceId;

+ (void)initialize;

- (void)setCommonDeviceId:(id)a0;
- (id)commonDeviceId;
- (void)setUa:(id)a0;
- (id)ua;
- (void)setIdfv:(id)a0;
- (id)idfv;
- (void)setIdfa:(id)a0;
- (id)idfa;
- (void)setImei:(id)a0;
- (id)imei;
- (void)setOaid:(id)a0;
- (id)oaid;
- (void)setClientVersion:(int)a0;
- (int)clientVersion;
- (void)setOsType:(int)a0;
- (int)osType;
- (void)setClientIpV6:(id)a0;
- (id)clientIpV6;
- (void)setClientIp:(unsigned int)a0;
- (unsigned int)clientIp;
- (void)setNetworkType:(unsigned int)a0;
- (unsigned int)networkType;
- (void)setUin:(unsigned int)a0;
- (unsigned int)uin;

@end
