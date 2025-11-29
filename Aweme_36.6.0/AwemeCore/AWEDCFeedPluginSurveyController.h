@class NSTimer, AWECommonSurveyDataController, AWEDCCommonSurveyPresenter, NSString, NSDictionary, AWEDCCommonSurveyTracker, AWEQuestionnaireResponse, AWECommonSurveyRecorder;
@protocol AWEFrequencyControlStrategyProtocol;

@interface AWEDCFeedPluginSurveyController : AWEDCFeedBaseController <AWEDCFeedPluginSurveyControllerProtocol>

@property (nonatomic) BOOL hasRequest;
@property (nonatomic) BOOL hasInsert;
@property (retain, nonatomic) AWEQuestionnaireResponse *questionnaireResponse;
@property (copy, nonatomic) NSDictionary *interactionRuleDic;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long waitTime;
@property (nonatomic) long long retryTime;
@property (retain, nonatomic) AWEDCCommonSurveyPresenter *presenter;
@property (retain, nonatomic) AWECommonSurveyRecorder *recorder;
@property (retain, nonatomic) AWECommonSurveyDataController *dataController;
@property (retain, nonatomic) id<AWEFrequencyControlStrategyProtocol> frequencyControl;
@property (retain, nonatomic) AWEDCCommonSurveyTracker *surveyTracker;
@property (copy, nonatomic) NSString *itemRealGid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)detailTableViewControllerWillExit:(id)a0 currentAwemeModel:(id)a1;
- (void)fullPageFeedViewDidDisappear:(id)a0;
- (void)exitContainerWithModel:(id)a0;
- (void)enterContainerWithModel:(id)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewWillDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)timeThreshold;
- (void)onTimerFire:(id)a0;
- (id)classNameWithReferString;
- (void)commonLynxCell:(id)a0 awemeModel:(id)a1 container:(id)a2 registerEventCallBack:(id)a3;
- (void)commonLynxCell:(id)a0 awemeModel:(id)a1 container:(id)a2 unregisterEventCallBack:(id)a3;
- (void)commonLynxCell:(id)a0 awemeModel:(id)a1 container:(id)a2 didLoadFailedWithUrl:(id)a3 error:(id)a4;
- (void)commonLynxCell:(id)a0 awemeModel:(id)a1 didClickWithParams:(id)a2;
- (void)commonLynxCell:(id)a0 awemeModel:(id)a1 didCloseWithParams:(id)a2;
- (void)commonLynxCell:(id)a0 awemeModel:(id)a1 didDislikeWithParams:(id)a2;
- (void)fetchSurveyInfoIfNeed;
- (void)addLogWithInfo:(id)a0 extraInfo:(id)a1;
- (BOOL)p_enableInsertItemRealGid;
- (id)p_itemIDAboveIndexPath:(id)a0 inCollectionView:(id)a1;
- (BOOL)isValidPluginSurvey;
- (BOOL)isReadyToInsertModel;
- (id)insertIndexPath;
- (long long)retryThresholdToInsertSurvey;
- (void)sendCellAppear;
- (void).cxx_destruct;
- (void)resetTimer;
- (void)startTimer;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)pauseTimer;
- (void)dealloc;
- (void)resumeTimer;
- (void)containerViewDidLoad;

@end
