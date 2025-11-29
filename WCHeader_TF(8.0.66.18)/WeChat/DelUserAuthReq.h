@class BaseRequest, NSString;

@interface DelUserAuthReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned int fromScene;

+ (void)initialize;

@end
