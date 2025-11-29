@interface HTSLiveNewPosition : IESLivePBBaseMessage

@property (nonatomic) double positionX;
@property (nonatomic) double positionY;

+ (id)descriptor;

@end
