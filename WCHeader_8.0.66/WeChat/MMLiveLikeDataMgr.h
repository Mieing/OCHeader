@class NSString, SafeMutableDictionary, MMLiveLikePostTask, NSMutableArray;

@interface MMLiveLikeDataMgr : MMUserService <MMServiceProtocol, MMLiveTaskMgrExt>

@property (nonatomic) BOOL isPosting;
@property (retain, nonatomic) NSMutableArray *postTaskQueue;
@property (nonatomic) unsigned int nextReqInterval;
@property (nonatomic) double lastRespTimeInterval;
@property (retain, nonatomic) SafeMutableDictionary *previousLikeCountDic;
@property (retain, nonatomic) MMLiveLikePostTask *postingTask;
@property (retain, nonatomic) SafeMutableDictionary *likeInfoDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getLikeCountLabel:(unsigned long long)a0;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)postLiveLikeWithTaskId:(id)a0 isClipMode:(BOOL)a1;
- (void)postLiveLikeWithTaskId:(id)a0 isClipMode:(BOOL)a1 isDoubleClicked:(BOOL)a2;
- (unsigned long long)getLikeCountForAudienceWithTaskId:(id)a0;
- (unsigned long long)getOthersLikeCountForAudienceWithTaskId:(id)a0;
- (unsigned long long)getLikeCountForAchorWithTaskId:(id)a0;
- (void)setLikeCount:(unsigned long long)a0 forTaskId:(id)a1;
- (void)updateLikeCountWithoutCreate:(unsigned long long)a0 forTaskId:(id)a1;
- (void)addLiveLikePostWithTaskId:(id)a0 isClipMode:(BOOL)a1 isDoubleClick:(BOOL)a2;
- (id)getLiveLikePostTask:(id)a0;
- (void)invokePostNextTask;
- (void)delayPostNextTask;
- (void)postNextTask;
- (id)getMergedPostTask;
- (id)getLikeInfoWithTaskId:(id)a0;
- (id)getLikeInfoWithoutCreatedWithTaskId:(id)a0;
- (void)cancelPostingTask;
- (unsigned long long)getPreviousLikeCountWithTaskId:(id)a0;
- (void)updatePreviousLikeCountWithIncreaseCount:(unsigned long long)a0 taskId:(id)a1;
- (void)clearPreviousLikeCountWithTaskId:(id)a0;
- (void)onExitLiveSuccessWithLiveTaskId:(id)a0;
- (BOOL)applyLikeWithPostTask:(id)a0;
- (void)handleApplyLikeResult:(id)a0 interval:(unsigned int)a1 forTaskId:(id)a2;
- (void).cxx_destruct;

@end
