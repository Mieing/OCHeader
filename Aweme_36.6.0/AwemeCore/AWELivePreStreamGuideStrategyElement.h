@protocol IESLiveSceneGuideStrategyService;

@interface AWELivePreStreamGuideStrategyElement : AWELiveBusinessBaseElement

@property (retain, nonatomic) id<IESLiveSceneGuideStrategyService> strategyService;

+ (BOOL)shouldActivateElement;

- (void)streamPlayer_startToPlay;
- (void).cxx_destruct;

@end
