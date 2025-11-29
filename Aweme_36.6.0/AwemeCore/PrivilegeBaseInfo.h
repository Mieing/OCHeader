@interface PrivilegeBaseInfo : IESLivePBBaseMessage

@property (nonatomic) int paidLiveType;
@property (nonatomic) int viewRight;
@property (nonatomic) int delivery;

+ (id)descriptor;

@end
