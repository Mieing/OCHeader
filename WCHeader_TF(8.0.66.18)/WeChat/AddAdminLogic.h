@class RoomContactSelectViewController, NSArray, CContact, NSString, NSMutableDictionary;
@protocol AddAdminLogicDelegate;

@interface AddAdminLogic : MMObject <RoomContactSelectDelegate, IGroupMgrExt, UITextFieldDelegate, contactInfoDelegate, MMTipsViewControllerDelegate> {
    BOOL m_bNeedReload;
    RoomContactSelectViewController *m_vc;
    NSMutableDictionary *m_dicWillAdd;
}

@property (weak, nonatomic) id<AddAdminLogicDelegate> m_delegate;
@property (retain, nonatomic) CContact *m_roomContact;
@property (retain, nonatomic) NSArray *m_arrExistAdmintUserName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)start;
- (void)updateRightBtn;
- (void)addMembersToChatRoomAdmin:(id)a0;
- (void)addAdmin;
- (void)OnAddGroupAdmin:(id)a0 withResult:(unsigned int)a1 adminList:(id)a2 errTip:(id)a3;
- (void)didSelectContact:(id)a0;
- (void)onCancelSelectContact;
- (void)newMessageFromContactInfo:(id)a0;
- (void)onViewContact:(id)a0;
- (void)makeCell:(id)a0 contact:(id)a1;
- (void).cxx_destruct;

@end
