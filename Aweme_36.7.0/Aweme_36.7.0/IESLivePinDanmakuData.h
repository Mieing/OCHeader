@interface IESLivePinDanmakuData : IESEZDanmakuLinearData

@property (nonatomic) long long pinType;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL pinRequired;

- (void)startLinearAnimation;
- (void)stopLinearAnimation;

@end
