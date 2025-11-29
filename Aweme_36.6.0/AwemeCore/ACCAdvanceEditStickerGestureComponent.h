@class NSString, AWEEditorStickerGestureViewController, UIPanGestureRecognizer;
@protocol ACCAdvanceEditViewModelProtocol, ACCSequenceEditServiceProtocol, ACCAdvanceEditStickerServiceProtocol;

@interface ACCAdvanceEditStickerGestureComponent : ACCAdvanceEditComponent <ACCSequenceMediaContentViewProvider, ACCSequenceEditServicePlayerSubscriber, AWEEditorStickerGestureViewControllerDelegate, ACCStickerGestureComponentProtocol>

@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCAdvanceEditStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> editViewModel;
@property (nonatomic) BOOL editing;
@property (weak, nonatomic) UIPanGestureRecognizer *panGes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEEditorStickerGestureViewController *stickerGestureController;

- (id)pieceOnlyGlobalViewForIndex:(unsigned long long)a0;
- (void)sequenceEditService:(id)a0 fromMode:(unsigned long long)a1 toMode:(unsigned long long)a2 forEditPage:(BOOL)a3;
- (void)componentDidUnmount;
- (id)serviceBinding;
- (BOOL)disableGesture;
- (void)bindServices:(id)a0;
- (void)startPanOperation;
- (void)finishPanOperation;
- (void)startStickerOperation:(id)a0 targetView:(id)a1;
- (void)beganStickerOperation:(id)a0 targetView:(id)a1;
- (void)finishStickerOperation:(id)a0 targetView:(id)a1;
- (BOOL)stickerTransformTriggered;
- (void)clearStickerTransformTriggered;
- (BOOL)enableTapGesture;
- (void)stickerTransformHappened;
- (void)refreshStickerViews;
- (void)editorSticker:(id)a0 startGesture:(id)a1;
- (void)editorSticker:(id)a0 endGesture:(id)a1;
- (void).cxx_destruct;

@end
