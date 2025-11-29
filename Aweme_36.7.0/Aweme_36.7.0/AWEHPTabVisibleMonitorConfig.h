@class NSDictionary, AWEHPTabVisibleMonitorStrategyConfig, AWEHPTabVisibleLimitRecoverVCHierarchyStrategy;

@interface AWEHPTabVisibleMonitorConfig : AWEBaseBizConfigModel

@property (nonatomic) BOOL enable;
@property (nonatomic) long long monitorDelayTime;
@property (nonatomic) long long maxReportCount;
@property (copy, nonatomic) NSDictionary *enableMonitorTab;
@property (nonatomic) long long tabbarEnableAutoRecoverTiming;
@property (nonatomic) long long topbarEnableAutoRecoverTiming;
@property (copy, nonatomic) NSDictionary *sceneWhiteList;
@property (copy, nonatomic) NSDictionary *topSubviewEnableList;
@property (retain, nonatomic) AWEHPTabVisibleMonitorStrategyConfig *strategyConfig;
@property (nonatomic) BOOL alogReportEnable;
@property (nonatomic) BOOL uiTreeReportEnable;
@property (copy, nonatomic) NSDictionary *autoRecoverSceneList;
@property (copy, nonatomic) NSDictionary *autoRecoverSceneBlackList;
@property (retain, nonatomic) AWEHPTabVisibleLimitRecoverVCHierarchyStrategy *limitRecoverVCHierarchyStrategy;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
