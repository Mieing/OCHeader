@class NSString, AWEAwemeModel;

@interface AWEShowMonetizePopupCouponTask : AWEShowMonetizePopupTask <AWEShowMonetizeCouponHandler>

@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) id /* block */ trackParamsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)couponReceiveHandlerEventContainerID:(id)a0;
- (void)coupon:(id)a0 willLoadCouponInfoForScene:(unsigned long long)a1 timing:(unsigned long long)a2;
- (void)coupon:(id)a0 didLoadCouponInfoForScene:(unsigned long long)a1 timing:(unsigned long long)a2 hasCouponInfo:(BOOL)a3;
- (void)coupon:(id)a0 willShowCouponPageForScene:(unsigned long long)a1 timing:(unsigned long long)a2;
- (void)coupon:(id)a0 didShowCouponPageForScene:(unsigned long long)a1 timing:(unsigned long long)a2 result:(BOOL)a3;
- (void)coupon:(id)a0 didCloseCouponPageForScene:(unsigned long long)a1 timing:(unsigned long long)a2;
- (id)initWithReferString:(id)a0 aweme:(id)a1 containerID:(id)a2 trackParamsHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (BOOL)canRun;
- (void)run;
- (void)dealloc;
- (void)cancel;

@end
