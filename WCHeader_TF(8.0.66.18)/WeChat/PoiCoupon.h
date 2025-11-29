@class NSString;

@interface PoiCoupon : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *startTime;
@property (retain, nonatomic) NSString *endTime;
@property (retain, nonatomic) NSString *rate;
@property (retain, nonatomic) NSString *remark;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *photoUrl;

+ (void)initialize;

@end
