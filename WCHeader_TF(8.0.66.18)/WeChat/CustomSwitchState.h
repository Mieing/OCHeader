@class CmdInfo, NSString, TextViewData, DynamicColor, RouteInfo;

@interface CustomSwitchState : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) TextViewData *text;
@property (retain, nonatomic) RouteInfo *routeInfo;
@property (retain, nonatomic) CmdInfo *cmdInfo;
@property (retain, nonatomic) DynamicColor *color;

+ (void)initialize;

@end
