@class NSString, TextViewData, RouteInfo;

@interface NavigationItemViewData : WXPBGeneratedMessage

@property (retain, nonatomic) TextViewData *title;
@property (retain, nonatomic) TextViewData *subTitle;
@property (retain, nonatomic) RouteInfo *routeInfo;
@property (retain, nonatomic) NSString *viewId;

+ (void)initialize;

@end
