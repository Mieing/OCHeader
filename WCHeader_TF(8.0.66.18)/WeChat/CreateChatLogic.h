@class UIView, NSString, MMTipsViewController, MultiSelectContactsViewController, NSMutableDictionary, SelectContactFromChatRoomViewController, NSMutableArray, SelectContactsViewController, CContact, ContactsCreateChatRoomLogic;
@protocol CreateChatLogicDelegate;

@interface CreateChatLogic : MMObject <MMTipsViewControllerDelegate, SelectContactsViewControllerDelegate, SelectContactFromChatRoomViewControllerDelegate, ContactsCreateChatRoomLogicDelegate, MultiSelectContactsViewControllerDelegate> {
    ContactsCreateChatRoomLogic *m_createLogic;
    SelectContactFromChatRoomViewController *m_SelectContactFromChatRoomViewController;
    NSMutableDictionary *m_chatRoonMemberDic;
    MMTipsViewController *m_errorView;
    UIView *m_createChatSectionHeadView;
}

@property (retain, nonatomic) NSMutableArray *selectedMsgList;
@property (retain, nonatomic) UIView *createChatSectionHeadLineView;
@property (weak, nonatomic) id<CreateChatLogicDelegate> m_delegate;
@property (readonly, nonatomic) MultiSelectContactsViewController *m_MultiSelectController;
@property (readonly, nonatomic) SelectContactsViewController *m_SelectContactsViewController;
@property (nonatomic) BOOL m_isCreateWXTalk;
@property (nonatomic) unsigned long long m_commonSearchScene;
@property (retain, nonatomic) CContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initMultiSelectController;
- (void)initSelectContactsViewController;
- (void)setKeepCurViewAfterSelect:(BOOL)a0;
- (void)setShowRadarCreateRoom;
- (id)getCreateChatSectionHeadView;
- (void)onSelectContactReturn:(id)a0 atScene:(unsigned int)a1;
- (id)contactForContext;
- (void)onMultiSelectContactReturn:(id)a0;
- (void)createChatRoonWithMemberDic:(id)a0;
- (void)onMultiSelectWithMsgHistory:(id)a0 uploadTaskId:(id)a1;
- (void)dealloc;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 tipTag:(long long)a2;
- (BOOL)onSelectRecommendGroupContact:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1 sesseionType:(unsigned int)a2;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1 sesseionType:(unsigned int)a2;
- (BOOL)isShowPageSheetForSesseionType:(unsigned int)a0;
- (void)onClickSelectContactFromGroup;
- (void)onDidSelectNormalContact:(id)a0;
- (void)OnCreateRoom:(id)a0;
- (void)onSelectedContactResult:(id)a0;
- (void).cxx_destruct;

@end
