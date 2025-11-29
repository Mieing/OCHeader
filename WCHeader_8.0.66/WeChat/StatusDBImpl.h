@class MemoryMappedKV;

@interface StatusDBImpl : WCTextStateDB

@property (retain, nonatomic) MemoryMappedKV *mmkv;

+ (id)checkTextStateForAddOrModify:(id)a0;

- (void)removeTextStateReferenceInto:(id)a0;
- (void)removeAllTextStateReferenceInfos;
- (void)markAllReferenceRead;
- (id)getReferenceInfoWithTextStateId:(id)a0;
- (BOOL)addTextStateReferenceInfo:(id)a0;
- (BOOL)deleteTextStateForId:(id)a0;
- (id)getAllUnreadReferenceInfo;
- (id)getAllLikeInfoWithTime:(unsigned int)a0 withLimit:(unsigned int)a1;
- (void)removeAllTextStateLikeInfos;
- (void)removeAllComments;
- (void)markAllLikeInfoRead;
- (void)markAllCommentInfoRead;
- (id)getAllUnreadLikeInfo;
- (id)getAllUnreadCommentInfoWithLimit:(unsigned int)a0;
- (id)getAllLikeInfoLimit:(unsigned int)a0 maxCreateTime:(unsigned int)a1;
- (id)getAllCommentsWithLimit:(unsigned int)a0 maxCreateTime:(unsigned int)a1;
- (BOOL)addOrModifyTextState:(id)a0 deleteExist:(BOOL)a1 checkSequence:(BOOL)a2;
- (id)mostRecentTextStateForUsername:(id)a0;
- (BOOL)isTextStateRead:(id)a0;
- (BOOL)setReadForTextStateId:(id)a0 topicId:(id)a1 expiredTime:(unsigned int)a2 username:(id)a3;
- (id)textStateListForUsername:(id)a0 maxCount:(unsigned int)a1;
- (BOOL)deleteTextStateForId:(id)a0 sequence:(unsigned int)a1;
- (BOOL)deleteTextStateForUsername:(id)a0 sequence:(unsigned int)a1;
- (BOOL)batchForceDeleteTextStateForUsername:(id)a0;
- (BOOL)addComment:(id)a0;
- (BOOL)addTextStateLikeInfo:(id)a0;
- (void)removeComemnt:(id)a0 byMarkCommentDeleted:(BOOL)a1;
- (void)removeTextStateLikeInto:(id)a0;
- (void)clearAllMessage;
- (void)markAllNewMessageRead;
- (BOOL)batchAddOrModifyTextStateList:(id)a0;
- (id)cachedNotifyUserNames;
- (void)cacheNotifyUserName:(id)a0;
- (void)removeAllCachedNotifyUserNames;
- (void)batchClearExpireTextStates;
- (id)batchTextStateListWithOffset:(unsigned int)a0 maxCount:(unsigned int)a1;
- (id)getLatestNotifyInfosWithLoadCount:(unsigned int)a0 isUnread:(BOOL)a1 maxCreateTime:(unsigned int)a2;
- (unsigned int)getTotalMessageCount;
- (unsigned int)getTotalUnreadMessageCount;
- (unsigned int)getUnreadLikeCount;
- (unsigned int)getUnreadCommentCount;
- (unsigned int)getUnreadSystemNotifyCount;
- (void)onReceiveInfoWithTextStateId:(id)a0;
- (void)markAllNotifyRead;
- (id)getAllUnreadLatestNotifyInfos;
- (id)selectTextStateWithStateId:(id)a0;
- (id)selectTSModelWithStateId:(id)a0;
- (unsigned int)interactionCountWithTextStateId:(id)a0;
- (unsigned int)commentCountWithTextStateId:(id)a0;
- (void)updateCachedCommentCount:(id)a0;
- (void)updateCachedCommentCount:(unsigned long long)a0 textStateId:(id)a1;
- (id)getLikeInfoWithTextStateId:(id)a0 withLimit:(unsigned int)a1;
- (BOOL)showNewMessageReddot;
- (void)setShowNewMessageReddot:(BOOL)a0;
- (void)constructStatusInfoCache;
- (id)getStatusInfoListCache;
- (id)getSelfStateInteractData:(id)a0;
- (void).cxx_destruct;

@end
