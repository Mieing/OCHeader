@interface AWEKnowledgeStateConfigTool : NSObject

+ (id)actionConditionModelsForActionType:(id)a0 atScene:(id)a1;
+ (id)resultModelForHandlerType:(id)a0 atScene:(id)a1;
+ (id)createConfigForSceneType:(id)a0;
+ (id)valueForKey:(id)a0 atDictionary:(id)a1;
+ (id)syncModelForToScene:(id)a0 fromScene:(id)a1 isPush:(BOOL)a2;
+ (void)syncProvider:(id)a0 withAllInfo:(id)a1 ruleDic:(id)a2;
+ (Class)handlerForClassType:(id)a0;
+ (BOOL)updateStateInfoForNewScene:(id)a0;
+ (BOOL)syncStateForToScene:(id)a0 fromScene:(id)a1 isPush:(BOOL)a2;
+ (Class)handlerForActionType:(id)a0 atScene:(id)a1;

@end
