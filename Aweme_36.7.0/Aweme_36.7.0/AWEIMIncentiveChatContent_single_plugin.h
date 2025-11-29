@class AWEIMIncentiveChatMsgCardConfig, NSString;

@interface AWEIMIncentiveChatContent_single_plugin : AWEIMFlexComponent <AWEUserMessage, AWEIMIncentiveChatServiceMessage, AWEIMConversationDidFetchPeerFullDetailUserAction>

@property (nonatomic) BOOL isApproving;
@property (retain, nonatomic) AWEIMIncentiveChatMsgCardConfig *cardConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)incentiveChatService:(id)a0 relationUpdateWithRelationID:(id)a1 conversationID:(id)a2;
- (void)incentiveChatService:(id)a0 quotaUpdateWithChatType:(unsigned long long)a1;
- (void)didFetchPeerFullDetailUser:(id)a0;
- (id)incentiveMessage;
- (void)presenter:(id)a0 didUpdateWithView:(id)a1;
- (void)p_createPresenter;
- (void)p_checkOutSiteApproveStatusWithUser:(id)a0;
- (void)p_updateProps:(id)a0 withStatus:(unsigned long long)a1;
- (unsigned long long)p_calculateStatus;
- (void)p_trackCardTitleAndBtnTextIsFromServer;
- (BOOL)p_isColdUpErrorAndCanShowMessageCard;
- (id)p_configDictWithSettingConfigKey:(id)a0;
- (id)p_coldUpErrorGetSettingKey;
- (void)didTapSubtitle;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didTapButton;

@end
