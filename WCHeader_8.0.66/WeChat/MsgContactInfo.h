@class NSString;

@interface MsgContactInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *avatar;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int avatarStyle;
@property (retain, nonatomic) NSString *userJumpInfoStr;

+ (void)initialize;

@end
