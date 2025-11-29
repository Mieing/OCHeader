@class AWESearchLynxPopupManager;

@interface AWESearchLynxPopupTask : AWESearchPopViewTask

@property (retain, nonatomic) AWESearchLynxPopupManager *lynxPopup;
@property (copy, nonatomic) id /* block */ onClose;
@property (nonatomic) BOOL isTriggered;

- (BOOL)blockAllAlertWhenNotPreparedWithContext:(id)a0;
- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (void)onAlertCanceled;
- (void)showLynxPopupWithUrl:(id)a0;
- (void)removeTaskWithType:(long long)a0;
- (void).cxx_destruct;

@end
