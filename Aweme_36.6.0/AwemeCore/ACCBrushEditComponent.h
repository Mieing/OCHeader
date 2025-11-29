@class NSString, AWEStudioEditBrushFeatureConfig, ACCBrushEditViewModel;
@protocol ACCEditMusicServiceProtocol, ACCSequenceEditServiceProtocol, ACCStickerServiceProtocol, ACCEditViewContainer, ACCSequencePlayControlServiceProtocol, ACCCTRServiceProtocol, ACCEditServiceProtocol;

@interface ACCBrushEditComponent : ACCFeatureComponent <ACCSequenceEditServicePlayerSubscriber, ACCSequencePlayControlServiceSubscriber, ACCEditMusicServiceSubscriberProtocol>

@property (retain, nonatomic) AWEStudioEditBrushFeatureConfig *featureConfig;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) ACCBrushEditViewModel *viewModel;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequencePlayControl;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (nonatomic) BOOL hadFirstAppear;
@property (nonatomic) BOOL didPreloadBreshResource;
@property (nonatomic) BOOL isTransferingProject;
@property (nonatomic) BOOL isDelayingBrushEditVC;
@property (nonatomic) BOOL isBrushVCTransfering;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)sequenceEditService:(id)a0 didTransferToIndex:(long long)a1 editMode:(unsigned long long)a2 isAutoTransfer:(BOOL)a3;
- (void)sequenceEditService:(id)a0 willTransferToIndex:(long long)a1 editMode:(unsigned long long)a2 isAutoTransfer:(BOOL)a3;
- (BOOL)sequencePlayControlService:(id)a0 shouldForbidPauseWhenDisappear:(id)a1;
- (BOOL)musicService:(id)a0 shouldForbidPauseWhenDisappear:(id)a1;
- (id)nle;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (id)rootVC;
- (void)addBarItemToToolBar;
- (BOOL)shouldLoadBrushComponent;
- (void)preloadBrushResourceIfNeed;
- (void)showBrushEditViewInView:(id)a0;
- (void)resetBrushSegmentUpdateDirect;
- (id)brushBarItem;
- (BOOL)shouldShowBrushEntrance;
- (void)brushClicked;
- (BOOL)shouldSetNLECanvasSize;
- (id)holderImageForTransition;
- (void).cxx_destruct;

@end
