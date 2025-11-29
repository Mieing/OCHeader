@class NSString, ACCSystemLivePhotoComponent;
@protocol ACCCameraService, ACCRecordSystemLivePhotoService, ACCFeatureComponent, ACCRecordScanModelFlowService;

@interface ACCSystemLivePhotoComponentScanPlugin : NSObject <ACCRecordScanModelFlowSubscriber, ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (retain, nonatomic) id<ACCRecordSystemLivePhotoService> systemLivePhotoService;
@property (retain, nonatomic) id<ACCRecordScanModelFlowService> scanService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (readonly, weak, nonatomic) ACCSystemLivePhotoComponent *hostComponnent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

@end
