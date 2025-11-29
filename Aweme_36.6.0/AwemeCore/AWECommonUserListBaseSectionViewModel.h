@class NSString;

@interface AWECommonUserListBaseSectionViewModel : AWERelationUserListBaseSectionViewModel <AWEUserMessage>

@property (copy, nonatomic) NSString *previousPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishTopFollowingUser:(id)a0 status:(long long)a1;
- (void)didFinishUnTopFollowingUser:(id)a0 status:(long long)a1;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishTapTAIsFriendWithUser:(id)a0 isFriend:(BOOL)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)setupViewModel;
- (void)unfollowUser:(id)a0;
- (void)syncModelFollowStatus:(id)a0 status:(long long)a1;
- (void)onClickUnFollowUserOnProfileMenu:(id)a0 trackerParam:(id)a1;
- (BOOL)isFriends;
- (void).cxx_destruct;
- (long long)type;
- (void)dealloc;
- (BOOL)isMine;

@end
