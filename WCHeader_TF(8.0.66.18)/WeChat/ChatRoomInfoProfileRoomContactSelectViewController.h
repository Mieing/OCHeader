@class NSArray, UIImageView, WCSearchBar, NSString, MMTableView;

@interface ChatRoomInfoProfileRoomContactSelectViewController : RoomContactSelectViewController <UITextFieldDelegate> {
    MMTableView *m_roomMemberResultTableView;
    NSString *m_chatRoomOwnerTitle;
    NSString *m_chatRoomAdminTitle;
    BOOL m_firstLoad;
}

@property (retain, nonatomic) UIImageView *searchBarWrap;
@property (retain, nonatomic) WCSearchBar *searcherBar;
@property (retain, nonatomic) NSArray *arrAdminUserName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLayoutSubviews;
- (void)initSearchBar;
- (BOOL)isSeachActive;
- (BOOL)shouldInteractivePop;
- (id)navigationBarBackgroundColor;
- (void)viewWillAppear:(BOOL)a0;
- (double)getContentViewY;
- (id)getRoomMemberResultTableView;
- (id)getRoomMemberSearchText;
- (void)addContact:(id)a0;
- (void)initNavigationBar;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)loadHeaderViewSelection;
- (BOOL)mmforceUseTableView:(id)a0;
- (BOOL)mmForceUseSpecialIndexShapeTableView:(id)a0;
- (id)mmsectionIndexTitlesForTableView:(id)a0;
- (long long)mmtableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (long long)mmcurrentIndexForTableView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)doSearchAction:(id)a0;
- (double)getTableViewTop;
- (void)resetTableViewFrame;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)onTextFieldChanged:(id)a0;
- (void)cancelButtonClicked;
- (id)mmNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;

@end
