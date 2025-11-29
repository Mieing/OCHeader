@class SelectContactsViewController, CContact, NSString, ForwardMessageLogicController, CMessageWrap;
@protocol ShareFriendOnChatDelegate;

@interface ShareFriendOnChatLogicController : MMObject <ForwardMessageLogicDelegate, SelectContactsViewControllerDelegate> {
    id<ShareFriendOnChatDelegate> m_delegate;
    ForwardMessageLogicController *m_forwardMsgLogic;
    CMessageWrap *m_msg;
}

@property (retain, nonatomic) SelectContactsViewController *selectContactViewController;
@property (retain, nonatomic) CContact *m_contactToShare;
@property (retain, nonatomic) CContact *m_contactShareToWho;
@property (nonatomic) BOOL m_bIsShareToChatRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)showConfirmShareView;
- (id)contactShareMsgFromUser:(id)a0 toUser:(id)a1 sharedContact:(id)a2;
- (void)OnForwardMessageSend:(id)a0;
- (id)getCurrentViewController;
- (void)onDismiss:(id)a0;
- (void)start;
- (void)reset;
- (BOOL)onFilterContactCandidate:(id)a0;
- (void)onSelectContactReturn:(id)a0 atScene:(unsigned int)a1;
- (BOOL)onFilterSendReceiver:(id)a0;
- (void).cxx_destruct;

@end
