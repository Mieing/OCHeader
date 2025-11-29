@class AWEARTextInputViewController, ACCRecordARServiceImpl, NSString;
@protocol ACCRecordFlowService, ACCRecorderViewContainer, ACCCameraService;

@interface ACCRecordARComponent : ACCFeatureComponent <ACCRecordFlowServiceSubscriber>

@property (retain, nonatomic) AWEARTextInputViewController *arTextInputViewController;
@property (retain, nonatomic) ACCRecordARServiceImpl *arService;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)componentDidMount;
- (id)serviceBinding;
- (id)rootVC;
- (void)p_bindViewModel;
- (void)bindServices:(id)a0;
- (void)dismissARTextInputViewController;
- (void)showARTextInputViewControllerWithEffectMessageModel:(id)a0;
- (void).cxx_destruct;
- (long long)extracted;

@end
