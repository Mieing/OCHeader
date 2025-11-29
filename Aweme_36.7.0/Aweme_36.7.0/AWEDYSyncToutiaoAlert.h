@class NSString;

@interface AWEDYSyncToutiaoAlert : NSObject <AWEAlertProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;

@end
