@class BaseRequest, NSString;

@interface CheckPreHotReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *username;

+ (void)initialize;

@end
