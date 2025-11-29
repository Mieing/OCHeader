@class AWEKnowledgeSceneCreateConfig, AWEKnowledgeSceneActionConfig, AWEKnowledgeSceneUpdateConfig, AWEKnowledgeStateResultConfig, NSString, AWEKnowledgeStateActionConfig;

@interface AWEKnowledgeStateConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEKnowledgeSceneCreateConfig *createConfig;
@property (retain, nonatomic) AWEKnowledgeSceneActionConfig *pushConfig;
@property (retain, nonatomic) AWEKnowledgeSceneActionConfig *popConfig;
@property (retain, nonatomic) AWEKnowledgeSceneUpdateConfig *updateConfig;
@property (retain, nonatomic) AWEKnowledgeStateActionConfig *actionConfig;
@property (retain, nonatomic) AWEKnowledgeStateResultConfig *resultConfig;
@property (copy, nonatomic) NSString *versionCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionConfigJSONTransformer;
+ (id)createConfigJSONTransformer;
+ (id)sceneActionJSONTransformer;
+ (id)updateConfigJSONTransformer;
+ (id)resultConfigJSONTransformer;
+ (id)actionSceneModelForDic:(id)a0;
+ (id)toSceneDicFromDic:(id)a0 fromScene:(id)a1;
+ (id)providerDicFromJSONDic:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
