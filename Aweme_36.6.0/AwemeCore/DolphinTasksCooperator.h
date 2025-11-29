@class NSObject;
@protocol OS_dispatch_semaphore;

@interface DolphinTasksCooperator : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *rerankSemaphore;

- (void)startTask;
- (void).cxx_destruct;
- (id)init;
- (void)finishTask;

@end
