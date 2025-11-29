@class NSMutableArray;

@interface YataRunLoopTask : NSObject

@property (nonatomic) long long maxPrepareTaskCount;
@property (retain, nonatomic) NSMutableArray *taskArray;
@property (retain, nonatomic) NSMutableArray *taskIndexPathArray;
@property (nonatomic) BOOL taskComplete;
@property (nonatomic) struct __CFRunLoopObserver { } *runLoopObserver;
@property (copy, nonatomic) id /* block */ taskCompleteBlock;

- (void)addRunloopObserver;
- (void)addTask:(id)a0;
- (void)removeTask:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
