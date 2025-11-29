@class NSString, AWEIMDecisionNode;

@interface AWEIMDecisionTree : MTLModel <MTLJSONSerializing, AWEIMStrategyConfigResponseCompactProtocol>

@property (retain, nonatomic) AWEIMDecisionNode *root;
@property (copy, nonatomic) NSString *defaultConfigName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)rootJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)compactWithIndexNodes;
- (void)recoverFromIndexNodes:(id)a0;
- (void)compactNodesFromRoot:(id)a0 indexNodes:(id)a1;
- (void)recoverNodesFromRoot:(id)a0 indexNodes:(id)a1;
- (void).cxx_destruct;

@end
