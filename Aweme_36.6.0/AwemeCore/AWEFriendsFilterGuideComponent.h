@class AWEFriendsFilterGuideView, NSString;
@protocol ACCRecordUIHiddenStrategyService, ACCRecorderViewContainer, ACCCameraService;

@interface AWEFriendsFilterGuideComponent : ACCFeatureComponent <ACCCameraLifeCircleEvent>

@property (retain, nonatomic) AWEFriendsFilterGuideView *guideView;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCameraDidStartRender:(id)a0;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (BOOL)shouldShowGuideView;
- (void).cxx_destruct;

@end
