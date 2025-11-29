@class NSString, NSHashTable;

@interface ACCCameraSubscription : NSObject <ACCCameraSubscription, ACCCameraSubscriptionPerformCapability>

@property (retain, nonatomic) NSHashTable *subscribers;
@property (readonly, nonatomic) unsigned long long subscriberCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performEventSelector:(SEL)a0 realPerformer:(id /* block */)a1;
- (void)make:(id)a0;
- (void)make:(id)a0 of:(id)a1;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
