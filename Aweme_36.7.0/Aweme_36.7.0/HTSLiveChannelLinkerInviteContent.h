@class NSString;

@interface HTSLiveChannelLinkerInviteContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *inviterUserId;
@property (copy, nonatomic) NSString *inviteeUserId;
@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSString *inviterSecUserId;
@property (copy, nonatomic) NSString *inviteeSecUserId;

+ (id)descriptor;

@end
