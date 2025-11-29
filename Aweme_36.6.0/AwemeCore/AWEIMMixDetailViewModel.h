@class AWEIMMessageConversation, NSString, AWEIMMixImageMessage, AWEIMMixTaskDetailModel, AWEIMMixDetailModel;

@interface AWEIMMixDetailViewModel : AWEIMMixDetailModel <AWEIMMixPhotoStartOrJoinSuccessMessage>

@property (copy, nonatomic) NSString *reflowMsgID;
@property (copy, nonatomic) NSString *reflowCid;
@property (retain, nonatomic) AWEIMMixImageMessage *message;
@property (retain, nonatomic) AWEIMMixTaskDetailModel *taskDetail;
@property (nonatomic) long long shareTaskID;
@property (retain, nonatomic) AWEIMMessageConversation *con;
@property (retain, nonatomic) AWEIMMixDetailModel *model;
@property (nonatomic) BOOL isProcessing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shareMessage;
- (void)updateParams;
- (id)initWithDetailModel:(id)a0;
- (void)handleRecorderNavigationControllerDidDisappearNotification:(id)a0;
- (void)updateTaskStatus:(id)a0;
- (void)updateTaskInfoModel:(long long)a0;
- (void)onStartOrJoinMixPhoto:(id)a0;
- (void)refreshAIModel;
- (void)trackPageEventWithActionType:(id)a0 clickType:(id)a1;
- (void)updateUserInfoArray:(id)a0;
- (void)fetchCoverImageWithURL:(id)a0;
- (void)reflow_trackPageEventWithActionType:(id)a0 clickType:(id)a1;
- (id)joinTask:(id)a0 selectLora:(BOOL)a1;
- (id)initWithDetailShareTaskID:(long long)a0 conversation:(id)a1 reflowMsgID:(id)a2 reflowCid:(id)a3;
- (id)requestShareData;
- (void)configUserInfoParam;
- (void)configButtonParam;
- (void)configTaskStateInfo;
- (void)updateTaskWaitTimeInfo:(id)a0;
- (void)updateFailInfoWithModel:(id)a0;
- (void)configSelfLoraInfo:(id)a0 currentUserLoraID:(id)a1 gender:(id)a2 avatarURL:(id)a3;
- (id)joinTask:(BOOL)a0;
- (BOOL)isMixHost;
- (BOOL)hasJoinMix;
- (BOOL)valideConversation;
- (void)reStartMixTask;
- (void)updateSlots:(id)a0;
- (long long)mixStatusBytTaskStatus:(long long)a0;
- (void)updateTaskInfoWithModel:(id)a0;
- (id)initWithConversation:(id)a0 mixImageMessage:(id)a1 extInfo:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
