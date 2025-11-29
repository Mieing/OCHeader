@class NSMutableDictionary, NSString, AWEShowAnnieXPageClickShowTrackUtil, NSHashTable;

@interface AWEShowMonetizeCoupon : NSObject <AWEShowMonetizeCouponService>

@property (retain, nonatomic) NSHashTable *handlers;
@property (retain, nonatomic) NSMutableDictionary *getCouponInfoByScene;
@property (retain, nonatomic) AWEShowAnnieXPageClickShowTrackUtil *clickShowTrackUtil;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addNotification;
- (unsigned long long)transformGetCouponInfoSceneWithReferString:(id)a0;
- (BOOL)tryToShowCouponInfoWithScene:(unsigned long long)a0 timing:(unsigned long long)a1 aweme:(id)a2 containerID:(id)a3 trackParamsHandler:(id /* block */)a4 completion:(id /* block */)a5;
- (id)createCouponTimeline;
- (void)removeCouponHandler:(id)a0;
- (void)addCouponHandler:(id)a0;
- (id)getPurchaseInfoWithCouponInfo:(id)a0;
- (void)addFEEvent;
- (id)getHandlersForContainerID:(id)a0;
- (BOOL)openCouponInfoPageWithResponse:(id)a0 scene:(unsigned long long)a1 timing:(unsigned long long)a2 aweme:(id)a3 containerID:(id)a4 trackParamsHandler:(id /* block */)a5 completion:(id /* block */)a6;
- (void)getServerCouponInfoWithScene:(unsigned long long)a0 timing:(unsigned long long)a1 aweme:(id)a2 completion:(id /* block */)a3;
- (id)getLocalCouponInfoWithScene:(unsigned long long)a0 timing:(unsigned long long)a1;
- (id)getLocalCouponInfoWithScene:(unsigned long long)a0 timing:(unsigned long long)a1 contentID:(id)a2;
- (id)getValidCouponInfosWithScene:(unsigned long long)a0 contentID:(id)a1;
- (void)couponContainerWillShowNotification:(id)a0;
- (void)couponContainerDidCloseNotification:(id)a0;
- (unsigned long long)transformGetCouponInfoSceneWithSceneType:(long long)a0;
- (unsigned long long)transformGetCouponInfoTimingWithSceneType:(long long)a0;
- (void)trackCouponPageShowWithErrorCode:(long long)a0 containerID:(id)a1 extraParams:(id)a2;
- (long long)getIntCurrentServerTimeSec;
- (long long)transformRequestSceneFromGetCouponInfoScene:(unsigned long long)a0 timing:(unsigned long long)a1;
- (unsigned long long)transformTimingFromPopupType:(long long)a0;
- (long long)transformSceneFromGetCouponInfoScene:(unsigned long long)a0 timing:(unsigned long long)a1;
- (void)removeCouponWithScene:(unsigned long long)a0;
- (id)getCouponInfoResWithScene:(unsigned long long)a0 timing:(unsigned long long)a1 contentID:(id)a2;
- (id)getBestOnePriceCouponInfoWithScene:(unsigned long long)a0 contentID:(id)a1;
- (void)tryStopGetCouponInfoTimerForLeaveTimingWithScene:(unsigned long long)a0;
- (void)addTrackUtil;
- (void)launchGetCouponInfoTimerForLeaveTiming:(unsigned long long)a0 aweme:(id)a1;
- (BOOL)shouldGetCouponInfoWithScene:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
