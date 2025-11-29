@class NSString, GameLifeJumpInfo;

@interface ChatUserInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *avatar;
@property (nonatomic) unsigned int sex;
@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) GameLifeJumpInfo *profileJumpInfo;
@property (nonatomic) unsigned int accountType;

+ (void)initialize;

@end
