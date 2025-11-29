@class NSArray, CContact, NSString, ChatRoomSpecialAttentionMemberLogic;
@protocol ChatRoomSpecialAttentionMemberPageLogicDelegate;

@interface ChatRoomSpecialAttentionDeleteMemberLogic : MMObject <ChatRoomSpecialAttentionMemberLogicDelegate> {
    ChatRoomSpecialAttentionMemberLogic *m_chatRoomSpecialAttentionMemberLogic;
}

@property (retain, nonatomic) CContact *m_chatRoomContact;
@property (weak, nonatomic) id<ChatRoomSpecialAttentionMemberPageLogicDelegate> m_delegate;
@property (retain, nonatomic) NSArray *m_attentionMemberContactList;
@property (retain, nonatomic) CContact *m_deleteAttentionContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startWithSender:(id)a0;
- (void)delAttentionMemberWithSender:(id)a0;
- (void)doDelAttentionMember;
- (void)OnModifyChatRoomSpecialAttentionMember:(id)a0 withResult:(unsigned int)a1 errorMsg:(id)a2;
- (void).cxx_destruct;

@end
