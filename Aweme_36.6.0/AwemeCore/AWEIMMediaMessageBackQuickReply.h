@class AWEIMMessageBaseTableViewCell, NSString, NSMutableSet, AWEIMMessageViewModel, AWEIMLowCostTimer;
@protocol IESIMMessageListViewControllerProtocol;

@interface AWEIMMediaMessageBackQuickReply : NSObject <IESIMMediaMessageBackQuickReplyInterface, AWEIMMediaMessageBackQuickReply>

@property (retain, nonatomic) NSString *displayingReplyMessageID;
@property (nonatomic) long long feedLatestServerMessageID;
@property (retain, nonatomic) AWEIMMessageViewModel *viewModel;
@property (nonatomic) BOOL shouldUpdate;
@property (nonatomic) double stayTime;
@property (retain, nonatomic) NSMutableSet *repliedMessageIdSet;
@property (retain, nonatomic) AWEIMLowCostTimer *timer;
@property (copy, nonatomic) id /* block */ listVCDidDisappearBlock;
@property (weak, nonatomic) id<IESIMMessageListViewControllerProtocol> currentListVC;
@property (retain, nonatomic) AWEIMMessageViewModel *currentAutoShowingReplyButtonMessageViewModel;
@property (retain, nonatomic) AWEIMMessageViewModel *oldAutoShowingReplyButtonMessageViewModel;
@property (retain, nonatomic) AWEIMMessageBaseTableViewCell *currentAutoShowingReplyButtonCell;
@property (nonatomic) long long loopTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)hideCurrentQuickReplyWithListVC:(id)a0;
- (void)trackShootReplyWithToUid:(id)a0 conversationType:(unsigned long long)a1;
- (void)disableUpdateIfNeeded:(id)a0 serverMessageID:(long long)a1;
- (void)updateWithCell:(id)a0 mediaEntranceVC:(id)a1;
- (void)updateWithCell:(id)a0 listVC:(id)a1;
- (void)hideCurrentAutoShowingQuickReplyButton;
- (void)listViewDidDisappear;
- (void)checkShouldDisplayQuickReplyWithListVC:(id)a0;
- (void)showQuickQuoteReply:(BOOL)a0 cell:(id)a1;
- (void)updateMessage:(id)a0 conversation:(id)a1;
- (void)recordRepliedMessageId:(id)a0;
- (BOOL)isRepliedWithMessageID:(id)a0;
- (void)resetByMessageSendIfNeededWithQuoteMsgId:(id)a0;
- (void)resetByMessageSendIfNeededWithQuoteMsgId:(id)a0 listVC:(id)a1;
- (void)hideLatestVoluntaryQuickReplyIfNeededWithListVC:(id)a0;
- (BOOL)couldShowReplyByShootButtonWithConversation:(id)a0 message:(id)a1 peerUser:(id)a2;
- (BOOL)couldShowReplyByShootButtonWithConversation:(id)a0 message:(id)a1 peerUser:(id)a2 ignorePropertyFromSelf:(BOOL)a3;
- (BOOL)isVoluntaryMediaMessage:(id)a0;
- (void)p_resetTmpState;
- (void)p_resetLastShowTimeIntervalWithViewModel:(id)a0;
- (BOOL)canCreateTimer;
- (BOOL)validateMessage:(id)a0 conversation:(id)a1;
- (void)hideQuickReplyWithListVC:(id)a0 viewModel:(id)a1;
- (BOOL)isFansGroup:(id)a0;
- (unsigned long long)quickReplyUIStyleWithListVC:(id)a0;
- (BOOL)checkShouldShowLatestNormalMediaReplyWithListVC:(id)a0;
- (void)showQuickQuoteReply:(BOOL)a0 cell:(id)a1 replyType:(unsigned long long)a2;
- (void)recordShowShootButtonTimeInterval:(id)a0 messageID:(id)a1;
- (BOOL)checkNormalMessageShouldDisplayQuickReply;
- (BOOL)checkShouldShowLatestCloseFriendsMomentReplyWithListVC:(id)a0;
- (void)trackReplyButtonShowWithMessageType:(long long)a0;
- (id)latestMessageIDWithListVC:(id)a0;
- (BOOL)checkIsLastestVoluntaryMessageWithListVC:(id)a0 message:(id)a1;
- (BOOL)enable;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)clear;
- (void)startTimer;
- (void)reset;
- (id)currentMessageID;
- (id)emojis;

@end
