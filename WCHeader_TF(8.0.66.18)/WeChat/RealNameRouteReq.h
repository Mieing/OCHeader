@class BaseRequest;

@interface RealNameRouteReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int payscene;

+ (void)initialize;

@end
