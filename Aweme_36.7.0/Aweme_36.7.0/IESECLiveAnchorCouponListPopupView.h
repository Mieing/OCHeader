@class NSDictionary, IESECLiveAnchorCouponListView, NSString;

@interface IESECLiveAnchorCouponListPopupView : IESECLiveAnchorCommonPopupView <IESECLiveAnchorCouponListViewOffLiveDelegate>

@property (retain, nonatomic) NSDictionary *params;
@property (copy, nonatomic) id /* block */ offLiveRoomGrantHandler;
@property (retain, nonatomic) IESECLiveAnchorCouponListView *listView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootView:(id)a0 params:(id)a1 onGrantCoupon:(id /* block */)a2;
- (void)p_setupCouponListView;
- (void)couponListView:(id)a0 didGrantOffLiveCoupon:(id)a1 result:(id)a2;
- (void).cxx_destruct;
- (double)headerHeight;

@end
