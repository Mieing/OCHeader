@class SimpleUser_FansClub, NSString, SimpleUser_Border, HTSLiveImage, SimpleUser_Paygrade, NSMutableArray, SimpleUser_FollowInfo;

@interface SimpleUser : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (retain, nonatomic) SimpleUser_Border *border;
@property (nonatomic) BOOL hasBorder;
@property (retain, nonatomic) NSMutableArray *badgeImageListV2Array;
@property (readonly, nonatomic) unsigned long long badgeImageListV2Array_Count;
@property (nonatomic) int authorizationInfo;
@property (nonatomic) int mysteryMan;
@property (copy, nonatomic) NSString *secUid;
@property (retain, nonatomic) SimpleUser_Paygrade *payGrade;
@property (nonatomic) BOOL hasPayGrade;
@property (retain, nonatomic) SimpleUser_FollowInfo *followInfo;
@property (nonatomic) BOOL hasFollowInfo;
@property (retain, nonatomic) SimpleUser_FansClub *fansClub;
@property (nonatomic) BOOL hasFansClub;
@property (copy, nonatomic) NSString *idStr;
@property (copy, nonatomic) NSString *webcastUid;
@property (copy, nonatomic) NSString *userOpenId;
@property (copy, nonatomic) NSString *userOpenIdStr;

+ (id)descriptor;

@end
