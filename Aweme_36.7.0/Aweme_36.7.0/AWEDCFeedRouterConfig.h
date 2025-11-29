@class UINavigationController, AWEDCFeedTransitionConfig;

@interface AWEDCFeedRouterConfig : AWEDCFeedBaseConfig

@property (retain, nonatomic) AWEDCFeedTransitionConfig *transitionConfig;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (copy, nonatomic) id /* block */ routerDecideBlock;
@property (copy, nonatomic) id /* block */ albumInsInnerPayloadConfigBlock;
@property (copy, nonatomic) id /* block */ innerViewControllerConfigBlock;
@property (copy, nonatomic) id /* block */ detailVCDefaultStartSeekTimeBlock;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end
