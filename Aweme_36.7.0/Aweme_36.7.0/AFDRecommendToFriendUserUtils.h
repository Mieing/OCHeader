@interface AFDRecommendToFriendUserUtils : NSObject

+ (id)trackRecommendToFriendsVisibility:(id)a0;
+ (id)relativeUserListFromRecommendUserList:(id)a0;
+ (id)relativeUserModelFromUserModel:(id)a0;
+ (id)getFriendRecommendUidsWithModel:(id)a0;
+ (unsigned long long)getRecommendListFollowerCountWithAweme:(id)a0;
+ (unsigned long long)getRecommendListMutualFriendsCountWithAweme:(id)a0;
+ (id)getRecommendUserRelationListWithAweme:(id)a0;
+ (BOOL)hasUserInfoWithUserID:(id)a0 userList:(id)a1;
+ (id)recommendUserModelFromUserModel:(id)a0;
+ (BOOL)hasMyUserInfoWithUserList:(id)a0;

@end
