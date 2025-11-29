@class NSString, NSDictionary, NSArray;

@interface AWEDTOEditorGenericTemplateModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *templateId;
@property (nonatomic) long long templateType;
@property (copy, nonatomic) NSString *templateJson;
@property (copy, nonatomic) NSDictionary *assetIdentifierMap;
@property (copy, nonatomic) NSString *projectUuid;
@property (copy, nonatomic) NSString *selectedTemplateIndex;
@property (nonatomic) BOOL isNeedMoveAiClip;
@property (copy, nonatomic) NSArray *originalAssetFiles;
@property (copy, nonatomic) NSArray *processedAssetFiles;
@property (copy, nonatomic) NSString *bringInTemplateId;
@property (nonatomic) BOOL shouldDisableGenericTemplate;
@property (copy, nonatomic) NSString *mvSource;
@property (nonatomic) BOOL shouldDisableEditSlideEffectsPanel;
@property (copy, nonatomic) NSArray *fromSoftMvIds;
@property (copy, nonatomic) NSString *fromMvSource;
@property (copy, nonatomic) NSString *fromSoftMvSource;
@property (copy, nonatomic) NSString *mvUseMethod;
@property (copy, nonatomic) NSString *templateAigcResult;
@property (copy, nonatomic) NSString *hasFaceFeature;
@property (nonatomic) long long fromMvScene;
@property (nonatomic) double templateRatio;
@property (nonatomic) BOOL isTemplateStickerEdited;
@property (copy, nonatomic) NSString *applyingAigcTemplateJson;
@property (copy, nonatomic) NSString *transitionPath;
@property (copy, nonatomic) NSString *applyingTemplateJson;
@property (copy, nonatomic) NSString *aigcImagetoimageMaterialId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
