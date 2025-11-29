@class AWESearchStandardVideoPlayerCutRatioConfig, AWESearchPlayerInteractorStackedShadowsContainerComponentModel, AWESearchPlayerInteractorComponentModel, AWEAwemeModel;

@interface AWESearchStandardVideoPlayerComponentModel : AWESearchComponentBasicModel

@property (nonatomic) unsigned long long radiusType;
@property (retain, nonatomic) AWESearchStandardVideoPlayerCutRatioConfig *cutRatioConfig;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWESearchPlayerInteractorComponentModel *playerInteractorModel;
@property (retain, nonatomic) AWESearchPlayerInteractorStackedShadowsContainerComponentModel *stackShadowContainerModel;

- (void).cxx_destruct;

@end
