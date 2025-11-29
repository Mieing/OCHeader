@class ACCCameraSubscription, ACCTrimCropEditViewModel, NSString, UIView;
@protocol ACCTrimPlayControlService, ACCTrimCropSequencePieceServiceProtocol, ACCTrimCropBottomBarServiceProtocol, ACCTrimCropPieceProtocol;

@interface ACCTrimPlayerComponent : ACCTrimCropBaseComponent <ACCTrimCropBottomBarListener>

@property (weak, nonatomic) id<ACCTrimCropSequencePieceServiceProtocol> sequencePieceService;
@property (weak, nonatomic) id<ACCTrimCropPieceProtocol> piece;
@property (weak, nonatomic) ACCTrimCropEditViewModel *viewModel;
@property (weak, nonatomic) id<ACCTrimPlayControlService> playControlService;
@property (weak, nonatomic) id<ACCTrimCropBottomBarServiceProtocol> trimCropBottomBarService;
@property (nonatomic) struct CGSize { double width; double height; } previewContainerViewSize;
@property (retain, nonatomic) UIView *playControlView;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)componentDidLoad;
- (void)didSwitchToBar:(id)a0;
- (void)playControlAction:(id)a0;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;
- (void)willTransitionIn;
- (void)resetPlayer;

@end
