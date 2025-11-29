@class NSString, HTSLiveImage, NSMutableDictionary;

@interface EnterLiveResponse_AvatarInfo : IESLivePBBaseMessage

@property (nonatomic) int uid;
@property (nonatomic) int formatId;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *avatarDesc;
@property (nonatomic) int sex;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (retain, nonatomic) HTSLiveImage *avatarMedium;
@property (nonatomic) BOOL hasAvatarMedium;
@property (retain, nonatomic) HTSLiveImage *avatarLarge;
@property (nonatomic) BOOL hasAvatarLarge;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;

+ (id)descriptor;

@end
