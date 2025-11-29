@class NSString, NSDictionary;

@interface AWEKnowledgeSceneActionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *fromScene;
@property (copy, nonatomic) NSDictionary *toSceneDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
