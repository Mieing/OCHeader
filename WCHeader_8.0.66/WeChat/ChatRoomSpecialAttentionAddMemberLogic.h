@class NSArray, CContact, NSString, ChatRoomSpecialAttentionMemberSelectViewController, OrderedDictionary, ChatRoomSpecialAttentionMemberLogic;
@protocol ChatRoomSpecialAttentionMemberPageLogicDelegate;

@interface ChatRoomSpecialAttentionAddMemberLogic : MMObject <RoomContactSelectDelegate, ChatRoomSpecialAttentionMemberLogicDelegate> {
    ChatRoomSpecialAttentionMemberSelectViewController *m_vc;
    OrderedDictionary *m_dicModifySpecialAttentionMember;
    ChatRoomSpecialAttentionMemberLogic *m_chatRoomSpecialAttentionMemberLogic;
    NSArray *m_existAttentionMemberUserName;
}

@property (retain, nonatomic) CContact *m_chatRoomContact;
@property (weak, nonatomic) id<ChatRoomSpecialAttentionMemberPageLogicDelegate> m_delegate;
@property (retain, nonatomic) NSArray *m_attentionMemberContactList;
@property (retain, nonatomic) NSArray *m_chatRoomMemContactList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void)reloadData;
- (void)updateRightBtn;
- (unsigned int)getSpecialAttentionMemberSelectMaxNumber;
- (id)getAddSpecialAttentionMember;
- (void)makeCell:(id)a0 contact:(id)a1;
- (BOOL)isSelected:(id)a0;
- (void)DoModifySpecialAttentionMember;
- (id)getAllAttentionMemberContactDic;
- (void)didSelectContact:(id)a0;
- (void)onCancelSelectContact;
- (void)OnModifyChatRoomSpecialAttentionMember:(id)a0 withResult:(unsigned int)a1 errorMsg:(id)a2;
- (id)getViewController;
- (void).cxx_destruct;

@end
