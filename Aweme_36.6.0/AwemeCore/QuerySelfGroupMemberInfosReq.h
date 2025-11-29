@interface QuerySelfGroupMemberInfosReq : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (nonatomic) int scoreType;

+ (id)descriptor;

@end
