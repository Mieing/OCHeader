@class NSString;
@protocol AWEAwemePlayInteractionPlayDelegate, AWEPlayInteractionGameCPHalfPanelPanelControllerProtocol, AWEFeedTableViewCellViewControllerProtocol, AWEAwemePlayInteractionPanelControllerProtocol;

@interface AWEGCPVideoResizeWidget : IESGCPBaseWidget <IESGCPAudienceDetailActions, IESGCPAudienceDetailScrollActions, IESGCPAudienceDetailNavigationActions>

@property (weak, nonatomic) id<AWEPlayInteractionGameCPHalfPanelPanelControllerProtocol> halfPanelController;
@property (weak, nonatomic) id<AWEAwemePlayInteractionPanelControllerProtocol> panelController;
@property (weak, nonatomic) id<AWEAwemePlayInteractionPlayDelegate> interactionController;
@property (weak, nonatomic) id<AWEFeedTableViewCellViewControllerProtocol> feedCellController;
@property (nonatomic) BOOL videoShrinkByGameDetail;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL videoShrinkFullCompleted;
@property (nonatomic) BOOL isPanelShowed;
@property (nonatomic) BOOL needUseHalfPanelController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isImageAlbum;
- (void)widgetDidCreate;
- (void)widgetWillDestroy;
- (void)audienceDetailVCFullHalfScreenStatusDidChange:(BOOL)a0;
- (void)gameDetailVC_viewWillAppear:(BOOL)a0 gameDetailVC:(id)a1;
- (void)gameDetailVC_viewWillDisAppear:(BOOL)a0 gameDetailVC:(id)a1;
- (void)didOpenGameDetailView;
- (void)willCloseGameDetailView:(BOOL)a0;
- (void)widgetBindService;
- (void)gameDetailProgress:(double)a0;
- (void)gameDetailNavigationVC_viewWillDisappear:(BOOL)a0;
- (void)_pauseByCellController:(BOOL)a0;
- (void)_pauseByInteractionController:(BOOL)a0;
- (void)changeVideoWhenShowGameDetailPanel:(BOOL)a0;
- (void)changeVideoWhenGameDetailPanelHide;
- (void)changeVideoWhenGameDetailPanelShow;
- (void)gameDetailPanelMoveProgress:(double)a0;
- (void).cxx_destruct;
- (void)pause:(BOOL)a0;
- (id)initWithScene:(long long)a0;

@end
