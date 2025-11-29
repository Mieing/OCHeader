@class NSArray, NSString;

@interface AWERelationFollowBaseViewModel : AWEBaseViewModel <AWEUserMessage, AWEFollowRelationGroupMessage>

@property (retain) NSArray *dataSource;
@property (copy) NSString *updateUid;
@property BOOL needReloadData;
@property BOOL needRefreshData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishUnHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)didFinishAddNewMembers:(id)a0 newUserIds:(id)a1;
- (void)didFinishDropMembers:(id)a0 userIds:(id)a1;
- (void)__updateDataSourceWithType:(long long)a0 userID:(id)a1 object:(id)a2 needResetAlias:(BOOL)a3;
- (void)viewModelDidFinishAddNewMembers:(id)a0 newUserIds:(id)a1;
- (void)viewModelDidFinishDropMembers:(id)a0 userIds:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
