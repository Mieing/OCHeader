@class CmdInfo, NSString, DynamicColor, RouteInfo, ImageViewData;

@interface ButtonViewData : WXPBGeneratedMessage

@property (nonatomic) int state;
@property (retain, nonatomic) RouteInfo *routeInfo;
@property (nonatomic) int buttonType;
@property (retain, nonatomic) ImageViewData *image;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *viewId;
@property (nonatomic) int actionType;
@property (retain, nonatomic) CmdInfo *cmdInfo;
@property (nonatomic) long long textColor;
@property (nonatomic) long long bgColor;
@property (retain, nonatomic) DynamicColor *dynamicTextColor;
@property (retain, nonatomic) DynamicColor *dynamicBgColor;
@property (nonatomic) long long textButtonCountDownSeconds;

+ (void)initialize;

@end
