@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol AWEMVScatterTaskProtocol;

@interface AWEMVScatterTaskQueue : NSObject {
    NSMutableArray *_tasks;
    NSMutableDictionary *_taskMap;
}

@property (readonly, copy, nonatomic) NSArray *tasks;
@property (readonly, nonatomic) id<AWEMVScatterTaskProtocol> leading;
@property (readonly, nonatomic) id<AWEMVScatterTaskProtocol> trailing;

- (void)_remove:(id)a0;
- (void)_removeAllObjects;
- (void)_insertTasks:(id)a0;
- (id)dequeueAtTaskID:(id)a0;
- (BOOL)isExistWithTaskID:(id)a0;
- (void)insertTasks:(id)a0;
- (BOOL)enqueue:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (BOOL)_enqueue:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (id)dequeue;
- (void)dequeue:(id)a0;

@end
