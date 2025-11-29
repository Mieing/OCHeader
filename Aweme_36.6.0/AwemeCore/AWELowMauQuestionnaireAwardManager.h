@class AWEFeedUGSurveyFrequencyChecker;

@interface AWELowMauQuestionnaireAwardManager : NSObject

@property (retain, nonatomic) AWEFeedUGSurveyFrequencyChecker *ugSurveyFrequencyChecker;

+ (id)sharedManager;

- (BOOL)updateDailyShowControlWithQuestionnaire:(id)a0;
- (void)updateDailyCloseControlWithItemID:(id)a0;
- (BOOL)checkCanShowUGQuestionnaire:(id)a0;
- (void)initFrequencyControlIfNeeded;
- (BOOL)tryToShowSnackBarWithQuestionnaire:(id)a0 itemId:(id)a1;
- (void)showSnackBarWithData:(id)a0;
- (void)requestAwardInfo:(id)a0 ugId:(id)a1 taskId:(id)a2 itemId:(id)a3 callBack:(id /* block */)a4;
- (void).cxx_destruct;

@end
