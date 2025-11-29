@class NSMutableArray;

@interface IESLiveCommonBreakUpTaskQueue : NSObject

@property (nonatomic) long long level;
@property (retain, nonatomic) NSMutableArray *taskArray;

- (id)dequeueAll;
- (void)removeAllTask;
- (id)leadingTask;
- (BOOL)enqueue:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)initWithLevel:(long long)a0;
- (void)dequeue:(id)a0;

@end
