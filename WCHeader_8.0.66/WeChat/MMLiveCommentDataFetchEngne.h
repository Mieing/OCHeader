@class NSString, NSMutableDictionary, MMLiveCommentDataMgr;

@interface MMLiveCommentDataFetchEngne : NSObject <MMLiveTaskMgrExt>

@property (retain, nonatomic) NSMutableDictionary *fetchTagDict;
@property (copy, nonatomic) NSString *uniqueId;
@property (nonatomic) unsigned int nextRequestDuration;
@property (readonly, nonatomic) MMLiveCommentDataMgr *commentDataMgr;
@property (nonatomic) double lastRequestTime;
@property (nonatomic) BOOL isSupportFrequencyLimit;
@property (nonatomic) BOOL forbidAppendSvrComment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)initNotifications;
- (void)unInitNotifications;
- (void)startGetLiveCommentWithTaskId:(id)a0 uniqueId:(id)a1;
- (void)pauseLongPulling:(id)a0;
- (void)continueLongPulling:(id)a0;
- (void)stopGetLiveComment:(id)a0;
- (void)resetFetchTagDict;
- (BOOL)checkIsOtherGetLiveComment;
- (void)continueFetchCommentWithTaskId:(id)a0;
- (double)getOverLimitSequence;
- (BOOL)checkOverLimitSequence:(id)a0;
- (id)getUniqueIdForTaskId:(id)a0;
- (void)onExitLiveSuccessWithLiveTaskId:(id)a0;
- (id)getCommentRequestTaskWithTaskId:(id)a0;
- (id)getCommentRequestTaskWithoutCreatedWithTaskId:(id)a0;
- (BOOL)applyGetLiveMessageWithTaskId:(id)a0;
- (void)handleGetLiveMessage:(id)a0 commentArray:(id)a1 taskId:(id)a2 nextRequestInterval:(unsigned int)a3 isHistoryMsg:(BOOL)a4;
- (void)willEnterForeground:(id)a0;
- (void)checkLongPullingRequestLive;
- (void)appendLiveComment:(id)a0 forTaskId:(id)a1 isHistoryMsg:(BOOL)a2;
- (void).cxx_destruct;

@end
