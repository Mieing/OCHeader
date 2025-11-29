@class DVEMultipleTrackUpdateTask, NSMutableArray;

@interface DVEMultipleTrackUpdateTaskQueue : NSObject

@property (retain, nonatomic) DVEMultipleTrackUpdateTask *executedTask;
@property (retain, nonatomic) NSMutableArray *taskQueue;
@property (nonatomic) BOOL isStop;
@property (nonatomic) BOOL isExecuted;

- (id)taskForType:(unsigned long long)a0;
- (void)executeNextTask;
- (void)addTask:(id)a0 needAutoExecute:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)clearTasks;

@end
