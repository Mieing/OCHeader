@class IESLiveLandscapePictureSettingStore, HTSLiveToolbarItem, NSString, IESLivePopupItem;

@interface IESLiveLandscapePictureSettingFragment : IESLiveRoomComponent <IESLiveLandscapePictureSettingService, IESLiveFIFAPlayerScaleAction, HTSLiveAudienceActions>

@property (retain, nonatomic) IESLiveLandscapePictureSettingStore *store;
@property (retain, nonatomic) HTSLiveToolbarItem *pictureSettingToolbarItem;
@property (retain, nonatomic) IESLivePopupItem *popupItem;
@property (nonatomic) long long lastPictureFitType;
@property (nonatomic) double pictureSettingLiveTime;
@property (nonatomic) long long lastOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)liveWillEndWithReason:(unsigned long long)a0;
- (void)onFIFAPannelSatusChange:(long long)a0;
- (void)handleOrientationTransitionBegin:(long long)a0;
- (BOOL)shouldShowViceViewInLandscapeGameRoom;
- (BOOL)enablePictureSetting;
- (long long)currentPictureFitType;
- (id)accquirePictureTypeName:(long long)a0;
- (void)uploadTrackInfo:(id)a0;
- (void)trackWatchDuration;
- (void)handlePictureFitTypeChangedWithType:(long long)a0;
- (id)setupPictureSettingToolbarItem;
- (void)showPictureSettingPanelPopView;
- (void).cxx_destruct;

@end
