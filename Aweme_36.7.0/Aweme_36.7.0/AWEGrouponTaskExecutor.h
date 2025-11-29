@class NSMutableArray;

@interface AWEGrouponTaskExecutor : NSObject

@property (nonatomic) BOOL isExecutorRunning;
@property (retain, nonatomic) NSMutableArray *executingQueue;
@property (nonatomic) long long pageType;
@property (copy, nonatomic) id /* block */ skipBlock;

- (id)initWithPageType:(long long)a0;
- (void)enterExecutionQueue:(id)a0;
- (void)__tryToStartExecutingQueue;
- (void)__executeTasks;
- (void)__executeTask:(id)a0;
- (void)__taskRunCheck:(id)a0;
- (void).cxx_destruct;

@end
