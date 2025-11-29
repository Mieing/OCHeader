@class AWEMVChannelPerformanceMonitor, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEMVChannelRealTimeBannerIntercepter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *pendingTasks;
@property (nonatomic) BOOL isAllTaskExecuted;
@property (nonatomic) BOOL isExecutingTasks;
@property (weak, nonatomic) AWEMVChannelPerformanceMonitor *perfMonitor;

+ (id)sharedInstance;

- (void)didFetchedBanner;
- (void)addPendingHandleResponseTask:(id /* block */)a0;
- (void)executePendingTasks;
- (void).cxx_destruct;
- (id)init;

@end
