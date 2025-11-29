@class AWEAwemeDetailContainerEntertainmentConfig, NSDictionary, AWEAwemeDetailContainerPreloadConfig, AWEAwemeDetailContainerSearchConfig, AWEAwemeDetailContainerLiveConfig, AWEAwemeDetailContainerActionConfig, AWEAwemeDetailContainerRouterConfig, AWEAwemeDetailContainerTransitionConfig, NSString, AWEListDataController, AWEAwemeDetailContainerDataControlConfig, AWEAwemeDetailContainerOptimizeConfig, AWEAwemeDetailContainerSingleVideoConfig, NSArray, AWEAwemeDetailContainerPlayControlConfig, AWEAwemeDetailContainerTrackerConfig;

@interface AWEAwemeDetailContainerConfig : AWEFeedContainerBaseConfig

@property (retain, nonatomic) AWEListDataController *dataController;
@property (nonatomic) long long initialIndex;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSArray *controllerArray;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSDictionary *businessDict;
@property (copy, nonatomic) NSDictionary *bottomInfoDict;
@property (retain, nonatomic) AWEAwemeDetailContainerDataControlConfig *dataControlConfig;
@property (retain, nonatomic) AWEAwemeDetailContainerTrackerConfig *trackerConfig;
@property (retain, nonatomic) AWEAwemeDetailContainerPlayControlConfig *playControlConfig;
@property (retain, nonatomic) AWEAwemeDetailContainerSingleVideoConfig *singleVideoConfig;
@property (retain, nonatomic) AWEAwemeDetailContainerTransitionConfig *transitionConfig;
@property (retain, nonatomic) AWEAwemeDetailContainerActionConfig *actionConfig;
@property (retain, nonatomic) AWEAwemeDetailContainerRouterConfig *routerConfig;
@property (retain, nonatomic) AWEAwemeDetailContainerSearchConfig *searchConfig;
@property (retain, nonatomic) AWEAwemeDetailContainerLiveConfig *liveConfig;
@property (retain, nonatomic) AWEAwemeDetailContainerOptimizeConfig *optimizeConfig;
@property (retain, nonatomic) AWEAwemeDetailContainerPreloadConfig *preloadConfig;
@property (retain, nonatomic) AWEAwemeDetailContainerEntertainmentConfig *entertainmentConfig;
@property (nonatomic) long long detailContainerType;

+ (id)defaultConfig;

- (void)addDefaultConfig;
- (void)setupDefaultTrackConfig;
- (void)setupDefaultTransitionConfig;
- (void)setupDefaultDataControlConfig;
- (void)setupDefaultActionConfig;
- (void)setupDefaultPlayControlConfig;
- (void)setupDefaultRouterConfig;
- (void)setupDefaultSearchConfig;
- (void)setupDefaultOptimizeConfig;
- (void)setupDefaultPreloadConfig;
- (void)setupDefaultEntertainmentConfig;
- (void)setupDefaultLiveConfig;
- (void)setupDefaultSingleVideoConfig;
- (void).cxx_destruct;
- (id)init;

@end
