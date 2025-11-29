@class NSString;

@interface ATSBPEAErrorSubscriber : NSObject <BDPolicyEventSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldHandleEvent:(id)a0;
- (id)eventName:(id)a0;
- (void)reportHybridRuleErrorEvent:(id)a0 withHybridCert:(id)a1;
- (id)eventType:(id)a0;
- (id)eventCertType:(id)a0;
- (id)subscriberUid;
- (void)handleEvent:(id)a0;
- (void)reportEvent:(id)a0;

@end
