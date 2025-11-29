@interface HTSLivePackageMeta : IESLivePBBaseMessage

@property (nonatomic) int total;
@property (nonatomic) int sequence;

+ (id)descriptor;

@end
