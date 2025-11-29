@class NSString, AFDFrequencyExitRule, AFDFrequencyCountRule;

@interface AFDCloseFriendsWidgetFrequencyRule : NSObject <AFDCloseFriendsWidgetFrequencyRuleProtocol>

@property (retain, nonatomic) AFDFrequencyCountRule *showDefaultWidgetGuideByTodayClickUnreadCircleTimesRule;
@property (retain, nonatomic) AFDFrequencyCountRule *showPublishWidgetGuideByTodayPublishTimesRule;
@property (retain, nonatomic) AFDFrequencyCountRule *showWidgetGuideByNewWidgetGuideAllShowingControlRule;
@property (retain, nonatomic) AFDFrequencyExitRule *showDefaultWidgetGuideExitRule;
@property (retain, nonatomic) AFDFrequencyExitRule *showPublishWidgetGuideExitRule;
@property (retain, nonatomic) AFDFrequencyCountRule *showDefaultWidgetGuideByAllShowingTimesRule;
@property (retain, nonatomic) AFDFrequencyCountRule *showPublishWidgetGuideByAllShowingTimesRule;
@property (retain, nonatomic) AFDFrequencyCountRule *showWidgetIconRedDotRule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)todayPublishTimesRuleAddCount;
- (void)defaultWidgetGuideExitRuleReset;
- (void)defaultWidgetGuideExitRuleAddCount;
- (void)publishWidgetGuideExitRuleReset;
- (void)publishWidgetGuideExitRuleAddCount;
- (long long)todayClickUnreadCircleTimes;
- (long long)todayPublishTimes;
- (long long)newWidgetGuideAllShowingControlDays;
- (long long)defaultWidgetGuideExitCount;
- (long long)defaultWidgetGuideExitDays;
- (long long)publishWidgetGuideExitCount;
- (long long)publishWidgetGuideExitDays;
- (long long)defaultAllShowingTimes;
- (long long)publishAllShowingTimes;
- (long long)widgetIconRedDotTimes;
- (BOOL)shouldShowDefaultWidgetGuideByTodayClickUnreadCircleTimesRule;
- (void)todayClickUnreadCircleTimesRuleAddCount;
- (BOOL)shouldShowPublishWidgetGuideByTodayPublishTimesRule;
- (BOOL)shouldShowNewWidgetGuide;
- (void)newWidgetGuideAllShowingControlRuleAddCount;
- (BOOL)shouldShowDefaultWidgetGuideExitRule;
- (BOOL)shouldShowPublishWidgetGuideExitRule;
- (BOOL)shouldShowDefaultWidgetGuideByAllShowingTimesRule;
- (void)defaultWidgetGuideByAllShowingTimesRuleAddCount;
- (BOOL)shouldShowPublishWidgetGuideByAllShowingTimesRule;
- (void)publishWidgetGuideByAllShowingTimesRuleAddCount;
- (BOOL)shouldShowWidgetIconRedDotRule;
- (void)widgetIconRedDotRuleAddCount;
- (void).cxx_destruct;

@end
