@class NSString, WxaSyncBaseCmd;

@interface WxaSyncGetCodeCmd : WXPBGeneratedMessage

@property (retain, nonatomic) WxaSyncBaseCmd *base;
@property (nonatomic) unsigned int netWork;
@property (nonatomic) unsigned int retryTime;
@property (nonatomic) unsigned int retryInterval;
@property (nonatomic) BOOL isEncrypt;
@property (nonatomic) unsigned int appVersion;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *packageKey;
@property (nonatomic) unsigned int packageType;
@property (nonatomic) BOOL needRouteNewGetCdnUrlCgi;
@property (retain, nonatomic) NSString *needBackupDomain;

+ (void)initialize;

- (void)setNeedBackupDomain:(id)a0;
- (id)needBackupDomain;
- (void)setNeedRouteNewGetCdnUrlCgi:(BOOL)a0;
- (BOOL)needRouteNewGetCdnUrlCgi;
- (void)setPackageType:(unsigned int)a0;
- (unsigned int)packageType;
- (void)setPackageKey:(id)a0;
- (id)packageKey;
- (void)setMd5:(id)a0;
- (id)md5;
- (void)setAppVersion:(unsigned int)a0;
- (unsigned int)appVersion;
- (void)setIsEncrypt:(BOOL)a0;
- (BOOL)isEncrypt;
- (void)setRetryInterval:(unsigned int)a0;
- (unsigned int)retryInterval;
- (void)setRetryTime:(unsigned int)a0;
- (unsigned int)retryTime;
- (void)setNetWork:(unsigned int)a0;
- (unsigned int)netWork;
- (void)setBase:(id)a0;
- (id)base;

@end
