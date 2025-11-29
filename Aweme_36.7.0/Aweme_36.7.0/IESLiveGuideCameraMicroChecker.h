@class IESLiveGuideModel;

@interface IESLiveGuideCameraMicroChecker : NSObject

@property (weak, nonatomic) id cameraAlert;
@property (weak, nonatomic) id audioAlert;
@property (weak, nonatomic) id bothAlert;
@property (weak, nonatomic) IESLiveGuideModel *guideModel;
@property (nonatomic) BOOL needToast;

- (BOOL)isCameraDenied;
- (void)checkCameraPermission;
- (BOOL)isCameraNotDetermined;
- (BOOL)isMicroPhoneNotDetermined;
- (BOOL)isMicroPhoneDenied;
- (BOOL)checkCameraAndMicro;
- (void)checkCameraAndMicroPermission;
- (void)checkMicroPermission;
- (BOOL)isMicroNotAuthorized;
- (void)showAudioAlert;
- (void)trackAlertShowWithPermissionType:(id)a0;
- (BOOL)isCameraNotAuthorized;
- (void)showCameraAndMicroAlert;
- (void)showCameraAlert;
- (id)getLiveTypeString;
- (void)trackAlertClick:(long long)a0 WithPermissionType:(id)a1;
- (void).cxx_destruct;

@end
