@class NSString;

@interface AFDRecommendPanelJXService : HTSService <AFDRecommendPanelJXService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShowRecommendExplainPanelWeeklyLabel:(id)a0;
- (BOOL)canShowRecommendPanelFromSelectedAppLabel:(id)a0;
- (BOOL)canShowRecommendExplainPanelDailyLabel:(id)a0;
- (BOOL)canShowRecommendLabelContentDaily:(id)a0;
- (BOOL)canShowRecommendLabelContentFromJXSource:(id)a0;
- (BOOL)canShowRecommendLabelContentWeekly:(id)a0;

@end
