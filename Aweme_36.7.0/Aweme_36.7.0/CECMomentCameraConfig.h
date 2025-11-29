@class NSString, CECMomentCameraSettings;

@interface CECMomentCameraConfig : NSObject <NSMutableCopying>

@property (retain, nonatomic) CECMomentCameraSettings *settings;
@property (nonatomic) unsigned long long captureRatio;
@property (nonatomic) long long draftExpirationTimeInMinutes;
@property (nonatomic) long long draftMaxCount;
@property (nonatomic) long long draftMaxRetryTimes;
@property (nonatomic) double defaultRearScaleFactor;
@property (nonatomic) BOOL useFrontCameraByDefault;
@property (nonatomic) double defaultFrontScaleFactor;
@property (nonatomic) long long captureWidth;
@property (nonatomic) BOOL beautyDefaultOpen;
@property (nonatomic) BOOL rememberCameraBeauty;
@property (nonatomic) long long defaultCameraPosition;
@property (nonatomic) BOOL momentFilterEnable;
@property (nonatomic) BOOL momentFilterShowFilterHintText;
@property (nonatomic) BOOL closeFriendsV2Enable;
@property (nonatomic) BOOL momentCameraVideoEnable;
@property (nonatomic) long long momentAlbumTimeThresholdOfDay;
@property (nonatomic) BOOL momentCameraPublishPrivacyEnabled;
@property (nonatomic) BOOL momentCameraPublishPrivacyPartSeeEnabled;
@property (nonatomic) BOOL momentBrushModeEnable;
@property (nonatomic) BOOL momentPublishBrushEditEnable;
@property (nonatomic) long long videoTextGuideCount;
@property (nonatomic) long long maxRecordTime;
@property (nonatomic) BOOL momentTextModeEnable;
@property (nonatomic) BOOL momentPublishTextEditEnable;
@property (nonatomic) BOOL waterFallEnable;
@property (nonatomic) long long momentCameraIoCOption;
@property (nonatomic) BOOL isShootToMomentCamera;
@property (nonatomic) BOOL hasFeedEntrance;
@property (nonatomic) BOOL isShowEffectAndAbulm;
@property (nonatomic) BOOL isSupportTextMode;
@property (copy, nonatomic) NSString *momentLogoString;
@property (nonatomic) BOOL enableSideslipProp;
@property (nonatomic) BOOL enableSwitchCameraMode;
@property (nonatomic) BOOL rememberMomentCameraMode;
@property (nonatomic) BOOL useMultiCameraModeByDefault;
@property (nonatomic) BOOL enableDetectFaceToast;
@property (nonatomic) BOOL isLandingToFriendTabAfterPublish;
@property (nonatomic) BOOL isLandingToMomentFeedAfterPublish;
@property (nonatomic) BOOL isStayMomentCameraAfterPublish;
@property (nonatomic) BOOL isLandingToMessageTabAfterPublishMomentText;
@property (nonatomic) BOOL enableCameraScale;
@property (nonatomic) BOOL isHideOtherTab;
@property (nonatomic) long long countdownDuration;
@property (nonatomic) BOOL useDetailFeed;
@property (nonatomic) BOOL enableNewVersionMomentCamera;
@property (nonatomic) BOOL enableFriendMomentNewVersion;
@property (nonatomic) BOOL enableFriendMomentForNotes;
@property (nonatomic) BOOL enableCatureRatioForNewMoment;
@property (nonatomic) long long momentCaptureRatioForRecord;
@property (nonatomic) BOOL rememberCaptureRatio;
@property (nonatomic) BOOL uploadRatioAccordingToImage;
@property (nonatomic) unsigned long long newMomentLandingStrategy;
@property (nonatomic) BOOL enableSKIIEmbededMainRecorder;
@property (nonatomic) BOOL isMomentCameraSupportUploadLivePhoto;
@property (nonatomic) BOOL isMomentCameraContainerFontLibrary;
@property (nonatomic) BOOL isPreviewMoveWhenTextStickerEdit;
@property (nonatomic) unsigned long long landingMode;
@property (nonatomic) BOOL enableEditUserSettings;
@property (nonatomic) double minVideoDuration;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
