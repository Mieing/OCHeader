@class AWEDCCommonSurveyPresenter, AWEDCCommonSurveyTracker, AWECommonSurveyRecorder, NSString, UIView, AWECommonSurveyDataController;
@protocol AWEFrequencyControlStrategyProtocol, AWESurveyContainerViewProtocol;

@interface AWEDCFeedSurveyController : AWEDCFeedBaseController <AWESurveyContainerViewDelegate, AWEDCCommonSurveyPresenterDelegate, AWEThroughQuestionnaireGeneralSmartServiceOuterDelegate>

@property (nonatomic) BOOL hasRequest;
@property (nonatomic) BOOL dataFromPlugin;
@property (retain, nonatomic) AWEDCCommonSurveyPresenter *presenter;
@property (retain, nonatomic) AWECommonSurveyRecorder *recorder;
@property (retain, nonatomic) AWECommonSurveyDataController *dataController;
@property (retain, nonatomic) id<AWEFrequencyControlStrategyProtocol> frequencyControl;
@property (retain, nonatomic) UIView<AWESurveyContainerViewProtocol> *surveyView;
@property (retain, nonatomic) AWEDCCommonSurveyTracker *surveyTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)detailTableViewControllerWillExit:(id)a0 currentAwemeModel:(id)a1;
- (void)fullPageFeedViewDidDisappear:(id)a0;
- (void)exitContainerWithModel:(id)a0;
- (void)enterContainerWithModel:(id)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)receiveSmartServiceOuterQuestionnaireResult:(id)a0 referString:(id)a1;
- (id)classNameWithReferString;
- (void)willDismissView:(id)a0;
- (void)sendCellAppear;
- (BOOL)enableUsePluginSurveyDataController;
- (void)setupSmartServiceIfNeed;
- (void)setupSmartService;
- (id)currentOuterService;
- (void)setupSmartService:(id)a0 config:(id)a1;
- (void).cxx_destruct;
- (void)containerViewDidLoad;

@end
