@class NSString, NSMutableArray;

@interface MMTemplateMsgAuthService : MMUserService <PBMessageObserverDelegate, MMServiceProtocol> {
    BOOL _isScopeItemWrapFetching;
    NSMutableArray *_pendingScopeItemWrapQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (id)readAccountCacheFromFile;
- (void)writeAccountCacheToFile:(id)a0;
- (id)readScopeCacheFromFile:(id)a0;
- (void)writeScopeCacheToFile:(id)a0;
- (id)readAccountCacheIfNilThenCreate;
- (id)readScopeCacheIfNilThenCreate:(id)a0;
- (id)getAccountCacheCopy;
- (void)setAccountGlobalNotify:(BOOL)a0;
- (void)cleanUpAccountListWithoutNotify;
- (void)addAccountListWithResp:(id)a0;
- (BOOL)isNotifyItemValid:(id)a0;
- (void)addNotifyItem:(id)a0 toAccountList:(id)a1;
- (id)getScopeCacheCopyForUser:(id)a0;
- (id)getScopeItemCopyWithScopeID:(id)a0 forUser:(id)a1;
- (id)getScopeItemWithScopeID:(id)a0 forUser:(id)a1;
- (void)setScopeGlobalRecv:(BOOL)a0 forUser:(id)a1;
- (void)setFetchFailMsgItem:(id)a0 maxValidTime:(unsigned int)a1;
- (void)setScopeList:(id)a0 forUser:(id)a1 isOverWriteDescInfo:(BOOL)a2 settingEntry:(unsigned long long)a3;
- (void)cleanUpShowInSettingScopeListForUser:(id)a0;
- (id)convertMsgItems2ScopeItems:(id)a0 isShowInSetting:(BOOL)a1 cacheMaxAge:(unsigned int)a2;
- (void)handleFetchAccountCacheAndScopeGlobalRecv:(id)a0;
- (void)handleUpdateAccountGlobalNotifyOrScopeGlobalRecv:(id)a0;
- (void)fetchScopeListForUser:(id)a0;
- (void)handleFetchScopeList:(id)a0;
- (BOOL)updateScopeCacheGlobalRecv:(BOOL)a0 forUser:(id)a1;
- (BOOL)updateScopeCacheScopeList:(id)a0 forUser:(id)a1 scene:(unsigned int)a2;
- (void)handleUpdateScopeItemScopeRecv:(id)a0;
- (void)fetchScopeItemScopeRecvWithScopeID:(id)a0 forUser:(id)a1;
- (void)fetchScopeItemScopeRecvWithScopeID:(id)a0 businessType:(unsigned int)a1 forUser:(id)a2;
- (void)fetchScopeItemScopeRecvInPendingList;
- (void)handleFetchScopeItemScopeRecv:(id)a0;
- (void)updateScopeItem:(id)a0 forUser:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (id)filterOutHandlingMsgItem;
- (id)getMsgItemWrapWithScopeID:(id)a0 forUser:(id)a1;
- (BOOL)updateMsgItemWrap:(id)a0 isHandling:(BOOL)a1;
- (BOOL)addMsgItemWrapToQueue:(id)a0;
- (BOOL)removeMsgItemWrapFromQueue:(id)a0;
- (BOOL)isMsgItemValid:(id)a0;
- (void).cxx_destruct;

@end
