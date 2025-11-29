@interface SetSingleTimeLimitPkResultReq : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (nonatomic) BOOL win;

+ (id)descriptor;

@end
