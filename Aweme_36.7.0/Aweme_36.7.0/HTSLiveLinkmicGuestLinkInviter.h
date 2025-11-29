@class NSString, HTSLiveLinkmicGuestLinkUser;

@interface HTSLiveLinkmicGuestLinkInviter : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveLinkmicGuestLinkUser *inviterInfo;
@property (nonatomic) BOOL hasInviterInfo;
@property (copy, nonatomic) NSString *source;

+ (id)descriptor;

@end
