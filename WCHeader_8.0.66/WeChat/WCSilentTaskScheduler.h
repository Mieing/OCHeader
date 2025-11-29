@class NSRecursiveLock, NSMutableOrderedSet;

@interface WCSilentTaskScheduler : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *tasks;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) BOOL isAppForeground;

+ (id)shareInstance;

- (id)init;
- (BOOL)registerTask:(id)a0;
- (BOOL)unregisterTask:(id)a0;
- (id)nextTask;
- (void)registerNotifications;
- (void)onAppEnterForeground:(id)a0;
- (void)onAppEnterBackground:(id)a0;
- (void).cxx_destruct;

@end
