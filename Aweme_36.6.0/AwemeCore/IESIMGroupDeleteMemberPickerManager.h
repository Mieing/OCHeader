@interface IESIMGroupDeleteMemberPickerManager : NSObject

+ (id)sharedInstance;

- (id)createDeleteMemberVCWithConversation:(id)a0 enterFrom:(id)a1 previousPage:(id)a2;
- (void)p_didTapDeleteWithSelectedIdentifiers:(id)a0 conversation:(id)a1 enterFrom:(id)a2 previousPage:(id)a3 selectListVC:(id)a4 loadingView:(id)a5;
- (void)deleteMemberWithSelectedIdentifiers:(id)a0 conversation:(id)a1 enterFrom:(id)a2 previousPage:(id)a3 selectListVC:(id)a4 loadingView:(id)a5;
- (id)p_deleteParticipants:(id)a0 participantsOptions:(id)a1 bots:(id)a2 conversation:(id)a3;
- (void)__trackDeleteMemberWithUserIDArray:(id)a0 blockListOn:(BOOL)a1 shouldBlock:(BOOL)a2 conversation:(id)a3 enterFrom:(id)a4 previousPage:(id)a5;
- (id)p_deleteParticipants:(id)a0 options:(id)a1 conversation:(id)a2;
- (id)p_deleteBots:(id)a0 conversation:(id)a1;
- (BOOL)shouldShowLiveFansSubscriptionDateWithConversation:(id)a0;

@end
