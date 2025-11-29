@class NSTimer, NSMutableArray;

@interface AWEShowMonetizeGetCouponInfo : NSObject

@property (nonatomic) unsigned long long scene;
@property (nonatomic) long long curSceneNextCanApplyTimestampt;
@property (retain, nonatomic) NSMutableArray *couponResponses;
@property (retain, nonatomic) NSTimer *leaveTimingGetCouponInfoTimer;

- (void).cxx_destruct;
- (id)init;

@end
