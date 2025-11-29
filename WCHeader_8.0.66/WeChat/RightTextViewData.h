@class NSString, RouteInfo, TextViewData;

@interface RightTextViewData : WXPBGeneratedMessage

@property (nonatomic) int imageType;
@property (nonatomic) int clickRegion;
@property (retain, nonatomic) RouteInfo *routeInfo;
@property (retain, nonatomic) TextViewData *text;
@property (retain, nonatomic) NSString *viewId;

+ (void)initialize;

@end
