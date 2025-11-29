@class NSString, HTSLiveImage;

@interface BattleArmy_RankUser : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) long long score;
@property (copy, nonatomic) NSString *userIdStr;
@property (copy, nonatomic) NSString *webcastUid;

+ (id)descriptor;

@end
