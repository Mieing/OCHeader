@class NSMutableArray;

@interface VEEffectMessageCenter : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _rw_lock;
}

@property (nonatomic) void *effectMgr;
@property (retain, nonatomic) NSMutableArray *observerRefs;

+ (id)defaultCenter;

- (void)p_lockForRW:(id /* block */)a0;
- (BOOL)p_handleEffectMessageWithID:(unsigned int)a0 arg1:(int)a1 arg2:(int)a2 arg3:(const char *)a3;
- (void).cxx_destruct;
- (void)registerObserver:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)dealloc;

@end
