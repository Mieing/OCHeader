@interface IESIMGroupAdminPickerManager : NSObject

+ (id)sharedInstance;

- (id)conversationDataManager;
- (id)createAddGroupAdminVCWithConversation:(id)a0 addGroupAdminBlock:(id /* block */)a1 isFromNewGroupManagePage:(BOOL)a2;
- (void)p_saveWithParticipants:(id)a0 conversation:(id)a1 selectListVC:(id)a2 loadingView:(id)a3;
- (void)p_dismissWithSelectListVC:(id)a0;

@end
