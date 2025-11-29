@class NSString;

@interface OauthAvatarInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int id;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *avatarurl;
@property (retain, nonatomic) NSString *desc;

+ (void)initialize;

@end
