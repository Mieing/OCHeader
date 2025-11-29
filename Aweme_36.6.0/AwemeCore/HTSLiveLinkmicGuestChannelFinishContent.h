@class NSString;

@interface HTSLiveLinkmicGuestChannelFinishContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *linkedUserToast;
@property (copy, nonatomic) NSString *channelUserToast;

+ (id)descriptor;

@end
