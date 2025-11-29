@class AWEStudioEcommerceUsefulContainerView, AWEStudioEcommerceDashedView, NSString, AWEECRecorderUsefulConfig, AWEStudioEcommerceUsefulGuideView;
@protocol ACCRecorderViewContainer, ACCCameraService;

@interface AWEStudioEcommerceUsefulCommentComponent : ACCFeatureComponent <ACCRecorderViewContainerItemsHideShowObserver>

@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) AWEStudioEcommerceUsefulContainerView *usefulContainerView;
@property (retain, nonatomic) AWEStudioEcommerceUsefulGuideView *guideView;
@property (retain, nonatomic) AWEECRecorderUsefulConfig *featureConfig;
@property (retain, nonatomic) AWEStudioEcommerceDashedView *dashView;
@property (copy, nonatomic) NSString *panelSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentDidDisappear;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)configSubView;
- (void)tapGuide;
- (void).cxx_destruct;

@end
