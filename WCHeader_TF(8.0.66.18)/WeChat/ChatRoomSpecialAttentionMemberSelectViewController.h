@class NSArray;

@interface ChatRoomSpecialAttentionMemberSelectViewController : RoomContactSelectViewController <MMTableViewIndexViewDelegate>

@property (retain, nonatomic) NSArray *arrAdminOrOwnerUserName;

- (void)viewDidLoad;
- (void)addContact:(id)a0;
- (Class)getNewContactsSearchPanelViewClass;
- (id)getSpecialAttentionMemberOwnOrAdminKey;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)loadHeaderViewSelection;
- (id)mmimageTableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (BOOL)mmforceUseTableView:(id)a0;
- (BOOL)mmForceUseSpecialIndexShapeTableView:(id)a0;
- (id)mmsectionIndexTitlesForTableView:(id)a0;
- (long long)mmtableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (long long)mmcurrentIndexForTableView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
