@class NSString, TwitterInfo;

@interface PostInviteFriendsMsgReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int inviteFlags;
@property (retain, nonatomic) NSString *msgTitle;
@property (retain, nonatomic) NSString *msgContent;
@property (retain, nonatomic) TwitterInfo *twitterInfo;
@property (retain, nonatomic) NSString *inviteUrl;

+ (void)initialize;

@end
