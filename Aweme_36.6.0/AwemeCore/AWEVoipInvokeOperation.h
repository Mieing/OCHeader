@class NSString, NSArray, AWEVoipFinishForwardModel, NSDictionary, RTVBehaviorOptions, AWEVoipInvokeExternBusinessInfo;

@interface AWEVoipInvokeOperation : AWEVoipBaseOperation

@property (copy, nonatomic) NSString *inviteText;
@property (nonatomic) BOOL needCreateGroup;
@property (copy, nonatomic) NSString *selfStickerID;
@property (retain, nonatomic) AWEVoipFinishForwardModel *forwardModelAfterFinish;
@property (readonly, nonatomic) NSArray *userIDs;
@property (readonly, nonatomic) long long rtvType;
@property (readonly, nonatomic) long long callType;
@property (readonly, nonatomic) unsigned long long callScene;
@property (copy, nonatomic) NSString *roomId;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSDictionary *trackDictionary;
@property (readonly, copy, nonatomic) NSString *customEnterFromString;
@property (readonly, copy, nonatomic) NSString *customClickFromString;
@property (readonly, nonatomic) BOOL useRtcTestEnv;
@property (readonly, copy, nonatomic) NSString *campaignEnterFromString;
@property (readonly, copy, nonatomic) NSString *campaignTaskType;
@property (readonly, copy, nonatomic) NSString *campaignTaskOverToast;
@property (nonatomic) BOOL needUpdateConversationHintIndex;
@property (nonatomic) unsigned long long result;
@property (readonly, copy, nonatomic) NSDictionary *localExtInfo;
@property (readonly, nonatomic) RTVBehaviorOptions *behaviorOptions;
@property (readonly, nonatomic) AWEVoipInvokeExternBusinessInfo *externBusinessInfo;

- (void)updateCallScene:(unsigned long long)a0;
- (void)updateConversationID:(id)a0;
- (id)initWithInviteUserIDs:(id)a0 voipType:(long long)a1 callType:(long long)a2 enterFrom:(long long)a3;
- (void)enableInitialAutoNarrow;
- (void)enableInitialOpenStickerPanel;
- (void)ignoreCheckInitialInviteResult;
- (void)hideMatchEntrance;
- (void)disableOpenCameraGuide;
- (void)updateInitialActions:(long long)a0;
- (void)enableInitialInvokeFeedShare;
- (void)enableInitialMicOff;
- (void)enableInitialInvokeGame;
- (void)updateCampaignEnterFromString:(id)a0;
- (void)updateCampaignTaskType:(id)a0;
- (void)updateCampaignTaskOverToast:(id)a0;
- (void)updateForwardModelAfterFinish:(id)a0;
- (void)updateSelfStickerID:(id)a0;
- (void)updateTrackDictionary:(id)a0;
- (void)updateCustomEnterFromString:(id)a0;
- (void)updateCustomClickFromString:(id)a0;
- (void)updateInviteText:(id)a0;
- (void)updateNeedCreateGroup:(BOOL)a0;
- (void)updateLocalExtInfo:(id)a0;
- (void)updateBehaviorOptions:(id)a0;
- (void)updateExternBusinessInfo:(id)a0;
- (void)updateUseRtcTestEnv:(BOOL)a0;
- (id)internalOperation;
- (long long)__voipTypeWithAWERTVType:(long long)a0;
- (void)__configInternalOperation:(id)a0;
- (BOOL)__isGroupInteraction;
- (id)__voipInitialActions;
- (long long)__interactionAction;
- (id)__rtvExternBusinessInfo;
- (id)__finishForwardModel;
- (BOOL)__isEnterFromFeed;
- (void).cxx_destruct;

@end
