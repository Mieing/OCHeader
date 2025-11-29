@class NSString;

@interface AWEBeforeSystemPushPermissionRequestAlertManager : NSObject <DUXAlertDialogDelegate, AWEAlertProtocol>

@property (copy, nonatomic) id /* block */ onClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)alertDialogDidDismiss:(id)a0;
- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)p_reportPsort;
- (void)p_reportPsortNetwork;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
