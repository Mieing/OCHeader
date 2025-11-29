@class NSString, NSArray, AWEDTOFragmentChallengeData, AWEDTOSavePhotoPropData, AWEDTOClipRangeEntry, AWEDTOFragmentPropInfo, AWEDTOBackgroundVideoData, AWEDTORecordSecurityData, AWEDTOFrameInsetInfo, AWEDTOClipReportModel;

@interface AWEDTOFragmentInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long cameraPosition;
@property (copy, nonatomic) NSArray *beautyMetaData;
@property (copy, nonatomic) NSString *filterId;
@property (copy, nonatomic) NSString *filterName;
@property (copy, nonatomic) NSString *stickerId;
@property (nonatomic) double speed;
@property (nonatomic) BOOL antiShake;
@property (copy, nonatomic) NSArray *arText;
@property (copy, nonatomic) NSArray *propText;
@property (nonatomic) long long delayRecordMode;
@property (copy, nonatomic) NSString *pic2videoSource;
@property (nonatomic) long long recordDuration;
@property (retain, nonatomic) AWEDTOBackgroundVideoData *propVideo;
@property (nonatomic) BOOL isUseUploadSticker;
@property (nonatomic) long long uploadTypeStickerSelectMediaSize;
@property (retain, nonatomic) AWEDTOSavePhotoPropData *propSavePhoto;
@property (nonatomic) BOOL isCommerce;
@property (copy, nonatomic) NSString *stickerPoiId;
@property (retain, nonatomic) AWEDTORecordSecurityData *security;
@property (copy, nonatomic) NSArray *propBindMusicIds;
@property (retain, nonatomic) AWEDTOFragmentChallengeData *challenge;
@property (copy, nonatomic) NSString *cameraLengthInfo;
@property (nonatomic) long long duetGreenScreenAppearanceDuration;
@property (retain, nonatomic) AWEDTOFragmentPropInfo *propInfo;
@property (copy, nonatomic) NSString *recordMode;
@property (nonatomic) BOOL isReshoot;
@property (nonatomic) long long frameCount;
@property (retain, nonatomic) AWEDTOClipRangeEntry *clipRange;
@property (nonatomic) long long sourceType;
@property (nonatomic) long long assetOrientation;
@property (copy, nonatomic) NSString *videoAssetPath;
@property (copy, nonatomic) NSString *imageAssetPath;
@property (retain, nonatomic) AWEDTOFrameInsetInfo *frameInsetsInfo;
@property (retain, nonatomic) AWEDTOClipRangeEntry *clipTimeRange;
@property (nonatomic) BOOL isUseTextSticker;
@property (copy, nonatomic) NSString *stickerName;
@property (nonatomic) BOOL isSupportExtractFrame;
@property (retain, nonatomic) AWEDTOClipReportModel *clipReport;
@property (copy, nonatomic) NSString *templatePropId;
@property (copy, nonatomic) NSString *customizedPropId;
@property (copy, nonatomic) NSString *customizedPropIconPath;
@property (copy, nonatomic) NSString *customizedPropPath;
@property (copy, nonatomic) NSString *diyType;
@property (copy, nonatomic) NSArray *propMentionStickerInfo;
@property (copy, nonatomic) NSArray *stickerTransparentExtra;
@property (copy, nonatomic) NSArray *stickerSensorText;
@property (copy, nonatomic) NSString *customizedBusinessExtra;
@property (copy, nonatomic) NSString *recordUuid;
@property (copy, nonatomic) NSString *recordVideoFilePath;
@property (nonatomic) double stickerDefaultCoverFrameTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)beautyMetaDataJSONTransformer;
+ (id)propVideoJSONTransformer;
+ (id)propSavePhotoJSONTransformer;
+ (id)propInfoJSONTransformer;
+ (id)frameInsetsInfoJSONTransformer;
+ (id)clipTimeRangeJSONTransformer;
+ (id)clipReportJSONTransformer;
+ (id)propMentionStickerInfoJSONTransformer;
+ (id)clipRangeJSONTransformer;
+ (id)securityJSONTransformer;
+ (id)challengeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
