@class NSMutableOrderedSet;

@interface DDanmakuDrawBufferPool : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *danmakuDrawBufferPool;
@property (nonatomic) BOOL isEmpty;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwLock;
@property (nonatomic) BOOL useRWLock;

- (void)addDanmaku:(id)a0;
- (void)removeDanmaku:(id)a0;
- (id)initWithUseRWLock:(BOOL)a0;
- (id)currentShowingDanmakus;
- (void).cxx_destruct;
- (void)dealloc;

@end
