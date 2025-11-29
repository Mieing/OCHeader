@class NSString, IESGCPCGSameStyleLoadingView, IESGCPTimer, UIView, IESGCPCGLoadingView, IESGCPXPlayGameAPI;

@interface IESGCPCGLoadingPageComponent : IESGCPCGInstanceBaseComponent <IESGCPCGInstanceActions, IESGCPCGInstanceQueueActions, IESGCPCGLoadingViewRouter, IESGCPCGRotationActions>

@property (retain, nonatomic) IESGCPCGLoadingView *loadingView;
@property (retain, nonatomic) IESGCPCGSameStyleLoadingView *sameStyleLoadingView;
@property (retain, nonatomic) IESGCPTimer *loadingTimeoutTimer;
@property (nonatomic) long long loadingTimerCount;
@property (retain, nonatomic) UIView *doubleBallView;
@property (retain, nonatomic) IESGCPXPlayGameAPI *api;
@property (nonatomic) BOOL showMapNotReadyTip;
@property (retain, nonatomic) NSString *responseJson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)didSetGameCPDIContext;
- (void)_dismissLoadingView;
- (void)playInstance:(id)a0 stageDidChangeFrom:(long long)a1 toStage:(long long)a2 info:(id)a3;
- (void)playInstanceOnFirstFrameReceived:(id)a0 info:(id)a1;
- (void)playInstanceDidLostConnection:(id)a0;
- (void)playInstance:(id)a0 canJoinQueue:(id)a1 callback:(id /* block */)a2;
- (void)componentDidAttached;
- (void)containerDidChangeToOrientation:(long long)a0 direction:(unsigned long long)a1;
- (void)updateToFirstTimeLoadingSameStyleMapStyle;
- (id)getRequestedLoadingPageJsonData;
- (void)_requestLoadingPageConfig;
- (void)_dismissDoubleBallLoading;
- (void)_showPanelIfNeeded;
- (BOOL)_isContainerShowing;
- (void)_showDoubleBallLoading;
- (void)handleGameLostConnection;
- (void)_showLoadingBackgroundView;
- (void)_trackAbnormalStatisticsEvent;
- (void)_stopLoadingProgress;
- (BOOL)_shouldShowLoadingPage;
- (void)_showArchiveWordingIfNeed;
- (id)_loadingPageConfigWithGameId:(id)a0 playType:(long long)a1;
- (void)_updateSameStyleGiftView:(id)a0;
- (void)_showDraggableView;
- (void)_showBadNetAlert;
- (id)_loadingPageCacheKeyWithGameId:(id)a0 playType:(long long)a1;
- (void)_updateLoadingView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_showLoadingView;

@end
