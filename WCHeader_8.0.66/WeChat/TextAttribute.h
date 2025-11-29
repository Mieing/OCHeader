@class NSString, DynamicColor, RouteInfo, ControlInfo;

@interface TextAttribute : WXPBGeneratedMessage

@property (nonatomic) long long color;
@property (retain, nonatomic) NSString *font;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) float size;
@property (retain, nonatomic) RouteInfo *routeInfo;
@property (nonatomic) int textAttr;
@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) DynamicColor *dynamicColor;
@property (retain, nonatomic) DynamicColor *bgColor;
@property (nonatomic) float bgCornerRadius;
@property (nonatomic) int fontStyle;
@property (retain, nonatomic) ControlInfo *controlInfo;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (void)initialize;

@end
