@class NSString, AWEVideoPublishViewModel;
@protocol ACCRecordSwitchModeService, ACCCameraService, ACCMicrophoneService, ACCRecordSystemLivePhotoService, ACCRecordActionFlowBridgeService, ACCRecordFlowService, ACCComponentController, IESServiceProvider;

@interface AWERecordFlowLivePhotoResultHandler : NSObject <AWERecordFlowResultHandlerService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCComponentController> controller;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordActionFlowBridgeService> bridgeFlowService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCMicrophoneService> microphoneService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordSystemLivePhotoService> systemLivePhotoService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canHandleResult:(id)a0;

- (id)recordScene;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1 controller:(id)a2;
- (void)clearSystemLivePhotoData:(id /* block */)a0;
- (void)trackSystemLivePhoto:(BOOL)a0 errorType:(long long)a1;
- (void)storeSystemLivephotoFramesImages:(id)a0;
- (void)enterNextPageByQuickStoryPicture:(id)a0 completion:(id /* block */)a1;
- (void)executeOperationWith:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
