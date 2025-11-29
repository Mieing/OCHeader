@interface DolphinTasksManager : NSObject

+ (void)startDolphinTasks:(id)a0 rerankContext:(id)a1 completionBlock:(id /* block */)a2;
+ (void)initRerankQueueOnce;

@end
