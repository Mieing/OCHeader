@class BaseRequest, NSString;

@interface GenMallPrepayRequest : WXPBGeneratedMessage

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
@property (nonatomic) int scene;

+ (void)initialize;

@end
