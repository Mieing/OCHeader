@class NSString, NSMutableArray;

@interface AWEPerfEvaluateApplogService : NSObject <AWEPerfEvaluateApplogService>

@property (retain, nonatomic) NSMutableArray *observers;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hookEventArray;
- (void)onEventV3:(id)a0 params:(id)a1;
- (void)registerObservers:(id)a0;
- (void).cxx_destruct;
- (void)registerObserver:(id)a0;
- (id)init;
- (void)unregisterObserver:(id)a0;
- (BOOL)enabled;
- (void)dealloc;

@end
