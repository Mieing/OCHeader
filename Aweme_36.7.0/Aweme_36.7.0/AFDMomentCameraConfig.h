@class NSString;

@interface AFDMomentCameraConfig : NSObject

@property (nonatomic) long long draftExpirationTimeInMinutes;
@property (nonatomic) long long draftMaxCount;
@property (nonatomic) long long draftMaxRetryTimes;
@property (nonatomic) double defaultRearScaleFactor;
@property (nonatomic) double defaultFrontScaleFactor;
@property (nonatomic) BOOL useFrontCameraByDefault;
@property (nonatomic) long long captureWidth;
@property (nonatomic) BOOL beautyDefaultOpen;
@property (nonatomic) BOOL rememberCameraBeauty;
@property (nonatomic) long long defaultCameraPosition;
@property (nonatomic) BOOL momentFilterEnable;
@property (nonatomic) BOOL closeFriendsV2Enable;
@property (nonatomic) BOOL momentCameraVideoEnable;
@property (nonatomic) BOOL momentAlbumIcon;
@property (nonatomic) long long momentAlbumTimeThresholdOfDay;
@property (nonatomic) BOOL momentPublishIcon;
@property (nonatomic) BOOL momentCameraPublishPrivacyEnabled;
@property (nonatomic) BOOL momentCameraPublishPrivacyPartSeeEnabled;
@property (nonatomic) long long momentCameraIoCOption;
@property (copy, nonatomic) NSString *capturePreset;
@property (nonatomic) long long outputSizeWidth;
@property (nonatomic) long long outputSizeHeight;
@property (nonatomic) long long outputSizeWidthLarge;
@property (nonatomic) long long outputSizeHeightLarge;
@property (copy, nonatomic) NSString *bitrateSetting;
@property (nonatomic) BOOL momentBrushModeEnable;
@property (nonatomic) BOOL momentPublishBrushEditEnable;
@property (nonatomic) long long videoTextGuideCount;
@property (nonatomic) long long maxRecordTime;
@property (nonatomic) long long cameraPhotoQuality;
@property (nonatomic) BOOL momentTextModeEnable;
@property (nonatomic) BOOL momentPublishTextEditEnable;
@property (nonatomic) BOOL imExchangeCameraMicBugfixEnable;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
