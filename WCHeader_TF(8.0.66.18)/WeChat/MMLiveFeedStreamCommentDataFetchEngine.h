@interface MMLiveFeedStreamCommentDataFetchEngine : MMLiveCommentDataFetchEngne

+ (void)filterUnValidMsg:(id)a0;
+ (void)filterEmoticonMsg:(id)a0;
+ (id)filterLikeMsg:(id)a0;
+ (id)filterAdAppMsg:(id)a0 type:(unsigned int)a1;
+ (id)filterNotifyTypeCommentData:(id)a0 taskId:(id)a1;

- (id)init;
- (BOOL)applyGetLiveMessageWithTaskId:(id)a0;
- (id)commentDataMgr;
- (void)appendLiveComment:(id)a0 forTaskId:(id)a1 isHistoryMsg:(BOOL)a2;
- (id)filterOrdinaryCommentsFromOtherUsersForAppendingComments:(id)a0;
- (id)feedStreamTaskWithTaskId:(id)a0;

@end
