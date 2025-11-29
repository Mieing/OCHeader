@class IESLiveDI, IESLiveGuideBaseConfig, UIViewController;

@interface IESLiveGuideContainerContext : IESLiveContainerBaseContext

@property (retain, nonatomic) IESLiveGuideBaseConfig *guideConfig;
@property (weak, nonatomic) UIViewController *guideVC;
@property (weak, nonatomic) IESLiveDI *guideDI;

- (id)initWithGuideConfig:(id)a0 guideVC:(id)a1 guideDI:(id)a2;
- (void).cxx_destruct;

@end
