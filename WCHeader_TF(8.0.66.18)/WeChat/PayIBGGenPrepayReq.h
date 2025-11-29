@class BaseRequest, NSString;

@interface PayIBGGenPrepayReq : WXPBGeneratedMessage

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

+ (void)initialize;

@end
