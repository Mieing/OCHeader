@class NSString, NSMutableDictionary, HTSLiveImage, HTSLiveUser_FollowInfo;

@interface HTSLiveOpenHostInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) int gender;
@property (copy, nonatomic) NSString *signature;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (retain, nonatomic) HTSLiveImage *avatarMedium;
@property (nonatomic) BOOL hasAvatarMedium;
@property (retain, nonatomic) HTSLiveImage *avatarLarge;
@property (nonatomic) BOOL hasAvatarLarge;
@property (retain, nonatomic) HTSLiveUser_FollowInfo *followInfo;
@property (nonatomic) BOOL hasFollowInfo;
@property (retain, nonatomic) NSMutableDictionary *schemas;
@property (readonly, nonatomic) unsigned long long schemas_Count;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;

+ (id)descriptor;

@end
