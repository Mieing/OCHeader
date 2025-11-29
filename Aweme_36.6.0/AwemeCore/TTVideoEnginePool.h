@class NSMutableDictionary, NSPointerArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TTVideoEnginePool : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableArray *_engineArray;
    NSPointerArray *_resetingEngines;
    NSObject<OS_dispatch_queue> *_taskQueue;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _monitorLock;
    NSMutableDictionary *_engineDict;
    long long _playingCount;
    NSMutableDictionary *_liveEngineDict;
}

@property (nonatomic) long long corePoolSizeUpperLimit;

+ (id)instance;

- (id)getEngine;
- (void)startObserve:(unsigned long long)a0 engine:(id)a1;
- (void)engine:(id)a0 engineHash:(unsigned long long)a1 stateChange:(long long)a2;
- (void)engineAsyncCloseDone:(id)a0;
- (void)stopObserve:(unsigned long long)a0;
- (void)livePlayerStateChange:(id)a0;
- (void)releaseCoreEngines;
- (id)_popEngineFromPool;
- (void)_resetAndGivebackToPoolAsync:(id)a0;
- (id)getEngineWithOwnPlayer:(BOOL)a0;
- (id)getEngineWithType:(unsigned long long)a0;
- (id)getEngineWithType:(unsigned long long)a0 async:(BOOL)a1;
- (void)givebackEngine:(id)a0;
- (void)cancelPreviousCrossTalkCheck;
- (void)crossTalkCheck;
- (void)tryCrossTalkCheck;
- (id)getExistingEnginesInfos;
- (id)getEngineInfoWithVID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
