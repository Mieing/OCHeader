@class NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEAdAsyncTaskCoordinator : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *taskSemaphore;

+ (id)queue;

- (void)asyncTaskRunning;
- (void)asyncTaskEnd;
- (void).cxx_destruct;
- (id)init;

@end
