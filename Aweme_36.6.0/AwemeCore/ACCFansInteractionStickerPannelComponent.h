@class NSString, ACCFansInteractionStickerPannelViewModel, UIView, AWEVideoEditFansInteractionStickersViewController;
@protocol ACCEditViewContainer, ACCVideoEditFlowControlService, ACCCTRServiceProtocol, ACCEditServiceProtocol;

@interface ACCFansInteractionStickerPannelComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent, ACCStickerPannelAnimationVCDelegate, AWEVideoEditFansInteractionStickersVCDelegate>

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowControlService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (retain, nonatomic) UIView *stickerBgView;
@property (retain, nonatomic) AWEVideoEditFansInteractionStickersViewController *stickerViewController;
@property (retain, nonatomic) ACCFansInteractionStickerPannelViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)firstRenderWithEditService:(id)a0;
- (id)barItem;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (id)rootVC;
- (void)p_bindViewModel;
- (void)bindServices:(id)a0;
- (id)stickerService;
- (id)commonTrackInfoDic;
- (void)stickerPannelVCDidDismiss;
- (void)configPannelVC:(BOOL)a0;
- (void)removeStickerPannelWithAlphaAnimated:(BOOL)a0 selectedSticker:(id)a1;
- (void)showStickerPannelWithAlphaAnimated:(BOOL)a0;
- (void)showStickerPannel;
- (void)removeStickerPannelWithAlphaAnimated:(BOOL)a0;
- (long long)p_totalStickers;
- (void)trackEnterPanel;
- (void)removeStickerPannel;
- (void)videoEditFansInteractionStickersVC:(id)a0 didSelectSticker:(id)a1 downloadTrigger:(id /* block */)a2;
- (void).cxx_destruct;

@end
