@interface AssetPoolConfig : IESLivePBBaseMessage

@property (nonatomic) int maxSize;
@property (nonatomic) int poolSize;
@property (nonatomic) int cleanStrategy;

+ (id)descriptor;

@end
