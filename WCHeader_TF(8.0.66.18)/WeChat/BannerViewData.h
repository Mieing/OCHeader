@class PaddingStyle, NSString, DynamicColor, TextViewData, RouteInfo, ImageViewData;

@interface BannerViewData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) RouteInfo *routeInfo;
@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) ImageViewData *icon;
@property (retain, nonatomic) NSString *bannerId;
@property (retain, nonatomic) DynamicColor *bgColor;
@property (retain, nonatomic) TextViewData *titleV2;
@property (retain, nonatomic) PaddingStyle *padding;
@property (retain, nonatomic) DynamicColor *fontColor;
@property (retain, nonatomic) DynamicColor *borderColor;

+ (void)initialize;

@end
