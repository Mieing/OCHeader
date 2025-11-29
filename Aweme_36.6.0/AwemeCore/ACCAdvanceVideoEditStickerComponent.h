@class ACCAdvanceEditStickerServiceImpl, NSString, AWEVideoPublishViewModel, NSMutableArray, ACCStickerContainerView;
@protocol ACCAEVCTransitionProtocol, ACCSequenceEditServiceProtocol, ACCAEViewContainerProtocol, ACCStickerGestureComponentProtocol, ACCAdvanceEditViewModelProtocol, DVEEditingContextProtocol, ACCEditServiceProtocol;

@interface ACCAdvanceVideoEditStickerComponent : ACCAdvanceEditComponent <ACCSequenceMediaContentViewProvider, ACCStickerContainerDelegate, ACCSequenceEditServicePlayerSubscriber, AEKPreviewEditorSubscriber>

@property (weak, nonatomic) id<ACCAEViewContainerProtocol> viewContainer;
@property (weak, nonatomic) id<ACCStickerGestureComponentProtocol> stickerGestureComponent;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> viewModel;
@property (weak, nonatomic) id<ACCAEVCTransitionProtocol> transitionService;
@property (weak, nonatomic) id<DVEEditingContextProtocol> editingContext;
@property (readonly, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) ACCStickerContainerView *containerView;
@property (retain, nonatomic) NSMutableArray *stickerContainers;
@property (retain, nonatomic) ACCAdvanceEditStickerServiceImpl *stickerService;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL stickerContainerDefaultShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (id)pieceInstanceViewAtIndex:(unsigned long long)a0;
- (void)updatePieceInstanceViewAtIndex:(unsigned long long)a0;
- (void)sequenceEditService:(id)a0 fromMode:(unsigned long long)a1 toMode:(unsigned long long)a2 forEditPage:(BOOL)a3;
- (void)playerCurrentPlayTimeChanged:(double)a0;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void)componentAnimationDidCompletion;
- (void)updateStickerConteintHidden:(BOOL)a0;
- (void)updateMaxStickerCount;
- (BOOL)isValidEditMode:(unsigned long long)a0;
- (id)loadStickerContainer;
- (id)containerViewForIndex:(long long)a0;
- (id)createContainerView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 editPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 repository:(id)a2 editService:(id)a3 needMask:(BOOL)a4;
- (void)stickerContainer:(id)a0 gestureStarted:(id)a1 onView:(id)a2;
- (void)stickerContainer:(id)a0 gestureEnded:(id)a1 onView:(id)a2;
- (BOOL)stickerContainerTapBlank:(id)a0 gesture:(id)a1;
- (double)mediaContainerScaleFactor;
- (void)stickerContainer:(id)a0 gestureBegan:(id)a1 onView:(id)a2;
- (void)resortStickerContainers;
- (void).cxx_destruct;

@end
