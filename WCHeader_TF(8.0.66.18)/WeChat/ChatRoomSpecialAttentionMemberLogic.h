@class CContact;
@protocol ChatRoomSpecialAttentionMemberLogicDelegate;

@interface ChatRoomSpecialAttentionMemberLogic : MMObject <PBMessageObserverDelegate>

@property (retain, nonatomic) CContact *m_chatRoomContact;
@property (weak, nonatomic) id<ChatRoomSpecialAttentionMemberLogicDelegate> m_delegate;

+ (void)reportChatRoomSpecialAttentionMemberLogWithActionCode:(long long)a0 chatRoomUserName:(id)a1 initialAttentionMemberListCount:(unsigned int)a2 addAttentionMemberList:(id)a3 deleteAttentionMemberList:(id)a4;

- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (BOOL)modifyChatRoomSpecialAttentionMember:(id)a0;
- (void)OnModifyChatRoomSpecialAttentionMemberResponse:(id)a0;
- (void)updateLocalChatRoomRoomSpecialAttentionList:(id)a0 andSpecialAttentionMemberList:(id)a1;
- (void).cxx_destruct;

@end
