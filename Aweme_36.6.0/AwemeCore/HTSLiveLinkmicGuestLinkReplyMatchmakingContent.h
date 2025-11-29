@interface HTSLiveLinkmicGuestLinkReplyMatchmakingContent : IESLivePBBaseMessage

@property (nonatomic) int replyType;
@property (nonatomic) long long callDuration;
@property (nonatomic) long long linkThreshold;

+ (id)descriptor;

@end
