@class IESLiveGameOpenPlatformDebugPerfMonitorViewModel, NSString, IESLiveGameOpenPlatformDebugPerfViewController, IESLiveGCDTimer, IESLiveGameOpenPlatformDebugPerfAPI, IESLiveGameOpenPlatformDebugPerfMonitor, NSMutableArray;

@interface IESLiveGameOpenPlatformDebugPerfManager : NSObject

@property (nonatomic) BOOL isShowingPanel;
@property (nonatomic) BOOL isMonitoring;
@property (nonatomic) BOOL isTesting;
@property (retain, nonatomic) IESLiveGameOpenPlatformDebugPerfViewController *perfFloatViewController;
@property (retain, nonatomic) IESLiveGameOpenPlatformDebugPerfMonitor *perfMonitor;
@property (retain, nonatomic) IESLiveGameOpenPlatformDebugPerfAPI *api;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) NSMutableArray *pendingUploadModels;
@property (retain, nonatomic) IESLiveGameOpenPlatformDebugPerfMonitorViewModel *viewModel;
@property (copy, nonatomic) NSString *reportId;

- (void)tryStopPerformanceTest;
- (void)_setupPerformanceTestEnv;
- (void)stopPerformanceTest;
- (void)_clearPerformanceTestEnv;
- (void)_loopAction;
- (void)_uploadPerformanceDataArray:(id)a0 completion:(id /* block */)a1;
- (void)showPerformancePanel;
- (void)hidePerformancePanel;
- (void)startPerformanceMonitor;
- (void)stopPerformanceMonitor;
- (void)startPerformanceTestWithAppVersion:(id)a0 reportId:(id)a1;
- (void)updateXplayQualityData:(id)a0;
- (void).cxx_destruct;

@end
