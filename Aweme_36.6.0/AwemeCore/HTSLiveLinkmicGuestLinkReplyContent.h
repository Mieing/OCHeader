@class NSString;

@interface HTSLiveLinkmicGuestLinkReplyContent : IESLivePBBaseMessage

@property (nonatomic) int replyType;
@property (copy, nonatomic) NSString *toast;

+ (id)descriptor;

@end
