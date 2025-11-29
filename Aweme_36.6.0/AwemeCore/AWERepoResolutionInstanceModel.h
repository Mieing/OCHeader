@class ACCEditorDiff, LMImageQualityTrackSceneEditInfo, ACCCanvasRuleChangelog, NSValue, NSString, NSNumber, LMImageQualityTrackScenePublishInfo;

@interface AWERepoResolutionInstanceModel : NSObject <ACCRepoModelDraftProtocol, NSCopying>

@property (nonatomic) struct CGSize { double width; double height; } editResolution;
@property (nonatomic) struct CGSize { double width; double height; } publishResolution;
@property (nonatomic) struct CGSize { double width; double height; } sourceResolution;
@property (nonatomic) struct CGSize { double width; double height; } originResolution;
@property (nonatomic) BOOL matchMergeResolutionDynamicDegrade;
@property (retain, nonatomic) LMImageQualityTrackSceneEditInfo *imageQuality;
@property (retain, nonatomic) LMImageQualityTrackScenePublishInfo *publishImageQuality;
@property (retain, nonatomic) ACCCanvasRuleChangelog *publishCanvasChangelog;
@property (retain, nonatomic) ACCCanvasRuleChangelog *editCanvasChangelog;
@property (retain, nonatomic) ACCEditorDiff *getOriginSizeLogicDiff;
@property (copy, nonatomic) NSNumber *tmpPublishType;
@property (nonatomic) BOOL enablePreviewSuperRes;
@property (nonatomic) BOOL enableFeedCacheSuperRes;
@property (copy, nonatomic) NSValue *feedCacheSuperResolution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)draft_DTOModelClass;

- (void)draft_updateWithDTOModel:(id)a0;
- (id)draft_DTOModel;
- (id)getPublishQualityInfo;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
