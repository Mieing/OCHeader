@class BaseRequest, NSString;

@interface CgiScanRewardQrcodeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *qrcodeUrl;
@property (nonatomic) unsigned int channel;
@property (retain, nonatomic) NSString *webviewUrl;

+ (void)initialize;

@end
