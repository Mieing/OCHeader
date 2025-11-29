@class NSMutableArray;

@interface BDPolicyEntryHandlerManager : NSObject

@property (retain, nonatomic) NSMutableArray *handlers;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;

+ (id)sharedInstance;

- (void)addEntryHandler:(id)a0;
- (id)getHandlers;
- (void)removeEntryHandler:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)removeAllHandlers;

@end
