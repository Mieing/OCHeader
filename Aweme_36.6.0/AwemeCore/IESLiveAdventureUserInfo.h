@class NSString, HTSLiveImage, GPBInt64Array, NSMutableArray;

@interface IESLiveAdventureUserInfo : IESLivePBBaseMessage

@property (nonatomic) long long userId;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (copy, nonatomic) NSString *nickName;
@property (nonatomic) long long score;
@property (nonatomic) long long rank;
@property (nonatomic) BOOL isMvp;
@property (nonatomic) int userStatus;
@property (nonatomic) long long invitedCount;
@property (retain, nonatomic) GPBInt64Array *inviteUsersArray;
@property (readonly, nonatomic) unsigned long long inviteUsersArray_Count;
@property (nonatomic) int callStatus;
@property (retain, nonatomic) HTSLiveImage *newImIconWithLevel;
@property (nonatomic) BOOL hasNewImIconWithLevel;
@property (nonatomic) int gender;
@property (copy, nonatomic) NSString *openId;
@property (retain, nonatomic) NSMutableArray *openInviteUsersArray;
@property (readonly, nonatomic) unsigned long long openInviteUsersArray_Count;

+ (id)descriptor;

@end
