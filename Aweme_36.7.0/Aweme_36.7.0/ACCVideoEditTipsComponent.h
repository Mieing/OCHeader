@class ACCVideoEditTipsServiceImpl, ACCVideoEditTipsViewModel, NSString, UIView;
@protocol ACCEditSpecialEffectServiceProtocol, ACCEditVoiceChangerServiceProtocol, ACCEditCutMusicServiceProtocol, ACCSelectTemplateServiceProtocol, ACCSideslipPropService, ACCQuickFlashStickerServiceProtocol, ACCEditMusicServiceProtocol, ACCVideoEditFlowControlService, ACCEditorOneClickFilmService, ACCStickerPanelServiceProtocol, ACCFansInteractionStickerPanelServiceProtocol, ACCEditViewContainer, ACCGrootStickerServiceProtocol, ACCVideoEditBottomControlService, ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@interface ACCVideoEditTipsComponent : ACCFeatureComponent <ACCPanelViewDelegate, ACCVideoEditTipsServiceSubscriber>

@property (nonatomic) BOOL allowShowFunctionBubble;
@property (nonatomic) BOOL allowShowGrootBubble;
@property (nonatomic) BOOL skipShowImageAlbumSlideGuide;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) ACCVideoEditTipsServiceImpl *tipsSerivce;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (weak, nonatomic) id<ACCEditCutMusicServiceProtocol> cutMusicService;
@property (weak, nonatomic) id<ACCEditVoiceChangerServiceProtocol> voiceChangerService;
@property (weak, nonatomic) id<ACCStickerPanelServiceProtocol> stickerPanelService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowControlService;
@property (weak, nonatomic) id<ACCGrootStickerServiceProtocol> grootService;
@property (weak, nonatomic) id<ACCEditSpecialEffectServiceProtocol> specialEffectService;
@property (weak, nonatomic) id<ACCVideoEditBottomControlService> bottomControlService;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCQuickFlashStickerServiceProtocol> quickFlashStickerService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmService> oneClickFilmService;
@property (weak, nonatomic) id<ACCSelectTemplateServiceProtocol> selectTemplateService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceService;
@property (weak, nonatomic) id<ACCFansInteractionStickerPanelServiceProtocol> fansInteractionService;
@property (retain, nonatomic) UIView *stickerBubbleWindow;
@property (retain, nonatomic) ACCVideoEditTipsViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)panelViewController:(id)a0 didShowPanelView:(id)a1;
- (void)panelViewController:(id)a0 willShowPanelView:(id)a1;
- (id)publishModel;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (id)serviceBinding;
- (id)rootVC;
- (void)bindServices:(id)a0;
- (id)stickerService;
- (void)handleShareToStoryPreparationDone;
- (void)tipService:(id)a0 didShowImageBubbleWithFunctionType:(long long)a1;
- (void)tipService:(id)a0 didShowFunctionBubbleWithFunctionType:(long long)a1;
- (void)loadShowedFunctionsValue;
- (void)p_bindViewModels;
- (BOOL)checkAndShowSideslipPropGuide;
- (void)checkAndShowClipAtShareToStorySceneBubble;
- (void)checkAndShowFunctionBubble;
- (void)checkAndShowUpdateCanvasAnimatedInfoGuide;
- (id)showBubbleFunctionArray;
- (BOOL)shouldShowFuncionBubble:(long long)a0;
- (BOOL)showFunctionBubble:(long long)a0;
- (id)bubbleAnchorViewWithDirection:(unsigned long long)a0 actionItemId:(void *)a1;
- (void)showBubbleWithItemId:(void *)a0 showBlock:(id /* block */)a1;
- (void)p_showRecommendedMusicBubbleIfNeeded;
- (void)p_showRecommendedMusicBubble;
- (unsigned long long)bubbleManagerDirectionWithNewBubbleDirection:(long long)a0;
- (BOOL)isTopRightBarBubble:(long long)a0;
- (void)trackerEventByBubbleType:(long long)a0;
- (long long)fansInteractionTipsShowCountThrottle;
- (void).cxx_destruct;
- (void)dealloc;

@end
