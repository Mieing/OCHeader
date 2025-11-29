@class NSString;

@interface EcsActionHandler_selectContact : EcsActionHandler_Base <SessionSelectControllerDelegate, EcsGiftSelectGroupMemberViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleAction:(id)a0;
- (void)handleSelectContact:(id)a0;
- (void)handleSelectGroupMember:(id)a0;
- (void)onSelectedContactWithUserData:(id)a0 userData:(id)a1;
- (id)getSameNicknameTips;
- (void)OnSelectSession:(id)a0 SessionSelectController:(id)a1;
- (void)OnSelectSessionCancel:(id)a0;
- (BOOL)onShouldFilterContact:(id)a0;
- (BOOL)filterContact:(id)a0;

@end
