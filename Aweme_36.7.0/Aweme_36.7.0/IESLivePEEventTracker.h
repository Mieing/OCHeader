@class NSString, NSHashTable;

@interface IESLivePEEventTracker : NSObject <IESLivePEEventTracker> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _observer_rwlock;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)willCommitTrackEvent:(id)a0 params:(id)a1;
- (void)onEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)dealloc;

@end
