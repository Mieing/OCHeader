@class UIView;
@protocol ACCEditStickerServiceImplProtocol, ACCEditViewContainer, ACCVideoEditFlowControlService, ACCEditServiceProtocol;

@interface ACCLivePhotoFlowComponent : ACCFeatureComponent

@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (retain, nonatomic) UIView *switchGuideBubble;
@property (nonatomic) long long flowStep;
@property (nonatomic) BOOL isLowLevelDeviceReady;
@property (nonatomic) BOOL isSwitching;
@property (nonatomic) BOOL isLowLevelDeviceWaitingForSwitch;
@property (nonatomic) BOOL firstBuild;
@property (weak, nonatomic) id<ACCEditStickerServiceImplProtocol> stickerServiceImpl;

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (unsigned long long)componentLoadState;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void).cxx_destruct;

@end
