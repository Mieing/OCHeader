@class AWEIMMessageBaseViewController, NSString, NSDictionary, AWEIMMessage, NSMutableArray, NSSet;
@protocol IESIMMultiTopFloatingTipsStickOnTopMsgDataInterface;

@interface AWEIMStickOnTopMessagesBannerComponent : AWEIMCollapsibleBannerBaseComponent <AWEIMCollapsibleBannerViewModelDelegate, AWEIMStickOnTopMessageBannerWrapperViewModelDelegate, AWEIMStickOnTopMessageActionService, IESIMActionSheetDelegate>

@property (weak, nonatomic) AWEIMMessageBaseViewController *messageBaseViewController;
@property (copy, nonatomic) NSString *stickOnMessagesInJson;
@property (copy) NSDictionary *messageId_message_dict;
@property (copy) NSDictionary *stickOnTopInfo_banner_dict;
@property (retain, nonatomic) NSMutableArray *bannerWrapper;
@property (retain, nonatomic) AWEIMMessage *msgShowingActionSheet;
@property (copy) NSSet *consumedStickOnTopMsgs;
@property BOOL shouldTrySendPromptNoticeMsg;
@property BOOL shouldUseBigGroupStrategyForStickOnTopMessagesPromptNotice;
@property BOOL neverUseStickOnTopMsg;
@property (weak, nonatomic) id<IESIMMultiTopFloatingTipsStickOnTopMsgDataInterface> multiTopFloatingTipsStickOnTopMsgDataService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aweim_stickOnTopMessagesExtraInfo:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)actionSheet:(id)a0 didClickButtonAtIndex:(long long)a1;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)didClickOnStickOnTopOfMessage:(id)a0 con:(id)a1;
- (void)handleWithMessageId:(id)a0;
- (void)wrapperViewModel:(id)a0 didRecallMsg:(id)a1;
- (void)wrapperViewModel:(id)a0 didDeleteMsg:(id)a1;
- (void)wrapperViewModel:(id)a0 messageBecameUnavailable:(id)a1;
- (void)__userDidSendMessage:(id)a0;
- (void)trackConfirmStickOnTopMessageWithIconType:(id)a0 enterMethod:(id)a1;
- (void)didDisplayBannerOnCollapsedModeWithViewModel:(id)a0;
- (void)didDisplayBannerOnExpandedModeWithViewModel:(id)a0;
- (void)didSelectBannerWithViewModel:(id)a0;
- (void)didAttemptRemoveBannerWithViewModel:(id)a0;
- (void)didConfirmRemoveBannerWithViewModel:(id)a0;
- (BOOL)__canModifyStickOnTopMsgs;
- (BOOL)__hasNotReachPromptNoticeLimit;
- (void)__tryFetchLatestStickOnTopMessages;
- (id)__loadConsumedStickOnTopMessagesFromDisk;
- (void)__observeExistingAndIncomingStickOnTopMessages;
- (void)__updateStickOnTopMessages;
- (void)__fetchStickOnTopMsgsWithConversationID:(id)a0 completion:(id /* block */)a1;
- (id)__loadMessagesFromDiskIfNeccessary:(id)a0;
- (BOOL)__isValidMessage:(id)a0;
- (void)__convertIESMessageAndWriteToCache:(id)a0;
- (void)__markMessageId:(id)a0 serverMessageId:(id)a1 action:(BOOL)a2;
- (void)__reloadBannersFromLocalData;
- (void)__removeDisplayingBannerInMemory:(id)a0 extraInfo:(id)a1;
- (id)__contentFromTheOldestStickOnTopMsg;
- (void)__markMessageId:(id)a0 action:(BOOL)a1;
- (id)topMessageType;
- (id)p_getLiveRoleInfo:(id)a0;
- (void)__updateConsumedStickOnTopMsg:(id)a0;
- (void).cxx_destruct;

@end
