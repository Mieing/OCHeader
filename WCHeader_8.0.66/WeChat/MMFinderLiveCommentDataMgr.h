@interface MMFinderLiveCommentDataMgr : MMLiveCommentDataMgr

- (void)initData;
- (void)updateMaxCacheCommentCount;
- (unsigned long long)maxCommentCount:(id)a0;
- (BOOL)checkNeedFilterSelf:(id)a0 boxId:(id)a1;

@end
