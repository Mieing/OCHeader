@class NSString;

@interface EcsClientInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *clientIp;
@property (retain, nonatomic) NSString *deviceId;
@property (nonatomic) unsigned long long clientVersion;
@property (nonatomic) unsigned int deviceTypeId;

+ (void)initialize;

@end
