@class NSMutableDictionary, NSDictionary, AWEIMContactPresenter, NSString;

@interface AWEIMUGTaskManager : NSObject <IESIMUGTaskInterface>

@property (retain, nonatomic) NSMutableDictionary *mFace2FaceTaskCache;
@property (retain, nonatomic) NSMutableDictionary *mImageExchangeTaskCache;
@property BOOL uploadingTask;
@property (retain, nonatomic) NSDictionary *shareVideoTaskRouterParams;
@property (retain, nonatomic) NSMutableDictionary *shareVideoTaskCache;
@property (retain, nonatomic) NSMutableDictionary *shareVideoSendMsgPool;
@property (retain, nonatomic) NSMutableDictionary *shareVideoTaskSendMsgDistinctCache;
@property (retain, nonatomic) NSMutableDictionary *videoTaskSendResponseParams;
@property (retain, nonatomic) AWEIMContactPresenter *contactPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstace;

- (id)shareVideoTaskTrackParams;
- (id)shareVideoTaskFeedShareBtnTip;
- (void)showConversationEntryNoticeIfNeeded:(id)a0;
- (void)checkConversationNewSendMessage:(id)a0 message:(id)a1;
- (void)conversationDidFinsihRTV:(id)a0;
- (void)conversationDidFinsihPlayOrWatchTogether:(id)a0;
- (void)checkConversationTaskFinish:(id)a0;
- (id)requeryLogExtInfoByConversaion:(id)a0;
- (id)shareVideoTaskParams;
- (id)dealShareVideoTaskWithContainers:(id)a0;
- (void)finishSendShareVideoTasksWithSendGroupID:(id)a0;
- (id)videoTaskSendResponseParamsForMsgId:(id)a0;
- (void)removeVideoTaskSendResponseParamsForMsgId:(id)a0;
- (void)userDidLogin;
- (BOOL)isCameraInvoked;
- (void)checkUGImageExchangeMessageTask:(id)a0;
- (void)__userDidSendMessage:(id)a0;
- (BOOL)p_hasTaskInSendCache:(id)a0;
- (void)p_deleteShareVideoTask:(id)a0;
- (void)p_finishShareVideoTask:(id)a0 msg:(id)a1;
- (void)p_startShareVideoTask:(id)a0 msg:(id)a1;
- (void)p_addTaskToSendCache:(id)a0;
- (BOOL)isMsgTypeInBlackList:(long long)a0;
- (BOOL)isMsgTypeInWhiteList:(long long)a0;
- (void)p_resetShareVideoTaskInfo;
- (void)p_markMsgVideoTaskStart:(id)a0;
- (void)p_markMsgVideoTaskFinish:(id)a0;
- (id)p_descOrderArray:(id)a0;
- (BOOL)task_inviald:(id)a0;
- (id)localKeyWithGroupId:(id)a0;
- (void)p_saveLogExtInfoWithTask:(id)a0 conversationID:(id)a1;
- (void)flushTask:(id)a0;
- (id)p_getF2FTaskWithConversation:(id)a0;
- (id)face2FaceEntryNoticeTips;
- (BOOL)enableVoipMsg;
- (void)p_conversationDidFinishExtraTask:(id)a0 conversation:(id)a1;
- (BOOL)enablePlayOrWatchTogether;
- (long long)maxGroupParticipantsCount;
- (id)face2faceTaskFinishTips;
- (id)face2faceTaskFinishHighLightText;
- (id)p_getImageExchangeTaskWithMessage:(id)a0;
- (id)globalKeyPerfixWithTaskType:(unsigned long long)a0;
- (BOOL)p_hasPickShareVideoTask:(id)a0;
- (void)p_updateShareVideoTask:(id)a0;
- (id)localKeyWithActiveId:(id)a0 taskId:(id)a1;
- (id)localKeyWithConvId:(id)a0 task:(id)a1 key:(id)a2;
- (void)removeTask:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)startTask:(id)a0;

@end
