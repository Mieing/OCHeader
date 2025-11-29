@class NSString;
@protocol AWEStudioRawTypePropViewModelDelegate, ACCRecordSwitchModeService, ACCRecordFlowService, ACCCameraService, ACCRecordPropService;

@interface AWEStudioRawTypePropViewModel : ACCRecorderViewModel <AWEStudioRawTypePropServiceProtocol, ACCRecordFlowServiceSubscriber, ACCRecordFlowHandler>

@property (weak, nonatomic) id<ACCRecordFlowService> flowService;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<AWEStudioRawTypePropViewModelDelegate> delegate;
@property (nonatomic) BOOL isTakingPicture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flowServiceDidTakePicture:(id)a0 error:(id)a1;
- (void)startRecordFlowWithSource:(id)a0;
- (BOOL)canStartWithSource:(id)a0;
- (BOOL)canStopWithSource:(id)a0;
- (BOOL)isOnRawTypeTakePictureMode;
- (void)cancelRawTypePicture;
- (id)configCaptureOption;
- (void)p_takeRawTypePicture;
- (void).cxx_destruct;

@end
