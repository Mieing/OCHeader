@class NSMutableArray;

@interface AWEThemeVideoTaskQueue : NSObject

@property (retain, nonatomic) NSMutableArray *tasks;
@property (nonatomic) BOOL executing;

- (id)taskWithThemeId:(id)a0;
- (id)createTaskWithTileModel:(id)a0;
- (void)executeNextTask;
- (void)addTaskWithTileModel:(id)a0 highPriority:(BOOL)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)cancelAllTasks;

@end
