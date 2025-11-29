@class NSString, ACCEffectCommandActionContext;

@interface ACCEffectCommandActionManager : NSObject <ACCEffectCommandActionService>

@property (retain, nonatomic) ACCEffectCommandActionContext *context;
@property (copy, nonatomic) id /* block */ effectCommandActionManagerActionChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateActionModels:(id)a0 type:(unsigned long long)a1;
- (BOOL)isEditStatusWithType:(unsigned long long)a0;
- (void)removeAllActionModelsWithType:(unsigned long long)a0;
- (void)updateActionModel:(id)a0 type:(unsigned long long)a1;
- (id)findAllActionModelsWithType:(unsigned long long)a0;
- (void)updateActionModel:(id)a0 type:(unsigned long long)a1 isResponseUpdateBlockStatus:(BOOL)a2;
- (void)addBeautifulEffectActionModel:(id)a0;
- (void)removeBeautifulEffectActionModel:(id)a0;
- (void)removeAllBeautifulEffectActionModels;
- (void)updateBeautifulEffectActionModel:(id)a0;
- (void)updateBeautifulEffectActionModel:(id)a0 isResponseUpdateBlockStatus:(BOOL)a1;
- (void)updateBeautifulEffectActionModels:(id)a0;
- (id)findBeautifulEffectActionModelWithId:(id)a0;
- (void)applyBeautifulEffectWithCompleteHandler:(id /* block */)a0;
- (BOOL)isEditStatusByBeautifulEffect;
- (void)updateBeautifulEffectActionModels:(id)a0 isResponseUpdateBlockStatus:(BOOL)a1;
- (id)allNodeIds;
- (void)addActionModel:(id)a0 type:(unsigned long long)a1;
- (void)removeActionModel:(id)a0 type:(unsigned long long)a1;
- (void)applyWithType:(unsigned long long)a0 completeHandler:(id /* block */)a1;
- (id)findActionModel:(id)a0 type:(unsigned long long)a1;
- (id)nodeIdsWithModels:(id)a0;
- (BOOL)containsNodeIdWithModels:(id)a0 targetNodeId:(id)a1;
- (void).cxx_destruct;

@end
