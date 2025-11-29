@class NSString;
@protocol ACCRecordSwitchModeService, ACCCameraService, ACCRecordSystemLivePhotoService, CameraSessionManagerProtocol;

@interface AWEPropApplyContext : NSObject <AWEPropApplyContextProtocol>

@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<CameraSessionManagerProtocol> cameraSessionManager;
@property (retain, nonatomic) id<ACCRecordSystemLivePhotoService> systemLivePhotoService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
