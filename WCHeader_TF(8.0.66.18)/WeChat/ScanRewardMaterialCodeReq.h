@class BaseRequest, NSString;

@interface ScanRewardMaterialCodeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *reqUrl;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
