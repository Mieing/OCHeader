@class NSString, NSArray, IESMergeCategoryEffectsResponse, IESPlatformPanelModel, NSMutableDictionary, IESMergePanelInfoResponse, IESCategoryEffectsModel, IESCategoryVideoEffectsModel;

@interface IESEffectPlatformNewResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *defaultFrontFilterID;
@property (copy, nonatomic) NSString *defaultRearFilterID;
@property (copy, nonatomic) IESCategoryEffectsModel *categoryEffects;
@property (copy, nonatomic) NSArray *categories;
@property (retain, nonatomic) IESPlatformPanelModel *panel;
@property (retain, nonatomic) NSMutableDictionary *effectsMap;
@property (nonatomic) BOOL needReprocessEffects;
@property (copy, nonatomic) NSString *recId;
@property (readonly, copy, nonatomic) NSArray *categorySampleEffects;
@property (readonly, copy, nonatomic) IESCategoryVideoEffectsModel *videoCategoryEffects;
@property (readonly, copy, nonatomic) NSArray *urlPrefix;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, nonatomic) long long statusCode;
@property (readonly, copy, nonatomic) IESMergeCategoryEffectsResponse *categoryMergeResponse;
@property (readonly, copy, nonatomic) IESMergePanelInfoResponse *panelMergeResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void)preProcessEffects;
- (void).cxx_destruct;
- (void)setPanelName:(id)a0;

@end
