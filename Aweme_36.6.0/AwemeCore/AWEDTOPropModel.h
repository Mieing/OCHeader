@class NSString, NSArray, ACCMultiSegmentPropExtra, NSDictionary, AWEDTOEditInsertPropParam, AWEDTORecordStickerModel;

@interface AWEDTOPropModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) ACCMultiSegmentPropExtra *multiSegmentPropClipsInfo;
@property (copy, nonatomic) NSString *fromPropId;
@property (copy, nonatomic) NSString *isDefaultProp;
@property (nonatomic) long long totalStickerSavePhotos;
@property (copy, nonatomic) NSArray *propBindMusicId;
@property (nonatomic) long long propCardPosition;
@property (copy, nonatomic) NSString *editPropId;
@property (copy, nonatomic) NSDictionary *editPropExtraInfo;
@property (copy, nonatomic) NSString *fromCustomizedId;
@property (copy, nonatomic) NSString *isDefaultContent;
@property (copy, nonatomic) NSString *fromTemplateId;
@property (copy, nonatomic) NSString *storyGuidePlusIconType;
@property (copy, nonatomic) NSArray *bringInStickerIds;
@property (copy, nonatomic) NSDictionary *asyncAiPropChallengeDict;
@property (copy, nonatomic) NSString *isAigcSyncPropMode;
@property (copy, nonatomic) NSString *aigcSyncPropPhotoPath;
@property (copy, nonatomic) NSString *propProvider;
@property (copy, nonatomic) NSString *propZipSize;
@property (retain, nonatomic) AWEDTOEditInsertPropParam *editInsertPropParam;
@property (retain, nonatomic) AWEDTORecordStickerModel *recordStickerModel;
@property (copy, nonatomic) NSString *propType;
@property (nonatomic) BOOL isUsingTimeConsumingProp;
@property (copy, nonatomic) NSString *editPropProvider;
@property (nonatomic) BOOL aimusicEffect;
@property (copy, nonatomic) NSDictionary *metricsDict;
@property (copy, nonatomic) NSDictionary *editMetricsDict;
@property (copy, nonatomic) NSString *followMaterialInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)editInsertPropParamJSONTransformer;
+ (id)recordStickerModelJSONTransformer;
+ (id)acc_JSONKeyPathsByPropertyKey;
+ (void)_aweLazyRegisterLoad_Draft;
+ (id)multiSegmentPropClipsInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
