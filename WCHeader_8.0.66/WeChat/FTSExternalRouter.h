@class NSString, MMUIViewController, CreateChatLogic;
@protocol FTSExternalRouterEntry, contactInfoDelegate;

@interface FTSExternalRouter : NSObject <ContactPickerViewDelegate, MultiDeleteContactsViewControllerDelegate, CreateChatLogicDelegate> {
    CreateChatLogic *m_createChatLogic;
}

@property (weak, nonatomic) id<FTSExternalRouterEntry> entry;
@property (readonly, nonatomic) MMUIViewController *viewController;
@property (weak, nonatomic) id<contactInfoDelegate> contactInfoDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEntry:(id)a0;
- (void)openContactPickerViewWith:(id)a0;
- (void)openWeAppWithContact:(id)a0;
- (void)openFinderWithContact:(id)a0;
- (void)openKFContact:(id)a0;
- (void)openWeShopItem:(id)a0;
- (void)onCreateChatRoom:(id)a0;
- (void)openMessageContentView:(id)a0;
- (void)openMultiDeleteContactsPage;
- (void)selectMsgItem:(id)a0 searchTaskKey:(id)a1;
- (void)selectMsgItems:(id)a0 withSessionUsername:(id)a1 searchTaskKey:(id)a2;
- (void)openBrandContact:(id)a0;
- (void)openEnterpriseConvergeSessionListController:(id)a0;
- (void)openEnterpriseWebSubBrand:(id)a0;
- (void)openPluginContactInfoView:(id)a0;
- (BOOL)isOpenPluginContactInfoView:(id)a0;
- (void)onCreateChatContactReturn:(id)a0;
- (void)onDidFinishedMultiDeleteContacts;
- (void).cxx_destruct;

@end
