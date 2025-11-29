@class NSString, NSDictionary, NSArray, AWEECommerceWidgetGuideEntranceModel;

@interface AWEECommerceWidgetGuideManager : NSObject <AWEUserMessage, AWEECWidgetGuideManagerService>

@property (nonatomic) BOOL hasRefreshSettings;
@property (nonatomic) long long timesOfGuideShow;
@property (nonatomic) BOOL hasInstalled;
@property (readonly, copy, nonatomic) NSString *showFrom;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSString *recommendLevel;
@property (readonly, nonatomic) double lastShowTimeStamp;
@property (readonly, nonatomic) double currShowTimeStamp;
@property (copy, nonatomic) NSArray *frequencyControlRules;
@property (retain, nonatomic) AWEECommerceWidgetGuideEntranceModel *entranceModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEECModuleServiceDOUYINJXAdapterClass;
+ (id)sharedInstance;

- (id)settingsConfig;
- (void)refreshSettings;
- (void)checkCanShowWithParams:(id)a0 completion:(id /* block */)a1;
- (void)showGuidePanelWithParams:(id)a0 completion:(id /* block */)a1;
- (void)refreshAfterShowWithEntrance:(id)a0;
- (void)canShowWithEntrance:(id)a0 completion:(id /* block */)a1;
- (BOOL)widgetGuideVisible;
- (BOOL)checkInstallEnable;
- (void)checkInstallState;
- (BOOL)settingsEnableWithShowFrom:(id)a0;
- (BOOL)libraEnable;
- (void)refreshShowTimesHistory;
- (void)checkFrequencyControlWithEntrance:(id)a0 completion:(id /* block */)a1;
- (id)aAWEECModuleServiceDOUYINJXAdapter;
- (id)getShowTimesHistoryWithKey:(id)a0;
- (void)setShowTimesWithHistory:(id)a0 Key:(id)a1;
- (BOOL)settingsEnable;
- (BOOL)checkFrequencyControlRuleEnable;
- (void)checkPitayaFrequencyEnableWithEntrance:(id)a0 completion:(id /* block */)a1;
- (void)refreshDataForWidget;
- (void)reloadWidgetTimeline;
- (void)trackerForPanelWithEvent:(id)a0 params:(id)a1;
- (BOOL)enableWidgetSwitchWithParams:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
