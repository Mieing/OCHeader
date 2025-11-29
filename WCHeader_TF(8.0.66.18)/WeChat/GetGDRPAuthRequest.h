@class BaseRequest, NSString;

@interface GetGDRPAuthRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
