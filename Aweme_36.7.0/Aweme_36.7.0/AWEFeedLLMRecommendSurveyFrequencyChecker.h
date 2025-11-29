@class NSMutableArray, AWEFeedLLMRecommendSurveyFrequencyStorageModel;

@interface AWEFeedLLMRecommendSurveyFrequencyChecker : NSObject

@property (nonatomic) long long timesLimit;
@property (nonatomic) long long dayLimit;
@property (nonatomic) long long exitTimesLimit;
@property (nonatomic) long long exitDayLimit;
@property (nonatomic) long long exitDayDuration;
@property (retain, nonatomic) AWEFeedLLMRecommendSurveyFrequencyStorageModel *initialStorageModel;
@property (retain, nonatomic) NSMutableArray *showSurveyDateRecord;
@property (retain, nonatomic) NSMutableArray *notFilledSurveyRecord;

- (void)restoreRecord;
- (BOOL)checkFrequencyValid;
- (BOOL)checkExitPeriodValid;
- (void)updateModelWithCurrentDate:(id)a0;
- (id)filterDateRecord:(id)a0 currentDate:(id)a1 dayLimit:(long long)a2;
- (BOOL)isDate:(id)a0 withinStartDate:(id)a1 andEndDate:(id)a2;
- (id)initWithTimesLimit:(long long)a0 dayLimit:(long long)a1 exitTimesLimit:(long long)a2 exitDayLimit:(long long)a3 exitDayDuration:(long long)a4;
- (BOOL)checkShowPrerequisitesMatched;
- (void)recordNotFilledSurveyWithItemID:(id)a0;
- (void)recordShowSurvey;
- (void)recordHasFilledSurveyWithItemID:(id)a0;
- (void).cxx_destruct;

@end
