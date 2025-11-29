@class NSString, ACCStickerPannelViewModel, AWEStudioEditStickerFeatureConfig, ACCStickerPannelAnimationVC, UIPanGestureRecognizer;
@protocol ACCInfoStickerServiceProtocol, ACCSequencePlayControlServiceProtocol, ACCEditViewContainer, ACCEditServiceProtocol, ACCStickerGestureComponentProtocol, ACCCTRServiceProtocol, ACCVideoEditFlowControlService, ACCStickerPannelLogger, ACCStickerPannelFilter, AWEVideoEditStickerVCProtocol, ACCAIImageToLiveEditServiceProtocol, ACCCameraService;

@interface ACCStickerPannelComponent : ACCFeatureComponent <AWEVideoEditStickersVCDelegate, ACCStickerPannelAnimationVCDelegate, ACCEditSessionLifeCircleEvent, ACCStickerPannelFilterDataSource, ACCFeatureComponentReloadableProtocol, UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWEStudioEditStickerFeatureConfig *featureConfig;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) ACCStickerPannelAnimationVC<AWEVideoEditStickerVCProtocol> *stickerViewController;
@property (weak, nonatomic) id<ACCStickerGestureComponentProtocol> stickerGestureComponent;
@property (weak, nonatomic) id<ACCInfoStickerServiceProtocol> infoStickerService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowControlService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> playControlService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCStickerPannelLogger> pannelLogger;
@property (retain, nonatomic) id<ACCStickerPannelFilter> pannelFilter;
@property (retain, nonatomic) ACCStickerPannelViewModel *viewModel;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } gestureResponseArea;
@property (nonatomic) BOOL isVerticalPan;
@property (nonatomic) BOOL hasPreloadPannel;
@property (nonatomic) BOOL isStickerPanelShowing;
@property (weak, nonatomic) id<ACCAIImageToLiveEditServiceProtocol> aiImageToLiveService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioGlobalConfigClass;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)firstRenderWithEditService:(id)a0;
- (id)barItem;
- (id)aAWEStudioGlobalConfig;
- (void)loadComponentView;
- (void)componentDidMount;
- (void)componentDidReceiveMemoryWarning:(unsigned long long)a0;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (id)rootVC;
- (void)p_bindViewModel;
- (void)updatePanelState:(BOOL)a0;
- (void)bindServices:(id)a0;
- (id)stickerService;
- (void)componentDidReload;
- (void)componentWillReload;
- (void)removeStickerPanel;
- (void)stickerPannelVCDidDismiss;
- (void)prepareDataConfigForModernSticker:(id)a0;
- (void)stickerViewController:(id)a0 didSelectSticker:(id)a1 fromTab:(id)a2 downloadTrigger:(id /* block */)a3;
- (void)stickerViewControllerDidSelectSearch:(id)a0;
- (void)stickerViewController:(id)a0 didSelectThirdPartySticker:(id)a1 fromTab:(id)a2 downloadTrigger:(id /* block */)a3;
- (BOOL)canOpenLiveSticker;
- (void)configPannelVC:(BOOL)a0;
- (long long)addSearchInfoSticker:(id)a0;
- (void)removeStickerPannelWithAlphaAnimated:(BOOL)a0 selectedSticker:(id)a1;
- (void)showStickerPannelWithAlphaAnimated:(BOOL)a0;
- (void)configStickerPanGesture:(id)a0;
- (void)preFetchStickerPannel;
- (void)panShowStickerPanel:(id)a0;
- (void)addStickerPanelGestureForView:(id)a0 gestureResponseArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)handleStartVerticalPan;
- (void)handleVerticalPanWithOffset:(double)a0 velocity:(double)a1 finished:(BOOL)a2;
- (void)handleCancelledVeritcalPan;
- (void)trackEnterPanelWithEntrance:(id)a0;
- (void)showStickerPannel;
- (BOOL)shouldUseModernStickerPannel;
- (void)prepareUIConfigForModernSticker:(id)a0;
- (void)removeStickerPannelWithAlphaAnimated:(BOOL)a0;
- (BOOL)showStickerPanelShouldBegin;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;

@end
