@class BaseRequest, NSString;

@interface GetWxaSunCodeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *path;

+ (void)initialize;

@end
