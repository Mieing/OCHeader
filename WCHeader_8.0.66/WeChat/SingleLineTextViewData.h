@class NSString, RightTextViewData, TextViewData, RouteInfo;

@interface SingleLineTextViewData : WXPBGeneratedMessage

@property (retain, nonatomic) TextViewData *leftText;
@property (retain, nonatomic) RightTextViewData *rightText;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) RouteInfo *routeInfo;

+ (void)initialize;

@end
