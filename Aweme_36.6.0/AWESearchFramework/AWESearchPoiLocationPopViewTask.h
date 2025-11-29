@class AWESearchPopInfo;
@protocol AWESearchPopHandlerProtocol;

@interface AWESearchPoiLocationPopViewTask : AWESearchPopViewTask

@property (retain, nonatomic) AWESearchPopInfo *locationPopInfo;
@property (retain, nonatomic) AWESearchPopInfo *poiCouponInfo;
@property (weak, nonatomic) id<AWESearchPopHandlerProtocol> delegete;
@property (copy, nonatomic) id /* block */ finishAuthBlock;
@property (copy, nonatomic) id /* block */ userDenyActionBlock;
@property (copy, nonatomic) id /* block */ fetchSearchId;

- (BOOL)blockAllAlertWhenNotPreparedWithContext:(id)a0;
- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (void)onAlertCanceled;
- (void).cxx_destruct;

@end
