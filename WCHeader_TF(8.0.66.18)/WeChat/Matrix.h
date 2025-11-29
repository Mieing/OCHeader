@class MatrixBuilder;

@interface Matrix : NSObject

@property (retain, nonatomic) MatrixBuilder *builder;

+ (id)sharedInstance;

- (id)init;
- (void)addMatrixBuilder:(id)a0;
- (void)startPlugins;
- (void)stopPlugins;
- (id)getPlugins;
- (id)getPluginWithTag:(id)a0;
- (void)reportIssueComplete:(id)a0 success:(BOOL)a1;
- (unsigned long long)lastRebootType;
- (unsigned long long)appLaunchTime;
- (unsigned long long)lastAppLaunchTime;
- (void)setUserScene:(id)a0;
- (id)userSceneOfLastRun;
- (BOOL)isAfterLastLaunchUserRebootDevice;
- (BOOL)checkXPCReboot;
- (void)notifyAppBackgroundFetch;
- (void)notifyAppWillSuspend;
- (void).cxx_destruct;

@end
