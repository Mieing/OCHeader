@class PoiAppInfo, PoiQueueInfo, PoiBusinessHour, PoiRate, PoiIntro, PoiPhoto, PoiBrief, PoiReservation, NSMutableArray, PoiReview, PoiTakeAway;

@interface PoiDetailInfo : WXPBGeneratedMessage

@property (retain, nonatomic) PoiBrief *brief;
@property (retain, nonatomic) PoiIntro *intro;
@property (retain, nonatomic) PoiRate *rate;
@property (retain, nonatomic) NSMutableArray *photos;
@property (retain, nonatomic) NSMutableArray *deals;
@property (retain, nonatomic) NSMutableArray *coupons;
@property (retain, nonatomic) PoiReview *review;
@property (retain, nonatomic) PoiBusinessHour *hour;
@property (retain, nonatomic) PoiReservation *reservation;
@property (retain, nonatomic) PoiTakeAway *takeAway;
@property (retain, nonatomic) PoiAppInfo *appInfo;
@property (retain, nonatomic) NSMutableArray *sourceInfo;
@property (retain, nonatomic) PoiPhoto *headPhoto;
@property (retain, nonatomic) NSMutableArray *recommendMenus;
@property (retain, nonatomic) PoiQueueInfo *queue;
@property (retain, nonatomic) NSMutableArray *tags;

+ (void)initialize;

@end
