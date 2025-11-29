@class NSString;

@interface AWESECBpeaEventSubscriber : NSObject <BDPolicyEventSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)subscriberUid;
- (BOOL)__isTargetContext:(id)a0 timestamp:(double)a1 apiToken:(id)a2 datamap:(id)a3 certType:(id)a4;
- (void)handleEvent:(id)a0;

@end
