@class BaseRequest, NSString;

@interface SecureTunnelRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *cmd;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *reqbuf;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSString *appUsername;
@property (nonatomic) unsigned int appVersion;

+ (void)initialize;

@end
