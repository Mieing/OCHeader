@class NSString, TextViewData, RouteInfo, ImageViewData;

@interface EditViewData : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) ImageViewData *image;
@property (retain, nonatomic) TextViewData *key;
@property (retain, nonatomic) TextViewData *value;
@property (retain, nonatomic) TextViewData *hint;
@property (retain, nonatomic) RouteInfo *routeInfo;
@property (retain, nonatomic) NSString *viewId;

+ (void)initialize;

@end
