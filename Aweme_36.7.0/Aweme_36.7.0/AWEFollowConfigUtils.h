@interface AWEFollowConfigUtils : NSObject

+ (id)followButtonTitleWithUser:(id)a0 scene:(id)a1;
+ (id)followButtonTitleWithFollowStatus:(long long)a0 followerStatus:(long long)a1 scene:(id)a2;
+ (id)_followButtonTitleForFollowStatus:(long long)a0 followerStatus:(long long)a1;
+ (id)_getFollowUserButtonConfig;
+ (id)_followButtonTitleIconForFollowStatus:(long long)a0 followerStatus:(long long)a1;

@end
