@class NSString;
@protocol AWEIMTaskDelegateProtocol;

@interface AWEIMTask : NSObject

@property (copy, nonatomic) NSString *taskID;
@property unsigned long long taskState;
@property double beginTime;
@property (weak, nonatomic) AWEIMTask *dependencyTask;
@property (nonatomic) long long outTime;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) id /* block */ taskActionBlock;
@property (weak, nonatomic) id<AWEIMTaskDelegateProtocol> delegate;
@property (nonatomic) BOOL needRunImmediately;

+ (id)trackerQueue;

- (id)initWithTaskID:(id)a0 dependencyTask:(id)a1;
- (void)onTaskComplete:(id)a0;
- (void)__runTask;
- (void)__onTaskTimeOut;
- (void)__onFinishReason:(unsigned long long)a0 error:(id)a1;
- (void)runTaskImmediately;
- (void).cxx_destruct;
- (void)runTask;
- (void)cancelTask;

@end
