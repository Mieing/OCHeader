@interface BDApplicationStateExecute : NSObject

@property (nonatomic) struct BDApplicationStateNotify { void /* function */ **x0; } *taskExecute;
@property (nonatomic) unsigned long long backgroundTempTask;
@property (nonatomic) long long applicationState;

- (void)applicationEnterBackground;
- (void)endBackgroundUpdateTask;
- (long long)getApplicationState;
- (void)applicationDidBecomeActive;
- (id)init;
- (void)dealloc;

@end
