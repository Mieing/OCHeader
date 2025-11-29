@class NSString;

@interface MMFinderLiveLikeDataMgr : MMLiveLikeDataMgr <WCFinderLiveExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)applyLikeWithPostTask:(id)a0;
- (void)updatelikeCount:(unsigned long long)a0 taskId:(id)a1;
- (void)cancelPostingTask;
- (id)finderLiveTaskForTaskId:(id)a0;
- (void)onPostFinderLiveLike:(id)a0 taskId:(id)a1 postResult:(id)a2;
- (void)onGetHighlightCheerUserWithFinderContacts:(id)a0;

@end
