@class HTSLiveLinkmicGuestLinkUser;

@interface HTSLiveLinkmicGuestLinkInvitationGuideContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveLinkmicGuestLinkUser *targetLinkUser;
@property (nonatomic) BOOL hasTargetLinkUser;
@property (nonatomic) long long callDuration;
@property (nonatomic) long long linkThreshold;

+ (id)descriptor;

@end
