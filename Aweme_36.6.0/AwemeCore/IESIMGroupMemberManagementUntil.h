@interface IESIMGroupMemberManagementUntil : NSObject

+ (id)emptyPageConfigWithTitle:(id)a0 iconImage:(id)a1 isSubPage:(BOOL)a2;
+ (id)sharedInstance;

- (void)didTapDelete:(id)a0 cid:(id)a1 enterFrom:(id)a2 conversation:(id)a3;
- (id)createFansVCWithTag:(id)a0 tagInfo:(id)a1 conversationID:(id)a2 enterFrom:(id)a3 selectConfig:(id)a4 conversation:(id)a5 searchConfig:(id)a6;
- (BOOL)showActiveTagWithconversation:(id)a0;
- (void)deleteMember:(id)a0 cid:(id)a1 enterFrom:(id)a2 conversation:(id)a3;
- (id)createRemoveMemberVC:(id)a0 enterFrom:(id)a1;

@end
