@class NSString, NSMutableDictionary, NSMutableSet;

@interface SECEventCenter : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _subscriberLock;
}

@property (retain, nonatomic) NSMutableDictionary *registeredSubscribers;
@property (retain, nonatomic) NSMutableDictionary *subscriberInstances;
@property (retain, nonatomic) NSMutableSet *allTypeSubscribers;
@property (copy, nonatomic) NSString *name;

+ (void)setupGlobalDelegate:(id)a0;

- (void)publishEvent:(id)a0;
- (void)registerSubscriber:(id)a0 forEventType:(id)a1;
- (id)subscribersForEvent:(id)a0;
- (void)registerSubscriberForAllEventType:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;

@end
