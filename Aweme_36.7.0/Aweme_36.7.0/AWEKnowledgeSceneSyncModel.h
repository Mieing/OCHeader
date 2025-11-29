@class NSDictionary, NSString;

@interface AWEKnowledgeSceneSyncModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *updateRulerDic;
@property (copy, nonatomic) NSString *fromScene;
@property (copy, nonatomic) NSString *toScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
