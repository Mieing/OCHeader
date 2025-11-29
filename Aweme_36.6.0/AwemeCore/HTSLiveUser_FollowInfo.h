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

- (BOOL)isFollow;
- (BOOL)isFollowed;
- (BOOL)isFriend;

@end
