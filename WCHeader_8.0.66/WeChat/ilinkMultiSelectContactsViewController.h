@class NSMutableDictionary, MultiTalkJumpAppInfo, NSString, UIView, MMUILabel;
@protocol ilinkMultiSelectContactsViewControllerDelegate;

@interface ilinkMultiSelectContactsViewController : RoomContactSelectViewController <MultiSelectContactsViewControllerDelegate> {
    BOOL m_needToFixPanelViewLayout;
}

@property (retain, nonatomic) MultiTalkJumpAppInfo *jumpAppInfo;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) MMUILabel *contactTitle;
@property (retain, nonatomic) NSMutableDictionary *m_dicMultiSelect;
@property (weak, nonatomic) id<ilinkMultiSelectContactsViewControllerDelegate> ilinkVCDelegate;
@property (nonatomic) long long groupNum;
@property (nonatomic) BOOL doNotShowContactsSelect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)initViewByIlinkStyle;
- (void)onAddMemberPageForIlink;
- (void)changeSearchBarLayoutToAdding;
- (void)addSelectedOutsideChatRoomContact:(id)a0;
- (void)deleteSelectedOutsideChatRoomContact:(id)a0;
- (void)onMultiSelectContactReturn:(id)a0;
- (void)onDidSelectNormalContact:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)searchTextFieldShouldBeginEditing;
- (void)recoverSearchBar;
- (void).cxx_destruct;

@end
