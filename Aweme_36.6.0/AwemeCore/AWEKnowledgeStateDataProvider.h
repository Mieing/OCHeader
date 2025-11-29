@class AWEKnowledgeStateSceneInfo, NSDictionary, NSString, AWEKnowledgeStateCardInfo;

@interface AWEKnowledgeStateDataProvider : NSObject <AWEKnowledgeRuleDataProvider>

@property (weak, nonatomic) AWEKnowledgeStateCardInfo *cardInfo;
@property (weak, nonatomic) AWEKnowledgeStateSceneInfo *sceneInfo;
@property (copy, nonatomic) NSDictionary *actionParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stateValueForKey:(id)a0;
- (id)initWithCardInfo:(id)a0 sceneInfo:(id)a1 actionParam:(id)a2;
- (id)objectValueForKey:(id)a0 withType:(id)a1;
- (id)abValueForKey:(id)a0;
- (id)actionValueForKey:(id)a0;
- (id)modelValueForKey:(id)a0;
- (void).cxx_destruct;

@end
