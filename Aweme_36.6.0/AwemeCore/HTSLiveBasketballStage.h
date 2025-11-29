@interface HTSLiveBasketballStage : IESLivePBBaseMessage

@property (nonatomic) int currentStage;
@property (nonatomic) int finalStage;

+ (id)descriptor;

@end
