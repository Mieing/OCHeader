@class AWEIMMessage, NSString, AWEIMStrongNoticeView, AWEIMStrongNoticeMessage;
@protocol AWEIMMessageListTopFloatingInterface;

@interface AWEIMMessageListStrongNoticeComponent : AWEIMComponentBase <AWEIMFloatingViewDispatchProtocol, AWEIMMessageListBackgroundAction>

@property (weak, nonatomic) id<AWEIMMessageListTopFloatingInterface> topFloatingService;
@property (retain, nonatomic) AWEIMStrongNoticeMessage *message;
@property (retain, nonatomic) AWEIMMessage *msg;
@property (retain, nonatomic) AWEIMStrongNoticeView *noticeView;
@property (nonatomic) BOOL showInFloatMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;

- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)messageListBackgroundImageDidUpdated:(id)a0;
- (void)p_dismiss;
- (void)handleReceiveStrongTipsNoticeNty:(id)a0;
- (void)showStrongNoticeTipWithMsg:(id)a0;
- (BOOL)isShowingStrongTips;
- (BOOL)showStrongNoticeTipsWithMsg:(id)a0;
- (BOOL)hasMsgCloseStrongTips:(id)a0 inConversation:(id)a1;
- (void)markMsgHasCloseStrongTips:(id)a0 inConversation:(id)a1;
- (void).cxx_destruct;

@end
