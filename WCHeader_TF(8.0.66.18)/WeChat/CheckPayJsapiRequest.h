@class BaseRequest, NSString, ActionLocation;

@interface CheckPayJsapiRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *nonceStr;
@property (retain, nonatomic) NSString *timestamp;
@property (retain, nonatomic) NSString *package;
@property (retain, nonatomic) NSString *sign;
@property (retain, nonatomic) NSString *signType;
@property (retain, nonatomic) NSString *webViewUrl;
@property (nonatomic) unsigned int jsApiScene;
@property (retain, nonatomic) ActionLocation *actionLocation;
@property (retain, nonatomic) NSString *uuidForBindCard;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) int sourceType;
@property (nonatomic) unsigned int channelType;
@property (retain, nonatomic) NSString *commandWord;

+ (void)initialize;

@end
