@class NSMutableDictionary;

@interface AWEBizTabBarLauncher : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventQueues;
@property (nonatomic) BOOL isFeedReady;
@property (nonatomic) BOOL isLaunchCompleted;

+ (Class)aAWEHPColdLaunchAdapterClass;
+ (id)sharedLauncher;

- (id)aAWEHPColdLaunchAdapter;
- (void)markFeedReady;
- (void)markLaunchCompletion;
- (void)registerHandler:(id /* block */)a0 withIdentifier:(id)a1 forEvent:(id)a2;
- (id)getQueueWithEventName:(id)a0;
- (void)dispatchTabBarReadyIfNeeded;
- (void)dispatchFirstFrameReadyIfNeeded;
- (void)dispatchImmediatelyUIResumeIfNeeded;
- (void)dispatchMessageReachUIResumeIfNeeded;
- (BOOL)isTabBarReady;
- (void)registerHandler:(id /* block */)a0 forEvent:(id)a1;
- (void)markTabBarReady;
- (void).cxx_destruct;
- (id)init;

@end
