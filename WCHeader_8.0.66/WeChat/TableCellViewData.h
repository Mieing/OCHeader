@class RouteInfo, RedDot, NSString, RoundTextViewData, PaddingStyle, NSMutableArray, ImageViewData;

@interface TableCellViewData : WXPBGeneratedMessage

@property (retain, nonatomic) ImageViewData *icon;
@property (retain, nonatomic) NSMutableArray *titles;
@property (retain, nonatomic) NSMutableArray *subTitles;
@property (retain, nonatomic) ImageViewData *navIcon;
@property (retain, nonatomic) RedDot *redDot;
@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) PaddingStyle *padding;
@property (retain, nonatomic) RouteInfo *routeInfo;
@property (retain, nonatomic) RoundTextViewData *tag;

+ (void)initialize;

@end
