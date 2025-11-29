@interface AWEIMSearchHistoryDatasource : NSObject

- (id)p_modelForStorageModel:(id)a0;
- (id)p_modelForUserWithUid:(id)a0;
- (id)p_modelForConversationWithConversationID:(id)a0;
- (id)p_modelForConversationWithSessionID:(id)a0;
- (id)p_modelForForceInsertConversationWithSessionID:(id)a0;
- (BOOL)p_objectIsOnlineWithKey:(id)a0;
- (id)historyModelList;

@end
