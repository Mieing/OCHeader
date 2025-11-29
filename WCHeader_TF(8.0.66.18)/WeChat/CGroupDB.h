@class CMMDB;

@interface CGroupDB : NSObject {
    CMMDB *m_oMMDB;
}

- (id)init;
- (void)initDB:(id)a0;
- (BOOL)AddGroupMember:(id)a0 withMemberList:(id)a1;
- (BOOL)AddGroupMember:(id)a0 withMemberList:(id)a1 needReload:(BOOL)a2;
- (BOOL)DeleteGroupMember:(id)a0 withMemberList:(id)a1;
- (BOOL)SetGroupTopic:(id)a0 withTopic:(id)a1;
- (BOOL)QuitGroup:(id)a0 withUsrName:(id)a1;
- (id)GetGroupMember:(id)a0;
- (BOOL)DeleteGroupAdmin:(id)a0 withAdminList:(id)a1;
- (BOOL)AddGroupAdmin:(id)a0 withAdminList:(id)a1;
- (id)GetMMDB;
- (BOOL)isUserName:(id)a0 ExistInList:(id)a1;
- (void).cxx_destruct;

@end
