@interface OpenGameMapResult_PoisonCircle : IESLivePBBaseMessage

@property (nonatomic) long long centerX;
@property (nonatomic) long long centerY;
@property (nonatomic) long long radius;

+ (id)descriptor;

@end
