@class NSMutableDictionary;

@interface PuzzleStateCenterService : NSObject

@property (retain, nonatomic) NSMutableDictionary *observers;
@property (retain, nonatomic) NSMutableDictionary *stateData;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } observersLock;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } dataLock;

+ (id)sharedService;

- (void)registeredObserver:(id)a0 withKey:(id)a1;
- (void)unregisteredObserver:(id)a0 withKey:(id)a1;
- (id)getStateWithKey:(id)a0;
- (void)setSateKey:(id)a0 value:(id)a1;
- (id)getStatesWithKeys:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
