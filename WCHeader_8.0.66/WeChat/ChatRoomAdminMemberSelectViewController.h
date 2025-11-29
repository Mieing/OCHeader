@interface ChatRoomAdminMemberSelectViewController : RoomContactSelectViewController <MMTableViewIndexViewDelegate>

- (id)sectionIndexTitlesForTableView:(id)a0;
- (Class)getNewContactsSearchPanelViewClass;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)loadHeaderViewSelection;
- (BOOL)mmforceUseTableView:(id)a0;
- (id)mmsectionIndexTitlesForTableView:(id)a0;
- (long long)mmtableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (long long)mmcurrentIndexForTableView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;

@end
