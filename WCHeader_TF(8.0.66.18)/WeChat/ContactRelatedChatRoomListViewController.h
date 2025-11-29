@class NSString, ContactRelatedGroupLogic, CContact;

@interface ContactRelatedChatRoomListViewController : MemberListViewController <IContactRelatedGroupDataExt>

@property (retain, nonatomic) NSString *customTitle;
@property (retain, nonatomic) ContactRelatedGroupLogic *relatedGroupLogic;
@property (retain, nonatomic) CContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)showContactInfoView:(id)a0;
- (double)cellHeight;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)JumpToChatRoom:(id)a0;
- (long long)getEditingStyleForIndexPath:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onCRGDataUpdated;
- (void).cxx_destruct;

@end
