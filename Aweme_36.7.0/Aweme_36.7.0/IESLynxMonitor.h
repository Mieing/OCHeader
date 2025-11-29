@class IESLynxMonitorConfig, IESLynxBasePerfDictionary, NSDictionary, NSMutableDictionary, NSString, LynxView;

@interface IESLynxMonitor : NSObject <LynxViewLifecycle>

@property (retain, nonatomic) IESLynxMonitorConfig *config;
@property (weak, nonatomic) LynxView *lynxView;
@property (retain, nonatomic) IESLynxBasePerfDictionary *performanceDicX;
@property (retain, nonatomic) NSDictionary *perf;
@property (nonatomic) BOOL isFirstTime;
@property (nonatomic) double pageStartTime;
@property (nonatomic) double startLoadTime;
@property (nonatomic) double loadFinishTime;
@property (nonatomic) double firstScreenTime;
@property (retain, nonatomic) NSMutableDictionary *classSettingMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startMonitorWithSettingModel:(id)a0;
+ (void)lynxView:(id)a0 reportResourceInfo:(id)a1 eventType:(id)a2;
+ (void)bdhmx_startMonitorWithDefaultSettingModel:(id)a0;
+ (void)bdhmx_startMonitorWithRemoteSetting;
+ (void)attemptToStartFromRemoteSettingWithDefault:(id)a0;
+ (void)startWithSetting:(id)a0;
+ (void)startMonitorItem:(id)a0 setting:(id)a1;
+ (void)start:(id)a0;
+ (id)sharedMonitor;
+ (void)startMonitor;

- (void)lynxViewDidFirstScreen:(id)a0;
- (void)lynxView:(id)a0 onSetup:(id)a1;
- (void)lynxView:(id)a0 onUpdate:(id)a1 timing:(id)a2;
- (void)lynxView:(id)a0 onCallJSBFinished:(id)a1;
- (void)lynxView:(id)a0 onJSBInvoked:(id)a1;
- (void)lynxViewDidStartLoading:(id)a0;
- (void)lynxView:(id)a0 didLoadFinishedWithUrl:(id)a1;
- (void)lynxViewDidConstructJSRuntime:(id)a0;
- (void)lynxView:(id)a0 didRecieveError:(id)a1;
- (void)lynxView:(id)a0 didReceiveFirstLoadPerf:(id)a1;
- (void)lynxView:(id)a0 didReceiveUpdatePerf:(id)a1;
- (void)trackLynxService:(id)a0 status:(long long)a1 duration:(double)a2 extra:(id)a3;
- (void)lynxMonitor:(id)a0 usex:(BOOL)a1;
- (void)bdhmResetLynxPerfUploadState:(id)a0;
- (void)trySetExtraTimingToLynxView:(id)a0;
- (void)updatePageVersionFromLynxView:(id)a0;
- (void)checkAvailableUploadPerf:(id)a0;
- (BOOL)judgeExtraTimingInfoAllReady:(id)a0;
- (void)slReportErrorWithView:(id)a0 error:(id)a1;
- (void)trackLynxService:(id)a0 status:(long long)a1 duration:(double)a2 extra:(id)a3 config:(id)a4 lynxView:(id)a5;
- (BOOL)isCustomJSError:(long long)a0;
- (id)getActualErrorMessage:(id)a0;
- (BOOL)isLepusJSError:(long long)a0;
- (BOOL)isResourceError:(long long)a0;
- (id)getSLNativeErrorInfo:(id)a0;
- (void)lynxMonitor:(id)a0;
- (void)lynxMonitor:(id)a0 lynxView:(id)a1;
- (void)sendJSError:(id)a0;
- (void)trackStart:(id)a0;
- (void)lynxViewDidConstructRuntime:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
