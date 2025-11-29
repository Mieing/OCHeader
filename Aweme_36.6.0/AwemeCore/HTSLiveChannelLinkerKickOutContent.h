@class NSString;

@interface HTSLiveChannelLinkerKickOutContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *fromUserId;
@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSString *secFromUserId;

+ (id)descriptor;

@end
