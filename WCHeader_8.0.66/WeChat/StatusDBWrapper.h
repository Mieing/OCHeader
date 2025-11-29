@class WCTextStateDB;

@interface StatusDBWrapper : WCTextStateDB

@property (retain, nonatomic) WCTextStateDB *platformDB;
@property (retain, nonatomic) WCTextStateDB *affDB;
@property BOOL useAffDB;
@property BOOL affDBTransferFinish;

+ (id)checkTextStateForAddOrModify:(id)a0;

- (void)onServiceInit;
- (BOOL)addOrModifyTextState:(id)a0 deleteExist:(BOOL)a1 checkSequence:(BOOL)a2;
- (BOOL)deleteTextStateForId:(id)a0;
- (BOOL)deleteTextStateForId:(id)a0 sequence:(unsigned int)a1;
- (BOOL)deleteTextStateForUsername:(id)a0 sequence:(unsigned int)a1;
- (BOOL)batchForceDeleteTextStateForUsername:(id)a0;
- (BOOL)batchAddOrModifyTextStateList:(id)a0;
- (BOOL)setReadForTextStateId:(id)a0 topicId:(id)a1 expiredTime:(unsigned int)a2 username:(id)a3;
- (id)mostRecentTextStateForUsername:(id)a0;
- (BOOL)isTextStateRead:(id)a0;
- (id)batchTextStateListWithOffset:(unsigned int)a0 maxCount:(unsigned int)a1;
- (id)textStateListForUsername:(id)a0 maxCount:(unsigned int)a1;
- (void)batchClearExpireTextStates;
- (BOOL)checkUseAffDB;
- (id)getSelfTextState;
- (BOOL)addSelfTextState:(id)a0;
- (id)batchTextStateListForTransform:(unsigned int)a0 maxCount:(unsigned int)a1;
- (BOOL)batchTextStateDataToAffDB:(id)a0;
- (id)getSelfStateInteractData:(id)a0;
- (void)constructStatusInfoCache;
- (id)selectTSModelWithStateId:(id)a0;
- (id)getStatusInfoListCache;
- (void)removeTextStateReferenceInto:(id)a0;
- (void)removeAllTextStateReferenceInfos;
- (void)markAllReferenceRead;
- (id)getReferenceInfoWithTextStateId:(id)a0;
- (BOOL)addTextStateReferenceInfo:(id)a0;
- (unsigned int)getTotalUnreadMessageCount;
- (unsigned int)getUnreadLikeCount;
- (unsigned int)getUnreadCommentCount;
- (unsigned int)getTotalMessageCount;
- (void)removeComemnt:(id)a0 byMarkCommentDeleted:(BOOL)a1;
- (void)clearAllMessage;
- (void)markAllLikeInfoRead;
- (id)getAllUnreadLatestNotifyInfos;
- (id)getLatestNotifyInfosWithLoadCount:(unsigned int)a0 isUnread:(BOOL)a1 maxCreateTime:(unsigned int)a2;
- (unsigned int)commentCountWithTextStateId:(id)a0;
- (unsigned int)getUnreadSystemNotifyCount;
- (void)markAllCommentInfoRead;
- (void)markAllNewMessageRead;
- (void)markAllNotifyRead;
- (unsigned int)interactionCountWithTextStateId:(id)a0;
- (id)getAllLikeInfoWithTime:(unsigned int)a0 withLimit:(unsigned int)a1;
- (BOOL)addComment:(id)a0;
- (BOOL)addTextStateLikeInfo:(id)a0;
- (id)getAllUnreadCommentInfoWithLimit:(unsigned int)a0;
- (id)getAllUnreadLikeInfo;
- (void)removeTextStateLikeInto:(id)a0;
- (id)getLikeInfoWithTextStateId:(id)a0 withLimit:(unsigned int)a1;
- (void)updateCachedCommentCount:(id)a0;
- (void)updateCachedCommentCount:(unsigned long long)a0 textStateId:(id)a1;
- (void)removeAllCachedNotifyUserNames;
- (void)cacheNotifyUserName:(id)a0;
- (id)cachedNotifyUserNames;
- (BOOL)showNewMessageReddot;
- (void)setShowNewMessageReddot:(BOOL)a0;
- (id)getAllUnreadReferenceInfo;
- (void).cxx_destruct;

@end
