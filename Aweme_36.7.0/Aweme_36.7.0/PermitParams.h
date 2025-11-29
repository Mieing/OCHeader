@class NSString;

@interface PermitParams : IESLivePBBaseMessage

@property (nonatomic) long long channelId;
@property (nonatomic) long long permitStatus;
@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *applyUserId;
@property (copy, nonatomic) NSString *secApplyUserId;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *signExtra;

+ (id)descriptor;

@end
