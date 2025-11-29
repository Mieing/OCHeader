@class AWEDCCommonSurveyTracker, NSString, AWEQuestionnaireResponse, UIView, AWECommonSurveyDataController;
@protocol AWEDCCommonSurveyPresenterDelegate, AWESurveyContainerViewProtocol;

@interface AWEDCCommonSurveyPresenter : NSObject <AWEDCFeedEventDispatcherProtocol>

@property (weak, nonatomic) UIView<AWESurveyContainerViewProtocol> *surveyView;
@property (weak, nonatomic) AWECommonSurveyDataController *dataController;
@property (weak, nonatomic) AWEDCCommonSurveyTracker *surveyTracker;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL hasRequest;
@property (retain, nonatomic) AWEQuestionnaireResponse *questionnaireResponse;
@property (weak, nonatomic) id<AWEDCCommonSurveyPresenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)classNameWithReferString;
- (id)paramsForFetchSurveyInfo;
- (BOOL)isValidTypeInDoubleColumn:(id)a0;
- (void)registerSurveyEvent;
- (id)quitMethodWithModel:(id)a0;
- (void)userDidSubmitFeelGood;
- (void)userDidCloseFeelGood;
- (void)dismissSurveyView;
- (void)cleanCachedSurvey;
- (id)initWithTargetView:(id)a0 referString:(id)a1 dataController:(id)a2 tracker:(id)a3;
- (void)fetchSurveyInfoIfNeed;
- (void)surveyDidAppear;
- (void)didSelectCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)willDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)didEndDisplayingCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void).cxx_destruct;

@end
