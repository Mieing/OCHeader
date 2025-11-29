@class NSArray, NSString;

@interface AWEIMGroupMemberRecommendDataManager : NSObject

@property (nonatomic) long long remainingInvitableFansCount;
@property (copy, nonatomic) NSArray *recommendList;
@property (copy, nonatomic) NSString *inviteGroupID;

- (long long)__IndexForRecommendUserModel:(id)a0;
- (void)__removeRecommendFromRecommendListAtIndex:(long long)a0;
- (void)fetchIMFansGroupRecommendMemberListWithLimit:(int)a0 completion:(id /* block */)a1;
- (void)sendInviteCardToUserWithModel:(id)a0;
- (void)ackRecommendWithRefuseUserModel:(id)a0;
- (void)updateRecommendUserModel:(id)a0 hasBeenInvited:(BOOL)a1;
- (void)deleteRecommendUserModel:(id)a0;
- (void).cxx_destruct;

@end
