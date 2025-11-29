@class NSString, IESGCPTimer, IESGCPXPlayGameAPI, IESGCPXPlayGameModel;

@interface IESGCPCGSidebarComponent : IESGCPCGInstanceBaseComponent <IESGCPCGInstanceActions, IESGCPCGSidebarRouter, IESGCPCGContainerActions>

@property (retain, nonatomic) IESGCPTimer *reportTimer;
@property (retain, nonatomic) IESGCPXPlayGameAPI *api;
@property (retain, nonatomic) IESGCPXPlayGameModel *gameModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)didSetGameCPDIContext;
- (void)playInstance:(id)a0 playStatusDidUpdated:(long long)a1 info:(id)a2;
- (void)componentDidAttached;
- (void)containerDidBindInstance:(id)a0;
- (BOOL)sidebarFilterParamsCheck;
- (void)_doFinishedReport;
- (void)_notifyAudienceDetailIfNeeded;
- (void)_scheduleLaunchReport;
- (BOOL)_hasArriveLaunchThreshold;
- (void)_doFirstFrameReport;
- (long long)_launchReportThreshold;
- (long long)_intervalMsFromLoadingShow;
- (BOOL)_doesGameIdContainAnyChannel;
- (BOOL)_shouldShowAnimationWithCurrentEnterFrom;
- (BOOL)_shouldShowAnimationWithCurrentPromoteScene;
- (void).cxx_destruct;
- (void)_reportEvent:(long long)a0;

@end
