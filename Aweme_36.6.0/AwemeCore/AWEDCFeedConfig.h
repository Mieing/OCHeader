@class AWEDCFeedContainerConfig, NSString, AWEDCFeedSectionConfig, AWEDCFeedDataConfig, AWEDCFeedStrategyConfig, AWEDCFeedTrackerConfig, AWEDCFeedComponentConfig, AWEDCFeedCellConfig, AWEDCFeedRouterConfig;

@interface AWEDCFeedConfig : AWEDCFeedBaseConfig

@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *innerReferString;
@property (retain, nonatomic) AWEDCFeedContainerConfig *containerConfig;
@property (retain, nonatomic) AWEDCFeedSectionConfig *sectionConfig;
@property (retain, nonatomic) AWEDCFeedCellConfig *cellConfig;
@property (retain, nonatomic) AWEDCFeedRouterConfig *routerConfig;
@property (retain, nonatomic) AWEDCFeedComponentConfig *componentConfig;
@property (retain, nonatomic) AWEDCFeedDataConfig *dataConfig;
@property (retain, nonatomic) AWEDCFeedStrategyConfig *strategyConfig;
@property (retain, nonatomic) AWEDCFeedTrackerConfig *trackerConfig;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end
