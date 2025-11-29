@interface AWETuningPerfSessions : NSObject

+ (void)_aweLazyRegisterStaticLoad;
+ (void)perfSessionInit;
+ (void)registerSessions;
+ (void)setupGlobalSessions;
+ (Class)aAWETokamakMonitorManagerCommonAdapterClass;
+ (void)setUpEccsSessions:(id)a0 targetVC:(id)a1;
+ (void)_handleSceneDidChange;
+ (void)_applicationDidBecomeActive;

- (id)aAWETokamakMonitorManagerCommonAdapter;

@end
