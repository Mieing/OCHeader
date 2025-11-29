@interface HTSLiveDisplayItemFormat : IESLivePBBaseMessage

@property (nonatomic) BOOL enableLeftSpace;
@property (nonatomic) long long leftSpace;

+ (id)descriptor;

@end
