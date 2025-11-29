@class BaseRequest, NSString;

@interface SetGDRPAuthRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int opt;

+ (void)initialize;

@end
