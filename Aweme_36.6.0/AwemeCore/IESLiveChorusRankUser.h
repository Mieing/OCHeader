@class NSString, IESLiveChorusRankUser_OwnRoom, HTSLiveImage, IESLiveChorusRankUser_FollowInfo;

@interface IESLiveChorusRankUser : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *id_p;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (retain, nonatomic) IESLiveChorusRankUser_FollowInfo *followInfo;
@property (nonatomic) BOOL hasFollowInfo;
@property (retain, nonatomic) IESLiveChorusRankUser_OwnRoom *ownRoom;
@property (nonatomic) BOOL hasOwnRoom;
@property (nonatomic) int secret;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *idStr;
@property (nonatomic) int silenceStatus;
@property (nonatomic) int authorizationInfo;
@property (nonatomic) BOOL anonymous;
@property (nonatomic) BOOL mysteryMan;

+ (id)descriptor;

@end
