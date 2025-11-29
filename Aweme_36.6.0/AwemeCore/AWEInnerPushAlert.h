@class NSString;

@interface AWEInnerPushAlert : AWEInnerPushAlertBase <AWEMessageReachPopViewProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (BOOL)isEqualToAlert:(id)a0;
- (unsigned long long)alertViewStyleForEvent:(id)a0;
- (void)showWithContext:(id)a0 callbackWrapper:(id)a1;
- (void)onAlertCanceledWithContext:(id)a0;
- (id)mr_accessIDForEvent:(id)a0;

@end
