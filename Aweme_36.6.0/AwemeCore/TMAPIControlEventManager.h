@class NSMutableDictionary;

@interface TMAPIControlEventManager : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *subscribers;

+ (id)sharedManager;

- (void)unLock;
- (void)registerSubscriber:(id)a0 onEventType:(id)a1;
- (void)unregisterSubscriber:(id)a0 onEventType:(id)a1;
- (void)lockWrite;
- (void)lockRead;
- (void)dispatchEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
