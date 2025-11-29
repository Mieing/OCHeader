@class BaseRequest, NSString;

@interface GetUserPlateInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned int scene;
@property (nonatomic) BOOL needPrivacyProtectInfo;

+ (void)initialize;

@end
