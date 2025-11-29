@class NSString, ACCStickerPannelViewModel, ACCSearchStickerViewController, DVETrackPanelContext, UIView, ACCStickerPannelAnimationVC;
@protocol ACCStudioPerfUtilServiceProtocol, ACCAdvanceEditStickerServiceProtocol, ACCStickerPannelLogger, DVEComponentViewManagerProtocol, ACCStickerPannelFilter, ACCAEComponentActionProtocol, DVEEditingContextProtocol, DVERootViewControllerProtocol, AWEVideoEditStickerVCProtocol, DVETrackEventProtocol, ACCAEMenuRouteProtocol, DVEEditingRuntimeProtocol;

@interface ACCAEStickerPanelComponent : ACCAdvanceEditComponent <AWEVideoEditStickersVCDelegate, ACCStickerPannelAnimationVCDelegate, ACCStickerPannelFilterDataSource, ACCSearchStickerVCDelegate>

@property (weak, nonatomic) id<DVERootViewControllerProtocol> viewContainer;
@property (weak, nonatomic) id<ACCAEComponentActionProtocol> actionHandler;
@property (weak, nonatomic) id<DVEComponentViewManagerProtocol> bottomBarManager;
@property (weak, nonatomic) id<ACCAdvanceEditStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<DVEEditingContextProtocol> editingContext;
@property (weak, nonatomic) id<ACCAEMenuRouteProtocol> menuRoute;
@property (weak, nonatomic) id<ACCStudioPerfUtilServiceProtocol> perfTrackService;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (weak, nonatomic) id<DVETrackEventProtocol> trackEvent;
@property (weak, nonatomic) DVETrackPanelContext *panelContext;
@property (retain, nonatomic) NSString *lastEffectId;
@property (retain, nonatomic) UIView *stickerBgView;
@property (retain, nonatomic) ACCStickerPannelAnimationVC<AWEVideoEditStickerVCProtocol> *stickerViewController;
@property (retain, nonatomic) ACCStickerPannelViewModel *viewModel;
@property (retain, nonatomic) id<ACCStickerPannelLogger> panelLogger;
@property (retain, nonatomic) id<ACCStickerPannelFilter> panelFilter;
@property (weak, nonatomic) ACCSearchStickerViewController *searchVC;
@property (weak, nonatomic) UIView *searchStickerBgView;
@property (nonatomic) BOOL showingSearchVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)componentDidReceiveMemoryWarning:(unsigned long long)a0;
- (id)serviceBinding;
- (id)rootVC;
- (id)commonTrack;
- (void)showStickerPanel;
- (void)registerMenuActions;
- (id)selectedStickerTrack;
- (void)handleFirstMenuAddAction:(id)a0;
- (void)handleSecondMenuAddAction:(id)a0;
- (void)handleThirdMenuReplaceAction:(id)a0;
- (void)trackEvent:(id)a0 extraParam:(id)a1;
- (BOOL)canHandleSearchSticker:(id)a0;
- (void)startShowSearchVC;
- (BOOL)didHandleAddSticker:(id)a0 fromTab:(id)a1;
- (BOOL)didHandleAddThirdPartySticker:(id)a0 fromTab:(id)a1;
- (void)removeStickerPanel;
- (void)dismissStickerVCWithSelectedSticker:(id)a0;
- (void)configPanelVC:(BOOL)a0;
- (void)searchStickerCollectionViewControllerWillShow;
- (void)searchTrackEvent:(id)a0 extraParams:(id)a1;
- (void)searchStickerCollectionViewControllerDismiss;
- (void)stickerPannelVCDidDismiss;
- (void)perfTrackWithType:(long long)a0;
- (void)showStickerPanelWithAlphaAnimated:(BOOL)a0;
- (BOOL)shouldUseModernStickerPanel;
- (void)prepareDataConfigForModernSticker:(id)a0;
- (void)removeStickerPanelWithAlphaAnimated:(BOOL)a0 selectedSticker:(id)a1;
- (void)stickerViewController:(id)a0 didSelectSticker:(id)a1 fromTab:(id)a2 downloadTrigger:(id /* block */)a3;
- (void)stickerViewController:(id)a0 didSelectThirdPartySticker:(id)a1 fromTab:(id)a2 downloadTrigger:(id /* block */)a3;
- (void)stickerViewControllerStickerSelected;
- (void)stickerViewControllerStickerDownLoadEnd;
- (BOOL)canOpenLiveSticker;
- (void)searchStickerCollectionViewController:(id)a0 didSelectSticker:(id)a1 indexPath:(id)a2 downloadProgressBlock:(id /* block */)a3 downloadedBlock:(id /* block */)a4;
- (void)searchStickerCollectionViewControllerWillExit;
- (void).cxx_destruct;
- (id)panelName;

@end
