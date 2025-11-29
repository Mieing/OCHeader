@class NSString;

@interface ChatRoomListViewController : MemberListViewController <WCActionSheetDelegate, IContactMgrExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)showContactInfoView:(id)a0;
- (void)deleteContact:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)didDeleteContact:(id)a0;
- (BOOL)shouldInteractivePop;
- (void)onModifyContact:(id)a0;
- (void)onDeleteContact:(id)a0;
- (void)onContactListUpdate:(unsigned int)a0;
- (void)JumpToChatRoom:(id)a0;
- (long long)getEditingStyleForIndexPath:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (BOOL)shouldHideTabbarBeforeSearchBarBecomeActive;
- (void)wcsDidPresentSearch:(id)a0;
- (void)wcsSearchBar:(id)a0 textDidChange:(id)a1;
- (void)registerYReportSdk;

@end
