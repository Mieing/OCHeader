@class NSString, NSMutableArray;

@interface UserAvatarInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *avatarList;
@property (nonatomic) BOOL isBanModifyAvatar;
@property (nonatomic) unsigned int avatarLimit;
@property (nonatomic) unsigned int defaultAvatarId;
@property (retain, nonatomic) NSString *defaultHeadimgUrl;
@property (retain, nonatomic) NSString *defaultHeadimgFileid;
@property (retain, nonatomic) NSString *avatarWording;
@property (retain, nonatomic) NSString *limitWording;

+ (void)initialize;

@end
