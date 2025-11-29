@class NSMutableDictionary;

@interface AWERelatedVideoScheduler : NSObject

@property (retain, nonatomic) NSMutableDictionary *blockArrayMap;
@property (retain, nonatomic) NSMutableDictionary *highPriorityBlockArrayMap;
@property (retain, nonatomic) NSMutableDictionary *controlMap;
@property (retain, nonatomic) NSMutableDictionary *timerMap;

- (void)createTaskQueue:(id)a0;
- (BOOL)submitTask:(id /* block */)a0 toQueue:(id)a1;
- (BOOL)submitTask:(id /* block */)a0 isHighPriority:(BOOL)a1 toQueue:(id)a2;
- (void)executeWithQueueName:(id)a0;
- (void)setQueueStatus:(BOOL)a0 toQueue:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (id)createTimer:(id)a0;

@end
