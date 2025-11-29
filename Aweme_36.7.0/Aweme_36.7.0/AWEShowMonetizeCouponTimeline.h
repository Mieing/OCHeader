@class NSTimer, AWECodeGenApplyCouponInfoModel, NSString;
@protocol AWEShowMonetizeCouponTimelineHandler;

@interface AWEShowMonetizeCouponTimeline : NSObject <AWEShowMonetizeCouponTimelineService>

@property (retain, nonatomic) NSTimer *couponInfoTimelineTimer;
@property (retain, nonatomic) AWECodeGenApplyCouponInfoModel *runningTimelineCouponInfo;
@property (weak, nonatomic) id<AWEShowMonetizeCouponTimelineHandler> handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tryStopCouponInfoTimelineWithScene:(unsigned long long)a0 contentID:(id)a1;
- (void)tryStartCouponInfoTimelineWithScene:(unsigned long long)a0 contentID:(id)a1;
- (void)tryStartCouponInfoTimelineWithIndex:(long long)a0 couponInfos:(id)a1 contentID:(id)a2;
- (id)getTimelineTextForCountdown:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
