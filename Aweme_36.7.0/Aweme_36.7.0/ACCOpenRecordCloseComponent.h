@class ACCAnimatedButton, NSString, ACCRecordCloseViewModel;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCCameraService, ACCRecordFlowService, ACCRecordUIHiddenStrategyService, ACCRecordCloseHandlerProtocol;

@interface ACCOpenRecordCloseComponent : ACCFeatureComponent <ACCRecorderViewContainerItemsHideShowObserver>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) ACCRecordCloseViewModel *viewModel;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (retain, nonatomic) ACCAnimatedButton *closeButton;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) id<ACCRecordCloseHandlerProtocol> themeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)p_bindViewModelObserver;
- (void)clickBackBtn:(id)a0;
- (BOOL)shouldRemoveAllSegments;
- (void)resetDurationWhenExitCreationTool;
- (void)trackExitCameraEvent;
- (void).cxx_destruct;
- (void)removeAllSegments;
- (void)updateCloseButtonVisibility;

@end
