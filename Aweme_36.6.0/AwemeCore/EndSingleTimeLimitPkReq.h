@interface EndSingleTimeLimitPkReq : IESLivePBBaseMessage

@property (nonatomic) long long roomId;

+ (id)descriptor;

@end
