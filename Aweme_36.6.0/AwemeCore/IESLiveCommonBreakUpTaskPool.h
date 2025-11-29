@class NSMutableArray, NSMutableDictionary;

@interface IESLiveCommonBreakUpTaskPool : NSObject

@property (retain, nonatomic) NSMutableArray *queueArray;
@property (retain, nonatomic) NSMutableDictionary *taskIDMap;
@property (retain, nonatomic) NSMutableDictionary *groupIDMap;

- (id)dequeueAtGroupID:(id)a0;
- (BOOL)isExistWithGroupID:(id)a0;
- (id)_dequeueAtGroupID:(id)a0;
- (void)removeAllTask;
- (id)_queueWithLevel:(long long)a0;
- (id)dequeueAtTaskId:(id)a0;
- (id)dequeueAllTask;
- (id)taskWithLimit:(double)a0;
- (BOOL)isExistWithTaskId:(id)a0;
- (id)enqueue:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)init;
- (void)_removeTask:(id)a0;
- (void)dequeue:(id)a0;

@end
