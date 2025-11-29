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

@end
