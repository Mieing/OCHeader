@class AWEUIAlertView, NSMutableDictionary;

@interface AWELiveXPlayGameUtil : NSObject

@property (retain, nonatomic) AWEUIAlertView *queueAlertView;
@property (retain, nonatomic) NSMutableDictionary *clocks;

- (void)dismissQueueAlertView;
- (void)setupDurationTracker;
- (void)commitDurationTime:(id)a0;
- (id)duration:(id)a0 end:(id)a1;
- (void)monitorSendCustomMessage:(id)a0 type:(id)a1;
- (void)pushDurationTracker:(id)a0;
- (void)showLaunchFailAlertWithReason:(id)a0 actionBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (void)showDeviceOfflineAlert:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (void)showForceStopAlert:(id /* block */)a0;
- (void)showExceptionAlertWithTitle:(id)a0 description:(id)a1 cancelTitle:(id)a2 actionBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (long long)netStatusTransfer:(long long)a0;
- (id)queueTypeWithQueueConfiguration:(id)a0;
- (void)showQueueAlertViewWithRanking:(long long)a0 abortQueueCallback:(id /* block */)a1;
- (void)showInvalidAlert:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (void)showUnsupportAlert:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (void)showAppVersionTooLowAlert:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (void)showBannedAlert:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (void)showResourceFullAlert:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (void)_showAlertWithTitle:(id)a0 description:(id)a1 actionTitle:(id)a2 cancelTitle:(id)a3 actionBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (double)getTime:(id)a0;
- (void)showNetworkErrorAlert:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
