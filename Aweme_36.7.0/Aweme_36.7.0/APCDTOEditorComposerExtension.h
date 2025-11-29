@class NSArray, NSDictionary, CKGenericTemplateModel, NSString, NSNumber;

@interface APCDTOEditorComposerExtension : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *disableImageEffectInLivePhotoSceneMode;
@property (copy, nonatomic) NSNumber *extractFrameAfterFirstRender;
@property (copy, nonatomic) NSNumber *slidesAbilityEnabled;
@property (copy, nonatomic) NSArray *crop_ratioOptionDatas;
@property (copy, nonatomic) NSNumber *crop_disableFlipAbility;
@property (copy, nonatomic) NSNumber *crop_hidePlayButton;
@property (retain, nonatomic) NSNumber *multiPicturePlayDuration;
@property (retain, nonatomic) NSNumber *multiPicturePlayDurationUseMusicBgm;
@property (retain, nonatomic) NSNumber *aiClipLimitMaxDuration;
@property (retain, nonatomic) NSDictionary *musicRecommendExtraParams;
@property (nonatomic) BOOL snapshotEditPageWhenClickStory25Publish;
@property (retain, nonatomic) NSDictionary *musicInfoStory25Publish;
@property (nonatomic) BOOL musicShareStory25;
@property (nonatomic) BOOL sparkShareStory25;
@property (nonatomic) BOOL fireMenShareStory25;
@property (retain, nonatomic) NSNumber *musicShareStory25MusicCropMaxDuration;
@property (retain, nonatomic) NSNumber *musicShareStory25MusicCropMinDuration;
@property (nonatomic) BOOL templatePreloadApplyPath;
@property (retain, nonatomic) NSArray *configTemplateList;
@property (retain, nonatomic) CKGenericTemplateModel *configApplyTemplate;
@property (nonatomic) BOOL ignoreLoadMoreTemplateList;
@property (nonatomic) BOOL templateListAutoExpand;
@property (nonatomic) BOOL forceUseTemplateSlidesUIStype;
@property (nonatomic) BOOL forceCancelEditMoreTemplate;
@property (nonatomic) BOOL templateStickerDisableUseInteraction;
@property (nonatomic) BOOL disableShowAddDelete;
@property (nonatomic) BOOL disableTemplateCollection;
@property (nonatomic) BOOL disableHideTemplatePanelWhenClick;
@property (nonatomic) BOOL forcePublishTemplateAsImage;
@property (nonatomic) BOOL forcePublishTemplateAsVideo;
@property (nonatomic) BOOL canStoryAddAnchor;
@property (copy, nonatomic) NSString *fromMVSource;
@property (copy, nonatomic) NSString *mvSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configTemplateListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
