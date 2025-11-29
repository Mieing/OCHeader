@class BaseRequest, NSString, ActionLocation;

@interface GenPrepayRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *nonceStr;
@property (retain, nonatomic) NSString *timestamp;
@property (retain, nonatomic) NSString *package;
@property (retain, nonatomic) NSString *sign;
@property (retain, nonatomic) NSString *signType;
@property (retain, nonatomic) NSString *webViewUrl;
@property (retain, nonatomic) NSString *contactAppUsername;
@property (nonatomic) int channel;
@property (retain, nonatomic) NSString *extInfo;
@property (retain, nonatomic) ActionLocation *actionLocation;
@property (nonatomic) int scene;
@property (nonatomic) int wxAppScene;
@property (retain, nonatomic) NSString *payCookies;

+ (void)initialize;

@end
