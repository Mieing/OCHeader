@class NSString, NSData;

@interface ConfInviteItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *openid;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSData *inviteData;
@property (nonatomic) unsigned int errcode;

+ (void)initialize;

@end
