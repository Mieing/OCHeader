@class NSString, AWEEditorStickerGestureViewController, UIPanGestureRecognizer;
@protocol ACCEditVideoFilterServiceProtocol, ACCEditViewContainer, ACCSequenceEditServiceProtocol, ACCStickerServiceProtocol, ACCEditPicTemplateServiceProtocol, ACCEditSpecialEffectServiceProtocol, ACCSequencePlayControlServiceProtocol, ACCEditServiceProtocol, ACCEditorOneClickFilmingExitServiceProtocol, ACCEditPreviewProtocol, ACCTextStickerServiceProtocol;

@interface ACCStickerGestureComponent : ACCFeatureComponent <AWEEditorStickerGestureViewControllerDelegate, ACCSequenceMediaContentViewProvider, ACCSequenceEditServicePlayerSubscriber, ACCStickerGestureComponentProtocol>

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditVideoFilterServiceProtocol> filterService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCEditPreviewProtocol> previewService;
@property (weak, nonatomic) id<ACCEditPicTemplateServiceProtocol> picTemplateService;
@property (weak, nonatomic) id<ACCEditSpecialEffectServiceProtocol> specialEffectService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequenceControl;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmingExitServiceProtocol> oneClickFilmExitService;
@property (weak, nonatomic) id<ACCTextStickerServiceProtocol> textStickerService;
@property (nonatomic) BOOL editing;
@property (nonatomic) BOOL disableGesture;
@property (nonatomic) BOOL didAddGesture;
@property (weak, nonatomic) UIPanGestureRecognizer *panGes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEEditorStickerGestureViewController *stickerGestureController;

- (id)pieceOnlyGlobalViewForIndex:(unsigned long long)a0;
- (void)sequenceEditService:(id)a0 didTransferToIndex:(long long)a1 editMode:(unsigned long long)a2 isAutoTransfer:(BOOL)a3;
- (void)sequenceEditService:(id)a0 changedWithAddedIndexSet:(id)a1 deletedIndexSet:(id)a2;
- (void)sequenceEditService:(id)a0 willTransferToIndex:(long long)a1 editMode:(unsigned long long)a2 isAutoTransfer:(BOOL)a3;
- (void)sequenceEditService:(id)a0 fromMode:(unsigned long long)a1 toMode:(unsigned long long)a2 forEditPage:(BOOL)a3;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (BOOL)isSingleProject;
- (void)startPanOperation;
- (void)finishPanOperation;
- (void)startStickerOperation:(id)a0 targetView:(id)a1;
- (void)beganStickerOperation:(id)a0 targetView:(id)a1;
- (void)finishStickerOperation:(id)a0 targetView:(id)a1;
- (BOOL)stickerTransformTriggered;
- (void)clearStickerTransformTriggered;
- (void)stickerTransformHappened;
- (BOOL)editScrollViewGestureShouldResponse;
- (void)refreshStickerViews;
- (void)editorSticker:(id)a0 startGesture:(id)a1;
- (void)editorSticker:(id)a0 endGesture:(id)a1;
- (BOOL)shouldClickThroughTransparent:(id)a0 gesture:(id)a1;
- (void)recoverStickerWrapperView;
- (BOOL)stickerCanBeSelected:(id)a0;
- (BOOL)isValidEditMode:(unsigned long long)a0;
- (void)configViewContainerAlpha:(double)a0;
- (void)pausePlayerIfNeededWhileStickerIsDragging:(BOOL)a0 targetView:(id)a1;
- (void).cxx_destruct;

@end
