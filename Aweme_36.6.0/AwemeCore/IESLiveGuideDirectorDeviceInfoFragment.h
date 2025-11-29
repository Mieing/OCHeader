@class IESLiveCountTimer, IESLiveGuideDirectorDeviceInfoView, IESLiveGuideCameraMicroChecker, IESLiveCameraDirectorApi;

@interface IESLiveGuideDirectorDeviceInfoFragment : IESLiveGuideComponent

@property (retain, nonatomic) IESLiveGuideDirectorDeviceInfoView *panelView;
@property (retain, nonatomic) IESLiveCameraDirectorApi *infoApi;
@property (retain, nonatomic) IESLiveCountTimer *countTimer;
@property (retain, nonatomic) IESLiveGuideCameraMicroChecker *permissionCheckerNew;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)cleanCountTimer;
- (void)fetchDeviceInfo;
- (void)showDirectorDeviceInfoViewPanel:(id)a0;
- (void)trackPopView:(BOOL)a0 isClickCancel:(BOOL)a1;
- (void)prepareConnectMainDevice;
- (void)gotoDirectorViewController:(id)a0;
- (void).cxx_destruct;
- (void)scheduleState;

@end
