@class AWEReportAfterInteractionViewModel, NSString;
@protocol AWEFrequencyControlStrategyProtocol;

@interface AWEFeedReportAfterInteractionController : AWEBaseController <AWESmartQuestionnaireMessage>

@property (retain, nonatomic) AWEReportAfterInteractionViewModel *viewModel;
@property (nonatomic) BOOL shouldInsertAfterScroll;
@property (nonatomic) BOOL hasRequest;
@property (retain, nonatomic) id<AWEFrequencyControlStrategyProtocol> frequencyControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)scrollViewDidScrollEndWithActive;
- (void)getQuestionnaire:(id /* block */)a0;
- (void)onSmartQuestionnaireResult:(id)a0;
- (void)bindEvent;
- (void)addMessage;
- (void)addLogWithMessage:(id)a0 extraInfo:(id)a1;
- (void)cleanCachedInteractionSurvey;
- (void)hasShownNonInteractionSurvey:(id)a0;
- (void)triggerInsertAndFilterIfNeed;
- (void)triggerInsertAndFilter:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)addNotificationObserver;

@end
