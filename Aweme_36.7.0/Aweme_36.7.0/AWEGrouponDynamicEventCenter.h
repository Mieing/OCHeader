@class NSMutableDictionary;

@interface AWEGrouponDynamicEventCenter : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _subsDictLock;
}

@property (retain, nonatomic) NSMutableDictionary *subsDict;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)__addObserver;
- (void)__registerBdxSubsriberWithSub:(id)a0 eventName:(id)a1;
- (void)__unregisterBdxSubsriberWithSub:(id)a0 eventName:(id)a1;
- (void)__handleBDXBroadcastNotification:(id)a0;
- (void)__handleEventWithEventName:(id)a0 params:(id)a1;
- (void)registerSubscriber:(id)a0 eventName:(id)a1;
- (void)unregisterSubscriber:(id)a0 eventName:(id)a1;
- (void)publishHybridEvent:(id)a0;
- (void)__handleDSLEventNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
