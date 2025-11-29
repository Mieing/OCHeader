@class NSString;

@interface ATSBPEALogSubscriber : NSObject <BDPolicyEventSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventName:(id)a0;
- (id)eventType:(id)a0;
- (id)eventCertType:(id)a0;
- (id)subscriberUid;
- (void)logAndReportEvent:(id)a0;
- (void)reportEvent:(id)a0 eventType:(id)a1;
- (void)handleEvent:(id)a0;
- (void)logEvent:(id)a0;
- (void)reportEvent:(id)a0;

@end
