@class ImageViewData, NSString, TextViewData, NSMutableArray, RouteInfo;

@interface NewCardItemViewData : WXPBGeneratedMessage

@property (retain, nonatomic) TextViewData *title;
@property (retain, nonatomic) NSMutableArray *subTitle;
@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) NSString *jumpSafariUrl;
@property (retain, nonatomic) RouteInfo *routeInfo;
@property (retain, nonatomic) ImageViewData *icon;

+ (void)initialize;

@end
