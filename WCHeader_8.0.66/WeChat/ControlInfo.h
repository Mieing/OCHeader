@class CmdInfo, RetryStrategy, RouteInfo, NSMutableArray;

@interface ControlInfo : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) RetryStrategy *retryStrategy;
@property (retain, nonatomic) RouteInfo *routeInfo;
@property (retain, nonatomic) CmdInfo *cmdInfo;
@property (retain, nonatomic) NSMutableArray *asyncCmdInfo;

+ (void)initialize;

@end
