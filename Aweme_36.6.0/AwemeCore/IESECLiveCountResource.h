@class NSMutableDictionary;

@interface IESECLiveCountResource : NSObject <IESECLiveAbstractResource> {
    long long _count;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (nonatomic) long long capacity;
@property (retain, nonatomic) NSMutableDictionary *observers;

- (void)releaseSource;
- (id)addReleaseObserver:(id /* block */)a0;
- (void)removeReleaseObserverForId:(id)a0;
- (BOOL)available;
- (void).cxx_destruct;
- (id)initWithCapacity:(long long)a0;
- (id)init;
- (BOOL)hold;
- (void)reset;

@end
