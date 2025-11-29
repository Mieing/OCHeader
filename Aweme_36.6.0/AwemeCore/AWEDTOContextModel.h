@class NSString, NSDictionary, NSArray;

@interface AWEDTOContextModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *createAppVersion;
@property (copy, nonatomic) NSString *creationId;
@property (nonatomic) long long original;
@property (nonatomic) long long activityVideoType;
@property (nonatomic) double maxDuration;
@property (nonatomic) long long videoLengthMode;
@property (nonatomic) BOOL isStoryVideoRecordMode;
@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) long long photo2videoType;
@property (nonatomic) long long feedType;
@property (nonatomic) long long videoTypeIos;
@property (nonatomic) long long draftType;
@property (nonatomic) BOOL isClassicMvMode;
@property (nonatomic) long long editPageBottomButtonStyle;
@property (copy, nonatomic) NSString *activityTaskToken;
@property (nonatomic) BOOL appliedPropAutoSticker;
@property (nonatomic) BOOL imageFromShare;
@property (nonatomic) BOOL isFromComposer;
@property (nonatomic) BOOL needShowChooseMusicScene;
@property (nonatomic) long long enableOptimizedRatioMask;
@property (nonatomic) BOOL saveAsInfini;
@property (nonatomic) BOOL isMultiEditor;
@property (nonatomic) BOOL livePhotoSupportHotRefresh;
@property (nonatomic) double activityVolume;
@property (nonatomic) BOOL isMultiImagesAutoPlay;
@property (nonatomic) BOOL isLivePhotoRemoveStaticFrame;
@property (nonatomic) long long reeditType;
@property (copy, nonatomic) NSString *featureResult;
@property (nonatomic) long long recordOrientationType;
@property (nonatomic) long long trackerDeviceOrientationType;
@property (copy, nonatomic) NSDictionary *photoCountDownMobParams;
@property (copy, nonatomic) NSDictionary *pictureIds;
@property (nonatomic) BOOL supportRealLivePhoto;
@property (copy, nonatomic) NSString *skipThirdEntranceHealthPunishStringFlag;
@property (copy, nonatomic) NSString *uploadTimestamp;
@property (copy, nonatomic) NSArray *hiddenProjectUuids;
@property (nonatomic) long long playerBackgroundColor;
@property (nonatomic) long long playerBackgroundTransparent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
