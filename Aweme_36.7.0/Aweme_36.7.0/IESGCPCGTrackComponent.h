@class NSString, IESGCPCGXPlayAuthProcessDelegate;

@interface IESGCPCGTrackComponent : IESGCPCGInstanceBaseComponent <IESGCPCGInstanceActions, IESGCPCGLaunchProcessActions, IESGCPCGContainerActions>

@property (nonatomic) BOOL hasReportMonitorLaunchFail;
@property (nonatomic) BOOL hasReportLaunchV2;
@property (retain, nonatomic) IESGCPCGXPlayAuthProcessDelegate *processDelegate;
@property (nonatomic) BOOL hasReportFirstFrameReceived;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)didSetGameCPDIContext;
- (void)playInstance:(id)a0 didTerminatedWithMethod:(long long)a1 fromStage:(long long)a2 code:(long long)a3 reason:(id)a4 info:(id)a5;
- (void)playInstanceOnFirstFrameReceived:(id)a0 info:(id)a1;
- (void)playInstance:(id)a0 preloadResult:(BOOL)a1 info:(id)a2;
- (void)willStartInitProcess;
- (void)onInitFinishedWithResult:(BOOL)a0 code:(long long)a1 msg:(id)a2 info:(id)a3;
- (void)componentDidAttached;
- (void)containerWillMoveToViewStackInPresent:(BOOL)a0;
- (id)_buildCommonParamsWithGameModel;
- (void)_reportLastKillAppExitIfNeed;
- (void)_monitorExit;
- (void)_monitorLaunchFailIfNeeded;
- (void)_monitorLaunchV2IfNeededWithPreloadResult:(BOOL)a0;
- (void)_trackExit;
- (void)_monitorWillStartInit;
- (void)_handleTrackParamsWhenInitFinished;
- (void)_monitorFirstFrameWithInfo:(id)a0 isColdLaunch:(BOOL)a1;
- (void)_trackFirstFrameArrivedWithInfo:(id)a0;
- (void)_applyBootConfigCommonParams;
- (void)_removeZeroValue:(id)a0 withKeys:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_applicationWillTerminate:(id)a0;
- (void)dealloc;

@end
