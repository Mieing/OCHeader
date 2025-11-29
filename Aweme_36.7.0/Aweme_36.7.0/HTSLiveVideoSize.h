@interface HTSLiveVideoSize : IESLivePBBaseMessage

@property (nonatomic) int height;
@property (nonatomic) int width;

+ (id)descriptor;

@end
