@class NSString;
@protocol ACCSequenceEditServiceProtocol, ACCAEViewContainerProtocol, ACCAdvanceEditStickerServiceProtocol, ACCStickerGestureComponentProtocol, ACCAdvanceEditViewModelProtocol, ACCAEMenuRouteProtocol;

@interface ACCAECanvasGestureComponent : ACCAdvanceEditComponent <ACCAdvanceEditDataRepositorySubscriber>

@property (weak, nonatomic) id<ACCAEViewContainerProtocol> container;
@property (weak, nonatomic) id<ACCStickerGestureComponentProtocol> stickerGestureComponent;
@property (weak, nonatomic) id<ACCAdvanceEditStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCAEMenuRouteProtocol> menuRouteService;
@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> editViewModel;
@property (nonatomic) BOOL hasLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)selectedSegmentDidChangeWithNew:(id)a0 old:(id)a1;
- (void).cxx_destruct;
- (void)handleTapAction:(id)a0;
- (id)previewController;

@end
