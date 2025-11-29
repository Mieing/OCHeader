@class NSString;

@interface TMBPEAHybridErrorReporter : NSObject <BDPolicyEventSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventName:(id)a0;
- (id)subscriberUid;
- (BOOL)_shouldHandleEvent:(id)a0;
- (void)handleEvent:(id)a0;
- (void)_handleEvent:(id)a0;

@end
