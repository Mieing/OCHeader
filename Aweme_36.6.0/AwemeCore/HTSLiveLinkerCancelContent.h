@class NSString;

@interface HTSLiveLinkerCancelContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *fromUserId;
@property (copy, nonatomic) NSString *toUserId;
@property (nonatomic) long long cancelType;
@property (nonatomic) int inviteSource;
@property (copy, nonatomic) NSString *toast;

+ (id)descriptor;

@end
