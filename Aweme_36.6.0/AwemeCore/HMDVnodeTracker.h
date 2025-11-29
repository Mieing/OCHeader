@class NSObject;
@protocol OS_dispatch_queue;

@interface HMDVnodeTracker : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) BOOL isRunning;

+ (unsigned long long)getMaxVnodes;
+ (BOOL)isRunning;
+ (id)sharedTracker;

- (BOOL)startEnabled;
- (void)checkMonitor;
- (void)startHook;
- (void)isVnodeCountApproachingUpperLimit;
- (void)checkInode:(int)a0;
- (void).cxx_destruct;
- (id)init;

@end
