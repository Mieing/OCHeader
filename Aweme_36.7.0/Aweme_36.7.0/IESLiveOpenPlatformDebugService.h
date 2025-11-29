@class IESLiveOpenPlatformDebugController, IESLiveGameOpenPlatformDebugPerfManager, NSString;
@protocol IESLiveOpenPlatformDebugLauncher;

@interface IESLiveOpenPlatformDebugService : NSObject <IESLiveGameOpenPlatformDebugService>

@property (retain, nonatomic) IESLiveOpenPlatformDebugController *controller;
@property (retain, nonatomic) id<IESLiveOpenPlatformDebugLauncher> gameOpenPlatformDebug;
@property (retain, nonatomic) IESLiveGameOpenPlatformDebugPerfManager *performanceManager;
@property (nonatomic) BOOL isDebugRoom;
@property (nonatomic) BOOL isMockDebugRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)exitLiveRoom;
- (BOOL)isInDebugRoom;
- (void)mockDebugRoom;
- (BOOL)isInMockDebugRoom;
- (id)debugFloatingBallViewWithInfo:(id)a0;
- (void)debugLogEventWithLevel:(id)a0 log:(id)a1;
- (void)exitCurrentDebugGame;
- (void)hideScanEntrence:(BOOL)a0;
- (void)debugWithSchema:(id)a0;
- (BOOL)isPerformanceTesting;
- (BOOL)isPerformancePanelShowing;
- (void)setPerformancePanelShowing:(BOOL)a0;
- (void)stopPerformanceTestWithAppId:(id)a0 taskId:(id)a1;
- (void)tryStopPerformanceTest;
- (void)updateXplayQualityStats:(id)a0;
- (id)getDebugInteractPluginItemWithAppId:(id)a0;
- (void)pr_clearForPerformance;
- (void)_debugInteractGameWithSchema:(id)a0;
- (void)_debugNativeAppWithSchema:(id)a0;
- (void)pr_launchPerformanceTestIfNeeded:(id)a0;
- (id)pr_trueLaunchSchemaWithSchema:(id)a0;
- (void)pr_launchServiceIfNeeded:(id)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
