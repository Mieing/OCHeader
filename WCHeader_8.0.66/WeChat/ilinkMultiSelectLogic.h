@class NSString, CContact, ilinkMultiSelectContactsViewController, NSMutableDictionary;
@protocol ilinkMultiSelectLogicDelegate;

@interface ilinkMultiSelectLogic : NSObject <RoomContactSelectDelegate, ilinkMultiSelectContactsViewControllerDelegate> {
    ilinkMultiSelectContactsViewController *m_vc;
    NSMutableDictionary *m_dicWillAdd;
}

@property (weak, nonatomic) id<ilinkMultiSelectLogicDelegate> m_delegate;
@property (retain, nonatomic) CContact *m_roomContact;
@property (nonatomic) unsigned long long maxMemberNumber;
@property (nonatomic) BOOL doNotShowContactsSelect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)start;
- (BOOL)needShowSelectStatusForCell:(id)a0;
- (void)updateAddMembersInfo:(id)a0;
- (BOOL)getIfMemberInChatGroup:(id)a0;
- (unsigned long long)getMembersLimitNum;
- (id)getMembersInRoom;
- (id)getMembersHasSelectBefore;
- (void)onMultiSelectContactOutsideRoomReturn:(id)a0 removeContacts:(id)a1;
- (void)onDidSelectNormalContact:(id)a0;
- (BOOL)getIfMemberAlreadyInRoom:(id)a0;
- (void)updateRightBtn;
- (void)addMembers;
- (void)addMembersToChatRoom:(id)a0;
- (void)didSelectContact:(id)a0;
- (void)onCancelSelectContact;
- (void)makeCell:(id)a0 contact:(id)a1 indexPath:(id)a2;
- (void).cxx_destruct;

@end
