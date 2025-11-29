@class NSArray, NSMutableArray;

@interface AWEPublishTaskPersist : NSObject

@property (retain, nonatomic) NSMutableArray *taskIds;
@property (readonly, nonatomic) NSArray *taskIdArray;

+ (void)taskExist:(id)a0 completion:(id /* block */)a1;

- (void)removeCachedTaskID:(id)a0;
- (id)cachedTaskIds;
- (void)destoryCache;
- (void)addTaskId:(id)a0;
- (BOOL)removeTaskId:(id)a0;
- (void)synchronizeTaskIds;
- (void)addTask:(id)a0;
- (BOOL)removeTask:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
