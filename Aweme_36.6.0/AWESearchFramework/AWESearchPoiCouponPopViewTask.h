@class AWESearchPopInfo;
@protocol AWESearchPopHandlerProtocol;

@interface AWESearchPoiCouponPopViewTask : AWESearchLynxPopupTask

@property (weak, nonatomic) id<AWESearchPopHandlerProtocol> delegete;
@property (retain, nonatomic) AWESearchPopInfo *locationPopInfo;
@property (retain, nonatomic) AWESearchPopInfo *poiCouponInfo;
@property (copy, nonatomic) id /* block */ poiCouponAction;

- (BOOL)blockAllAlertWhenNotPreparedWithContext:(id)a0;
- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (void)onAlertCanceled;
- (void).cxx_destruct;
- (id)init;

@end
