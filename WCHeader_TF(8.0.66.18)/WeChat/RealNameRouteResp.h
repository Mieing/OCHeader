@class NSString, RouteInfo, BaseResponse;

@interface RealNameRouteResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (nonatomic) unsigned int underAgeScene;
@property (retain, nonatomic) RouteInfo *routeInfo;

+ (void)initialize;

@end
