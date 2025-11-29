@interface BlockComponent : IESLivePBBaseMessage

@property (nonatomic) int componentType;
@property (nonatomic) int reason;

+ (id)descriptor;

@end
