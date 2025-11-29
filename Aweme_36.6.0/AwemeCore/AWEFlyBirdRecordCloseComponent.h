@class UIButton, NSString, ACCRecordCloseViewModel;
@protocol ACCRecordFlowService, ACCRecorderViewContainer, ACCCameraService;

@interface AWEFlyBirdRecordCloseComponent : ACCFeatureComponent <ACCRecorderViewContainerItemsHideShowObserver>

@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) ACCRecordCloseViewModel *viewModel;
@property (retain, nonatomic) UIButton *closeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)p_bindViewModelObserver;
- (void)clickButtonClicked;
- (void).cxx_destruct;
- (void)removeAllSegments;
- (void)updateCloseButtonVisibility;

@end
