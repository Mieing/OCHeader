@class AWEDiscoverDWidgetGuideManagerEvader, NSString;

@interface AWEDiscoverDGuideManager : NSObject <AWEDiscoverDGuideManagerProtocol>

@property (retain, nonatomic) AWEDiscoverDWidgetGuideManagerEvader *hotspotTabImageSnackbarEvader;
@property (retain, nonatomic) AWEDiscoverDWidgetGuideManagerEvader *hotspotTabHalfScreenEvader;
@property (retain, nonatomic) AWEDiscoverDWidgetGuideManagerEvader *hotSearchCombineSnackbarEvader;
@property (retain, nonatomic) AWEDiscoverDWidgetGuideManagerEvader *hotSearchCombineCardEvader;
@property (retain, nonatomic) AWEDiscoverDWidgetGuideManagerEvader *hotSearchHotSpotListEvader;
@property (nonatomic) BOOL widgetGuideHotSearchCombineCanShow;
@property (nonatomic) BOOL pushGuideHotSearchCombineCanShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (BOOL)enableHotspotCombineWidgetGuide;
- (BOOL)enableHotspotCombinePushGuide;
- (void)tryShowGuideInCombineWithCompletion:(id /* block */)a0;
- (BOOL)p_checkTodayWithKey:(id)a0;
- (long long)hotTrendWidgetGuideChannelVideoCount;
- (long long)hotTrendWidgetGuideChannelDwellTime;
- (long long)hotTrendWidgetGuideCombineVisitTimes;
- (BOOL)meetsHotSearchCombineConditionForPush;
- (BOOL)enableHotspotCombinePushGuideTest;
- (void)showPushGuideWithCompletion:(id /* block */)a0;
- (BOOL)meetsHotSearchCombineCondition;
- (void)showGuideWithEnterFrom:(id)a0 completion:(id /* block */)a1;
- (BOOL)enableHotspotWidgetGuide;
- (id)p_createGuideRequestModel:(id)a0;
- (void)p_checkWidgetInstalledWithCompletion:(id /* block */)a0;
- (id)p_getSavedDayWithKey:(id)a0;
- (void)p_setSavedDayWithKey:(id)a0 day:(id)a1;
- (long long)hotTrendPushGuideCombineVisitTimes;
- (void)addToXTabPlayStartedList:(id)a0;
- (BOOL)meetsXTabPlayStartedCondition;
- (void)markHotSearchCombineVisit;
- (void)markHotSearchCombineVisitForPush;
- (void)addHotSpotTabStayTime:(long long)a0;
- (BOOL)meetsXTabStayTimeCondition;
- (void)setWidgetGuideHotSearchCombineCanShowKey:(BOOL)a0;
- (void)setPushGuideHotSearchCombineCanShowKey:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
