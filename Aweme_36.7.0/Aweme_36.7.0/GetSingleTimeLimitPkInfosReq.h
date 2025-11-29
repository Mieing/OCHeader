@interface GetSingleTimeLimitPkInfosReq : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (nonatomic) BOOL moreInfo;

+ (id)descriptor;

@end
