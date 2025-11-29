@class NSString, AWEAwemeModel, AWEQuestionnaireResponse, AWEQuestionnaire;
@protocol AWEFrequencyControlStrategyProtocol;

@interface AWEReportAfterInteractionViewModel : NSObject <AWEReportAfterInteractionViewModelProtocol>

@property (retain, nonatomic) id<AWEFrequencyControlStrategyProtocol> frequencyControl;
@property (retain, nonatomic) AWEQuestionnaireResponse *cachedModel;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) AWEQuestionnaire *currentQuestionnaire;
@property (copy, nonatomic) NSString *currentRule;
@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL hasRequest;
@property (retain, nonatomic) AWEQuestionnaireResponse *questionnaireDoubleColumn;
@property (nonatomic) BOOL isRequestingDoubleColumnSurvey;
@property (nonatomic) BOOL hasRequestDoubleColumnSurvey;
@property (retain, nonatomic) AWEQuestionnaireResponse *questionnaireMediumVideoChannel;
@property (nonatomic) BOOL isRequestingMediumVideoChannelSurvey;
@property (nonatomic) BOOL hasRequestMediumVideoChannel;
@property (retain, nonatomic) AWEQuestionnaireResponse *questionnaireMediumVideoChannelInner;
@property (nonatomic) BOOL isRequestingMediumVideoChannelInnerSurvey;
@property (nonatomic) BOOL hasRequestMediumVideoChannelInner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (id)sharedInstance;

- (void)trackWithEvent:(id)a0 params:(id)a1;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)getQuestionnaireRuleDictWithScene:(long long)a0 subScene:(long long)a1;
- (void)requestModelInfoIfNeed:(id)a0;
- (void)requestModelInfo:(id /* block */)a0;
- (void)updateEndRequestStatus:(long long)a0 subScene:(long long)a1 response:(id)a2 success:(BOOL)a3;
- (void)requestModelInfoWithParams:(id)a0 frequencyControl:(id)a1 completion:(id /* block */)a2;
- (void)notifyQuestionnaireRuleChangedWithScene:(long long)a0 subScene:(long long)a1;
- (void)requestModelInfoWithParams:(id)a0 completion:(id /* block */)a1;
- (id)pri_getQuestionnaireRuleDictWithResponse:(id)a0;
- (void)requestDoubleColumnModelInfoIfNeed:(id)a0 completion:(id /* block */)a1;
- (void)requestMediumVideoChannelModelInfoIfNeed:(id)a0 completion:(id /* block */)a1;
- (void)requestMediumVideoChannelInnerModelInfoIfNeed:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)cleanData;

@end
