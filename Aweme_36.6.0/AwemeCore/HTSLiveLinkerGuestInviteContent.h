@class HTSLiveText;

@interface HTSLiveLinkerGuestInviteContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveText *inviteContent;
@property (nonatomic) BOOL hasInviteContent;

+ (id)descriptor;

@end
