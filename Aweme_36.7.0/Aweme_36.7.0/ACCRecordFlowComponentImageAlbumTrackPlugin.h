@class NSString, ACCImageAlbumTrackModel, ACCRecordFlowComponent;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCCameraService, ACCRecordFlowService, ACCFeatureComponent;

@interface ACCRecordFlowComponentImageAlbumTrackPlugin : ACCFeatureComponent <ACCRecordFlowServiceSubscriber, ACCRecordSwitchModeServiceSubscriber, ACCFeatureComponentPlugin>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (nonatomic) BOOL hasStartVideoCapture;
@property (copy, nonatomic) NSString *shootMode;
@property (readonly, nonatomic) ACCImageAlbumTrackModel *trackModel;
@property (readonly, weak, nonatomic) ACCRecordFlowComponent *hostComponent;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordFlowService> flowService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)flowServiceWillBeginTakePicture;
- (void)flowServiceDidCompleteRecord;
- (void)bindServices:(id)a0;
- (void)trackToolPerformanceRecordNext;
- (void).cxx_destruct;

@end
