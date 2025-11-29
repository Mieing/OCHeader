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

@end
