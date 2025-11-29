@class NSString;

@interface AWERelatedRecommendModuleService : HTSService <AWERelatedRecommendModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)videoPauseShowRelatedRecommendEnable;
+ (BOOL)videoPauseShowRelatedButtonEnable;
+ (BOOL)videoPauseShowRelatedPanelEnable;
+ (long long)videoPauseRecommendPanelShowStyle;
+ (id)videoPauseRecommendAllowTypes;
+ (id)videoPauseRecommendPanelImageURLString;
+ (id)videoPauseRecommendWordsImageURLString;

- (BOOL)isRequestOnAirMarkEnabled;
- (long long)authorInfoPanelStyle;
- (void)refreshProcessID;
- (BOOL)relatedRecommendDCPanelEnabled;
- (BOOL)relatedRecommendDCPanelSmartPreloadEnable;
- (BOOL)relatedRecommendDCPanelAITabsEnabled;
- (BOOL)relatedRecommendDCPanelAITabsSpaceOptEnabled;
- (BOOL)relatedRecommendDCPanelAIElementEnabled;
- (BOOL)relatedRecommendDCPanelMultiTabsEnabled;
- (id)relatedRecommendDCPanelConfig;
- (long long)relatedRecommendDCPanelElementConfigTypeWithAwemeModel:(id)a0 referString:(id)a1;
- (void)registerRelatedRecommendTopElementClass:(Class)a0 forType:(long long)a1;
- (id)createRelatedRecommendPanelManagerWithContext:(id)a0 container:(id)a1 currentModel:(id)a2 delegate:(id)a3;
- (id)createRelatedRecommendViewControllerWithContainer:(id)a0 extraParams:(id)a1 delegate:(id)a2;
- (id)relatedRecommendDCPanelProcessID;
- (id)relatedRecommendEnableList;
- (id)titleClickExtraParams;
- (void)recordTitleClick;
- (id)captionRecordExtraParams;
- (double)relatedRecommendDCPanelEnterTimestamp;
- (long long)defaultRecommendLoadMoreCount;
- (void)registerStrategyClass:(Class)a0;
- (id)createStrategyClassWithAwemeModel:(id)a0;
- (BOOL)hasRelatedRecommendSectionInPanel:(id)a0;
- (BOOL)relatedRecommendDCPanelOpenVelocityEnable;
- (double)relatedRecommendDCPanelOpenDuration;
- (double)relatedRecommendDCPanelDismissDuration;
- (void)updateVideoPauseSettingState:(BOOL)a0;
- (BOOL)videoPauseSettingState;
- (id)createRelatedRecommendViewControllerWithNavigationViewController:(id)a0 currentModel:(id)a1 shouldShowTopView:(BOOL)a2 extraParams:(id)a3 entrancePageType:(unsigned long long)a4;

@end
