@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol AWEUITaskSpreadProtocol;

@interface AWEUITaskSpreadQueue : NSObject {
    NSMutableArray *_objects;
    NSMutableDictionary *_groupMap;
    NSMutableDictionary *_taskMap;
}

@property (readonly, copy, nonatomic) NSArray *objects;
@property (readonly, nonatomic) id<AWEUITaskSpreadProtocol> leading;
@property (readonly, nonatomic) id<AWEUITaskSpreadProtocol> trailing;

- (void)_remove:(id)a0;
- (void)_removeAllObjects;
- (void)_insertTasks:(id)a0;
- (id)dequeueAtTaskID:(id)a0;
- (BOOL)isExistWithTaskID:(id)a0;
- (void)insertTasks:(id)a0;
- (id)dequeueAtGroupID:(id)a0;
- (BOOL)isExistWithGroupID:(id)a0;
- (id)_dequeueAtGroupID:(id)a0;
- (BOOL)enqueue:(id)a0;
- (void).cxx_destruct;
- (BOOL)_enqueue:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (id)dequeue;
- (void)dequeue:(id)a0;

@end
