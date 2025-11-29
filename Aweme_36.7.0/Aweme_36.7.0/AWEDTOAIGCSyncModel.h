@class NSString, NSArray, NSDictionary, AWEDTOAIGCLoadStatusModel;

@interface AWEDTOAIGCSyncModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isSync;
@property (copy, nonatomic) NSString *propPath;
@property (copy, nonatomic) NSString *propIconPath;
@property (copy, nonatomic) NSString *propCoverPath;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSString *currentPropIdentifier;
@property (copy, nonatomic) NSString *isSyncFrom;
@property (copy, nonatomic) NSString *fromPropId;
@property (copy, nonatomic) NSString *createWay;
@property (copy, nonatomic) NSString *fromMusicId;
@property (copy, nonatomic) NSString *effect;
@property (copy, nonatomic) NSString *originalImagePath;
@property (nonatomic) BOOL isEditPageSelectOriginalPublish;
@property (copy, nonatomic) NSString *renderImagePath;
@property (copy, nonatomic) NSString *aigcOriginalimagePath;
@property (copy, nonatomic) NSString *trackAigcsyncEnterFrom;
@property (nonatomic) BOOL saveLocalVideo;
@property (copy, nonatomic) NSArray *slotStatus;
@property (copy, nonatomic) NSString *aiType;
@property (copy, nonatomic) NSString *aiSuiteType;
@property (copy, nonatomic) NSString *aiSuitePanelKey;
@property (copy, nonatomic) NSString *aiSuiteCategoryKey;
@property (copy, nonatomic) NSArray *aiSuiteMusicids;
@property (copy, nonatomic) NSArray *aiSuiteChallengeIDs;
@property (nonatomic) BOOL isAiSuite;
@property (copy, nonatomic) NSArray *aiSuiteCommonInfo;
@property (copy, nonatomic) NSArray *aiSuiteEffectnames;
@property (copy, nonatomic) NSString *aiSuiteRealEffectid;
@property (copy, nonatomic) NSString *aiSuiteRealEffect;
@property (nonatomic) long long aiCreationMaxCount;
@property (nonatomic) long long aiCreationPreloadCount;
@property (nonatomic) long long selectAigcEffectSource;
@property (copy, nonatomic) NSString *asyncqueueRenderimageLocalpath;
@property (copy, nonatomic) NSString *asyncqueueRenderimageDownloadpath;
@property (copy, nonatomic) NSString *asyncqueueMarkCurrentProjectuuid;
@property (nonatomic) long long asyncqueueStatus;
@property (copy, nonatomic) NSArray *multiStyleEffectList;
@property (nonatomic) long long currentIndex;
@property (copy, nonatomic) NSDictionary *selectIndexWithKeywords;
@property (copy, nonatomic) NSString *aiEffectFromPanel;
@property (copy, nonatomic) NSArray *generatedRawImagePaths;
@property (nonatomic) BOOL isAiTextToImage;
@property (copy, nonatomic) NSString *inputTextJson;
@property (nonatomic) long long isInLoraNoticeClick;
@property (copy, nonatomic) NSString *aigcPassThroughInfo;
@property (copy, nonatomic) NSString *textToImageStickerId;
@property (nonatomic) BOOL textToImageNewAnchor;
@property (nonatomic) long long lastSuccessIndex;
@property (retain, nonatomic) AWEDTOAIGCLoadStatusModel *lastSuccessSlotStatus;
@property (nonatomic) BOOL isSaveOriginCoverImage;
@property (nonatomic) BOOL hasAiEraser;
@property (copy, nonatomic) NSString *aiEraserOriginImagePath;
@property (copy, nonatomic) NSString *aiEraserUsedType;
@property (nonatomic) BOOL shouldDisableAiExpand;
@property (copy, nonatomic) NSString *aigcType;
@property (copy, nonatomic) NSString *aigcImageToLiveInfo;
@property (copy, nonatomic) NSString *aigcUgcFusionCreationTools;
@property (copy, nonatomic) NSString *aigcTemplateContext;
@property (copy, nonatomic) NSString *aiFollowShootModel;
@property (copy, nonatomic) NSArray *aigcRawMetaInfos;
@property (copy, nonatomic) NSString *aiEditContextModel;
@property (nonatomic) BOOL forceForbiddenAimateedit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)slotStatusJSONTransformer;
+ (id)lastSuccessSlotStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
