@class ACCAnimatedButton;
@protocol ACCRecorderViewContainer, ACCCameraService;

@interface ACCPOIUGCRecordCloseComponent : ACCFeatureComponent

@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) ACCAnimatedButton *closeButton;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)loadChildViews;
- (void)clickBackBtn:(id)a0;
- (void).cxx_destruct;

@end
