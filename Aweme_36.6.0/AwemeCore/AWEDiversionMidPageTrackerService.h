@class NSMutableArray;

@interface AWEDiversionMidPageTrackerService : NSObject

@property (retain, nonatomic) NSMutableArray *sessions;

+ (void)startMidPageSession:(id)a0 withParam:(id)a1 tracker:(id /* block */)a2;
+ (void)exitMidPageSession:(id)a0;
+ (void)midPageSuspended:(id)a0;
+ (void)midPageResumed:(id)a0;

- (void)didJumpToVideoCutWithEndTime:(unsigned long long)a0;
- (id)fulfillDiversionParams:(id)a0;
- (void)startNewSession:(id)a0;
- (void)exitMidPage:(id)a0;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applicationDidBecomeActive:(id)a0;
- (void)dealloc;

@end
