@interface AWEIMGroupInactiveMemberListViewController : AWEIMGroupMemberListViewController

- (void)p_prepareData;
- (void)updateNaviTitle;
- (BOOL)canShowGroupOwner;
- (BOOL)canShowGroupAdmin;
- (BOOL)isMultiselectMode;
- (BOOL)canShowSortingSwitch;
- (BOOL)shouldAssignDefaultSortingType;
- (BOOL)canShowInactiveEntry;
- (BOOL)shouldHideSearchBar;
- (BOOL)isSelectedWithModel:(id)a0;
- (void)p_didTapDelete;
- (BOOL)shouldShowFansTags;
- (void)viewDidLoad;

@end
