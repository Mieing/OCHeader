@class NSString;

@interface ProxyInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int proxyType;
@property (retain, nonatomic) NSString *proxyIp;
@property (nonatomic) unsigned int proxyPort;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *password;

+ (void)initialize;

@end
