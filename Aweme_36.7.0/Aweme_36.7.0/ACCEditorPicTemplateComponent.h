@class NSString, ACCEditorPicTemplateViewModel;
@protocol ACCSequencePlayControlServiceProtocol, ACCEditViewContainer, ACCSequenceEditServiceProtocol, ACCEditServiceProtocol, ACCCTRServiceProtocol, ACCEditMusicServiceProtocol, ACCTrimCropEditServiceProtocol, ACCEditTransitionServiceProtocol;

@interface ACCEditorPicTemplateComponent : ACCFeatureComponent <ACCSequenceEditServicePlayerSubscriber, ACCSequencePlayControlServiceSubscriber, ACCTrimCropEditorListener, ACCEditMusicServiceSubscriberProtocol, ACCEditSessionLifeCircleEvent, ACCDraftResourceRecoverProtocol>

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) ACCEditorPicTemplateViewModel *viewModel;
@property (weak, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequencePlayControlService;
@property (weak, nonatomic) id<ACCTrimCropEditServiceProtocol> trimCropService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (nonatomic) BOOL projectTransfering;
@property (nonatomic) BOOL secondaryPageTransfering;
@property (nonatomic) BOOL isEnteringImageSecondaryPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)draftResourceIDsToDownloadForPublishViewModel:(id)a0;
+ (id)recoverBlocksForPublishModel:(id)a0;

- (void)componentWillDisappear;
- (void)sequenceEditService:(id)a0 didTransferToIndex:(long long)a1 editMode:(unsigned long long)a2 isAutoTransfer:(BOOL)a3;
- (void)sequenceEditService:(id)a0 changedWithAddedIndexSet:(id)a1 deletedIndexSet:(id)a2;
- (void)sequenceEditService:(id)a0 willTransferToIndex:(long long)a1 editMode:(unsigned long long)a2 isAutoTransfer:(BOOL)a3;
- (BOOL)sequencePlayControlService:(id)a0 shouldForbidPauseWhenDisappear:(id)a1;
- (BOOL)musicService:(id)a0 shouldForbidPauseWhenDisappear:(id)a1;
- (BOOL)sequencePlayControlService:(id)a0 shouldForbidPlayWhenAppear:(id)a1;
- (void)firstRenderWithEditService:(id)a0;
- (id)barItem;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBindingArray;
- (void)bindServices:(id)a0;
- (void)openPicTemplateVC;
- (void)didFinishTrimCropEditor;
- (BOOL)enable;
- (void).cxx_destruct;

@end
