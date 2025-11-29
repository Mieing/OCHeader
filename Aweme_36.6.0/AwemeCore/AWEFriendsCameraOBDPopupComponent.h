@class AWERecordPopupShowModel;
@protocol ACCRecordSwitchModeService, ACCCameraService, ACCRecordAuthService, AWERecordPopupLifeRecordService;

@interface AWEFriendsCameraOBDPopupComponent : ACCFeatureComponent

@property (retain, nonatomic) id<ACCRecordAuthService> authService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<AWERecordPopupLifeRecordService> popupRecord;
@property (retain, nonatomic) AWERecordPopupShowModel *model;

- (void)componentDidMount;
- (void)showOBDPopupIfNeed;
- (BOOL)canHideOBDPopup;
- (void)obdPopupShow;
- (void)obdPopupDismiss;
- (void).cxx_destruct;

@end
