@class RouteInfo, NSString, TextViewData, NSMutableArray, ImageViewData;

@interface CardRecordViewData : WXPBGeneratedMessage

@property (retain, nonatomic) ImageViewData *logo;
@property (retain, nonatomic) TextViewData *title;
@property (retain, nonatomic) NSMutableArray *subTitle;
@property (retain, nonatomic) NSString *bindSerial;
@property (retain, nonatomic) NSString *bankType;
@property (retain, nonatomic) RouteInfo *routeInfo;
@property (nonatomic) int state;
@property (nonatomic) unsigned int subtitleShowIndex;
@property (nonatomic) int bankCardTag;
@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) TextViewData *payDeskTitle;
@property (retain, nonatomic) NSString *defaultFavorComposeId;
@property (retain, nonatomic) NSMutableArray *attachIntro;
@property (retain, nonatomic) TextViewData *shortTitle;
@property (retain, nonatomic) TextViewData *outerSubTitle;
@property (retain, nonatomic) NSMutableArray *cardSubItemViewData;

+ (void)initialize;

@end
