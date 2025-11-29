@class ControlInfo, TextViewData, RouteInfo;

@interface ActionSheetItem : WXPBGeneratedMessage

@property (retain, nonatomic) TextViewData *title;
@property (retain, nonatomic) TextViewData *subTitle;
@property (retain, nonatomic) RouteInfo *routeInfo;
@property (retain, nonatomic) ControlInfo *controlInfo;

+ (void)initialize;

@end
