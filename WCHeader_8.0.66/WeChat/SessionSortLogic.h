@class NSString, SessionSortCache, SessionFoldCache;

@interface SessionSortLogic : NSObject {
    SessionSortCache *_oSessionSortCache;
    SessionFoldCache *_oSessionFoldCache;
    NSString *_oldCachePath;
    NSString *_newCachePath;
    NSString *_foldCachePath;
}

- (id)init;
- (void)saveSortDataInternal;
- (void)saveFoldDataInternal;
- (void)loadSortDataInternal;
- (void)loadFoldDataInternal;
- (void)LoadCache;
- (void)SaveCache;
- (id)getCurrentDate;
- (void)TopSession:(id)a0;
- (void)UntopSession:(id)a0;
- (void)RemoveUntopSession;
- (id)getTopTime:(id)a0;
- (id)getUntopTime:(id)a0;
- (id)getSortTimeForUser:(id)a0;
- (void)updateSortTimeForUser:(id)a0;
- (BOOL)isTopSession:(id)a0;
- (BOOL)isTopSessionCountExceed;
- (unsigned long long)getTopSessionCount;
- (BOOL)hasMergeFlag;
- (void)setMergeFlag;
- (void)setFoldWithSessions:(id)a0;
- (void)foldSessionByName:(id)a0;
- (void)unfoldSession:(id)a0;
- (void)unfoldSessions:(id)a0;
- (void)unfoldAllSessions;
- (BOOL)isSessionFold:(id)a0;
- (long long)foldSessionCount;
- (BOOL)isFolded;
- (void).cxx_destruct;

@end
