@class BaseRequest, NSString;

@interface JSAPIModUseUserInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int sceneType;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *jsapiName;
@property (retain, nonatomic) NSString *scope;
@property (nonatomic) unsigned int state;

+ (void)initialize;

@end
