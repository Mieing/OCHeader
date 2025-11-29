@class MMFinderLiveTask, NSString;

@interface WCFinderLiveEventsReporter : NSObject

@property (readonly, weak, nonatomic) MMFinderLiveTask *liveTask;
@property (readonly, nonatomic) NSString *finderNickname;
@property (readonly, nonatomic) unsigned int kvLogID;

- (void)applicationWillEnterForeground:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationWillResignActive:(id)a0;
- (id)initWithLiveTask:(id)a0;
- (void)dealloc;
- (void)reportEventWithModule:(long long)a0 eventName:(id)a1 description:(id)a2;
- (void).cxx_destruct;

@end
