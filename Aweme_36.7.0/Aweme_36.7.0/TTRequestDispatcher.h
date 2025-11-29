@class NSString, NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TTRequestDispatcher : NSObject

@property BOOL enableRequestDispatcher;
@property (retain, nonatomic) NSMutableArray *pendingApiQueue;
@property (retain, nonatomic) NSMutableArray *pendingDownloadQueue;
@property (nonatomic) int apiConcurrentCount;
@property (nonatomic) int downloadConcurrentCount;
@property BOOL enableRequestDependency;
@property (retain, nonatomic) NSMutableArray *dependencyQueue;
@property (nonatomic) BOOL targetRequestStart;
@property (nonatomic) BOOL hasRunDependencyTask;
@property (nonatomic) unsigned long long delayRequestCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timer_queue;
@property (nonatomic) int maxApiConcurrentCount;
@property (nonatomic) int maxDownloadConcurrentCount;
@property (copy, nonatomic) NSString *targetUri;
@property (copy, nonatomic) NSArray *dependencyUri;
@property (nonatomic) int dependencyTimeoutToStart;
@property (nonatomic) int dependencyExecuteTime;

+ (id)shareInstance;

- (void)onHttpTaskFinish:(id)a0;
- (BOOL)onHttpTaskCancel:(id)a0;
- (BOOL)onHttpTaskResume:(id)a0;
- (BOOL)isRequestDispatcherWorking;
- (void)runPendingTask;
- (void)runDependencyTask;
- (BOOL)runDependencyStrategy:(id)a0;
- (BOOL)runDispatcherStrategy:(id)a0;
- (BOOL)runTaskCancel:(id)a0 httpTask:(id)a1;
- (void)runPendingTask:(id)a0;
- (void)startRequestDispatcher;
- (void)stopRequestDispatcher;
- (void)startRequestDependency;
- (void)stopRequestDependency;
- (unsigned long long)getDelayRequestCount;
- (void).cxx_destruct;
- (id)init;

@end
