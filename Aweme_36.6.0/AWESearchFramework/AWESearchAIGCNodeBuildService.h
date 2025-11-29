@interface AWESearchAIGCNodeBuildService : NSObject

+ (id)createTransactionWithOperationConfigs:(id)a0 context:(id)a1;
+ (void)commitTransaction:(id)a0 completionBlock:(id /* block */)a1 context:(id)a2;
+ (id)buildViewModelWithCMDModel:(id)a0 response:(id)a1 context:(id)a2;
+ (void)insertViewModel:(id)a0 toParentID:(id)a1 extraOperationConfig:(id)a2 context:(id)a3 completionBlock:(id /* block */)a4;
+ (void)insertViewModel:(id)a0 insertId:(id)a1 insertAction:(id)a2 extraOperationConfig:(id)a3 context:(id)a4 completionBlock:(id /* block */)a5;
+ (void)replaceCardWithNewViewModel:(id)a0 oldViewModel:(id)a1 extraOperationConfig:(id)a2 context:(id)a3 completionBlock:(id /* block */)a4;
+ (void)removeCardWithViewModel:(id)a0 context:(id)a1 completionBlock:(id /* block */)a2;
+ (id)createReplaceOperationConfigWithViewModel:(id)a0 oldViewModel:(id)a1;
+ (id)createRemoveOperationConfigWithViewModel:(id)a0;
+ (id)buildViewModelWithCMDModel:(id)a0 baseParams:(id)a1 context:(id)a2;
+ (id)createDoubleColumnVideoLoadMoreInsertOperationConfigWithVM:(id)a0 parentViewModel:(id)a1 loadMoreAnchorNode:(id)a2;
+ (id)createInsertOperationConfigWithViewModel:(id)a0 parentViewModel:(id)a1;
+ (id)createDoubleColumnLayerCardOperationConfigWithViewModel:(id)a0 anchorViewModel:(id)a1 insertRelation:(unsigned long long)a2;
+ (id)createInsertOperationConfigWithViewModels:(id)a0 anchorViewModel:(id)a1 insertRelation:(unsigned long long)a2;
+ (void)handleComponentDataModelForGeneralSearchWithViewModel:(id)a0 context:(id)a1 originData:(id)a2 dataType:(long long)a3 renderType:(long long)a4;
+ (BOOL)enableSearchAIDouYinNewFramework;
+ (BOOL)enableSearchAIGCNewCachalotOperation;
+ (BOOL)shouldInsertNodeByAnchorNode:(id)a0 parentID:(id)a1 context:(id)a2;
+ (id)createInsertOperationConfigWithViewModel:(id)a0 anchorViewModel:(id)a1 insertRelation:(unsigned long long)a2;
+ (id)batchWithContext:(id)a0 operations:(id /* block */)a1 shouldCommit:(BOOL)a2;
+ (void)replaceCardWithNewViewModel:(id)a0 oldViewModel:(id)a1 extraOperationConfig:(id)a2 context:(id)a3 isOffscreen:(BOOL)a4 completionBlock:(id /* block */)a5;
+ (id)createTransactionWithOperationConfigs:(id)a0 context:(id)a1 isOffscreen:(BOOL)a2;
+ (BOOL)enableCreateInsertOperationNoFetchChildren;
+ (id)buildReplaceLynxNodeForWebNode:(id)a0 context:(id)a1;
+ (id)findFirstNodeInTree:(id)a0 withCondition:(id /* block */)a1;
+ (id)createInsertOperationConfigWithViewModels:(id)a0 parentViewModel:(id)a1;
+ (void)createTransactionHistoryRoundUnFoldWithRootViewModel:(id)a0 roundInfo:(id)a1 cmdArray:(id)a2 context:(id)a3 completion:(id /* block */)a4;

@end
