@class NSString;

@interface HTSLiveUser_FollowInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSString *followSorce;
@property (nonatomic) long long followingCount;
@property (nonatomic) long long followerCount;
@property (nonatomic) long long followStatus;
@property (nonatomic) long long pushStatus;
@property (copy, nonatomic) NSString *remarkName;
@property (copy, nonatomic) NSString *followerCountStr;
@property (copy, nonatomic) NSString *followingCountStr;
@property (nonatomic) BOOL invalidFollowStatus;
@property (copy, nonatomic) NSString *follwerCountDisplay;

+ (id)descriptor;

- (id)followingCountStr;
- (id)followerCountStr;
- (long long)followingCount;
- (long long)followerCount;
- (void)setFollowStatus:(long long)a0;
- (id)remarkName;
- (long long)followStatus;
- (void)setFollowingCountStr:(id)a0;
- (void)setFollowerCountStr:(id)a0;
- (void)setFollowingCount:(long long)a0;
- (void)setFollowerCount:(long long)a0;
- (BOOL)isFollow;
- (BOOL)isFollowed;
- (BOOL)isFriend;

@end
