@class NSMutableDictionary;

@interface IESLiveMultiRoomPreloadManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *entityPools;
@property (nonatomic) BOOL enable;

+ (id)manager;

- (void)recordEnterRoomStage:(unsigned long long)a0 fromRoom:(id)a1 toRoom:(id)a2;
- (id)entityWithRoom:(id)a0;
- (void)clearWithRoom:(id)a0;
- (id)entityWithIndex:(id)a0 needCreate:(BOOL)a1;
- (void)checkThread:(SEL)a0;
- (BOOL)preloadWithRoomParam:(id)a0;
- (void)checkAllPreloadRoomWithBlock:(id /* block */)a0;
- (void)clearAllExceptRoom:(id)a0;
- (BOOL)emptyPreloadEntity;
- (void)pauseAllTask;
- (void)reuseAllTask;
- (BOOL)subscribeRoomStateWithIndex:(id)a0 businessIndex:(id)a1 callback:(id /* block */)a2;
- (void)removeSubscribeRoomStateWithIndex:(id)a0 businessIndex:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)clearAll;

@end
