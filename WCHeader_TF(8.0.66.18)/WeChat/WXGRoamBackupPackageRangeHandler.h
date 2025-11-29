@class WXGChatLogSessionUtility, NSArray, NSRecursiveLock, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface WXGRoamBackupPackageRangeHandler : NSObject <IChatLogDataMgrExt>

@property (nonatomic) unsigned long long totalSize;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *rangeQueue;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *calculateSema;
@property (retain, nonatomic) NSArray *convTimeRangeList;
@property (retain, nonatomic) NSArray *usernameList;
@property (retain, nonatomic) WXGChatLogSessionUtility *sessionUtility;
@property (nonatomic) unsigned long long rangeCulculateTaskCount;
@property (retain, nonatomic) NSRecursiveLock *taskCountLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getRangeTypeName:(int)a0;
- (void)loadRangeTypeSessionsWithRange:(id)a0;
- (unsigned long long)getRangeTypeCount:(int)a0;
- (void)appendComma:(id)a0;
- (id)getSessionNameByUserName:(id)a0;
- (id)parseRangeItemToString:(id)a0;
- (id)parseRangeToSymbolString:(id)a0;
- (id)parseRangeItemIncludeLabelToString:(id)a0 atIndex:(long long)a1;
- (id)parseRangeItemIncludeExactUserToString:(id)a0 atIndex:(long long)a1;
- (id)parseRangeItemIncludeToString:(id)a0 atIndex:(long long)a1;
- (id)parseRangeItemExcludeToString:(id)a0 atIndex:(long long)a1;
- (id)parseUserNameToSessionName:(id)a0;
- (unsigned long long)parseRangeUsersCount:(id)a0;
- (void)asyncParseRangeToConvsAndSize:(id)a0 backupTime:(unsigned int)a1 completeBlock:(id /* block */)a2;
- (void)asyncLoadAllConvsAndSize;
- (id)parseRangeToUsernameList:(id)a0;
- (void)parseRangeToConversationList:(id)a0;
- (void)parseRangeToConversationList:(id)a0 usernameMap:(id)a1;
- (void)mergeOrDeleteUserNamesFromHasSpecialFriend:(id)a0 isMerge:(BOOL)a1 map:(id)a2;
- (void)mergeOrDeleteUserNamesFromInSpecialLabel:(id)a0 isMerge:(BOOL)a1 map:(id)a2;
- (void)mergeOrDeleteUserNamesFromGroup:(id)a0 isMerge:(BOOL)a1 map:(id)a2;
- (void)mergeOrDeleteUserNamesIntoMap:(id)a0 isMerge:(BOOL)a1 map:(id)a2 beginTime:(unsigned long long)a3 endTime:(unsigned long long)a4;
- (void)asyncGetUsersChatLogSize:(id)a0;
- (void)onChatLogCalculateBackupChatLogEnd:(unsigned long long)a0;
- (void)onChatLogCalculateBackupChatLogFilter:(id)a0 totalSize:(unsigned long long)a1 fullDiffDic:(id)a2;
- (void)onChatLogDataLoad:(unsigned long long)a0 total:(unsigned long long)a1;
- (void)onChatLogDataLoadFinished;
- (void).cxx_destruct;

@end
