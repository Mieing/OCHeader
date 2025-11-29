@class NSMutableDictionary, AWEFeedLLMRecommendSurveyFrequencyChecker, NSMutableSet, NSString;

@interface AWEFeedLLMManager : NSObject <AWEFeedLLMManagerProtocol>

@property (retain, nonatomic) AWEFeedLLMRecommendSurveyFrequencyChecker *llmRecommendSurveyFrequencyChecker;
@property (retain, nonatomic) NSMutableSet *didPlayAwemeSet;
@property (retain, nonatomic) NSMutableDictionary *surveyStatusCacheDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isFrequencyControlOK:(long long)a0;
+ (BOOL)frequencyTimeControlIsOkByLastDate:(id)a0 checkDate:(id)a1 cooldownHours:(double)a2;
+ (BOOL)enableFeedLLMRecommendSurveyWithModel:(id)a0;
+ (BOOL)enableFeedLLM;
+ (void)updateLLMInteractRecommendShowWithAwemeModel:(id)a0 completion:(id /* block */)a1;
+ (void)recordHasShownLLMRecommendSurveyWithQuestionnaire:(id)a0;
+ (BOOL)isLLMRecommendSurveyShowPrerequisitesMatchedWithQuestionnaire:(id)a0;
+ (void)updateQuestionnaireShowForFeelGoodWithAwemeModel:(id)a0 completion:(id /* block */)a1;
+ (void)recordNotFilledSurveyWithItemID:(id)a0 isUGScene:(BOOL)a1;
+ (void)recordHasFilledSurveyWithItemID:(id)a0;
+ (void)updateQuestionnaireOptionClickForFeelGoodWithAwemeModel:(id)a0 index:(long long)a1 clickDurationSinceShowSurvey:(double)a2 completion:(id /* block */)a3;
+ (void)updateLLMInteractRecommendClickWithAwemeModel:(id)a0 isSelected:(BOOL)a1 index:(long long)a2 completion:(id /* block */)a3;
+ (void)setupFrequencyCheckerIfNeeded;
+ (id)getShowArrayKey:(long long)a0;
+ (id)llmSettingDict;
+ (void)updateInteractBarClickWithReqID:(id)a0 itemID:(id)a1 gid:(id)a2 bizInfo:(id)a3 btnExtra:(id)a4 duration:(long long)a5 completion:(id /* block */)a6;
+ (void)updateInteractBarShowWithReqID:(id)a0 itemID:(id)a1 gid:(id)a2 bizInfo:(id)a3 btnExtra:(id)a4 completion:(id /* block */)a5;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
