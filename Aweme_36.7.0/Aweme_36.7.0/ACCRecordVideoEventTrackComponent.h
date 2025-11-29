@class NSString;
@protocol ACCCameraService, ACCRecordFlowControlService, ACCRecordTrackService, ACCRecordPropService;

@interface ACCRecordVideoEventTrackComponent : ACCFeatureComponent <ACCRecordFlowControlServiceSubscriber>

@property (retain, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (retain, nonatomic) id<ACCRecordTrackService> trackService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flowControlServiceDidStartRecordFlow:(unsigned long long)a0 source:(id)a1;
- (void)bindServices:(id)a0;
- (void).cxx_destruct;

@end
