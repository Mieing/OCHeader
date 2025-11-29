@interface AWEIMRemovedShareListDataManager : NSObject

+ (id)sharedInstance;

- (void)removeWithShareModel:(id)a0 completeBlock:(id /* block */)a1;
- (id)getSharePanelRemovedSecUidList;
- (id)getSharePanelRemovedConversationIdList;
- (void)p_updateRemovedList:(id)a0;
- (void)p_postRemoveShareModelWithParams:(id)a0 completion:(id /* block */)a1;
- (void)p_postRecoverShareModelWithParams:(id)a0 completion:(id /* block */)a1;
- (void)p_getRecoverModelListWithShareModels:(id)a0 completion:(id /* block */)a1;
- (id)removedSecUserIdListKey;
- (id)removedConversationIdListKey;
- (void)recoverWithShareModels:(id)a0 completeBlock:(id /* block */)a1;
- (BOOL)isBelongToRemovedSecUidList:(id)a0;
- (BOOL)isBelongToRemovedConversationIdList:(id)a0;

@end
