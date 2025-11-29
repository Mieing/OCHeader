@class BaseRequest;

@interface LogOutRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
