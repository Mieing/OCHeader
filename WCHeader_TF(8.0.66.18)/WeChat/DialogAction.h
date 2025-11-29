@class NSString, RouteInfo, CmdInfo;

@interface DialogAction : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) RouteInfo *routeInfo;
@property (retain, nonatomic) CmdInfo *cmdInfo;
@property (retain, nonatomic) NSString *viewId;

+ (void)initialize;

@end
