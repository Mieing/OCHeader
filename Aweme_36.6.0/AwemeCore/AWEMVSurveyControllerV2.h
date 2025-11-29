@class NSString, NSMutableDictionary, UIView;
@protocol AWESurveyTrackerProtocol, AWEFrequencyControlStrategyProtocol, AWESurveyContainerViewProtocol;

@interface AWEMVSurveyControllerV2 : AWEDCFeedBaseController <AWESurveyContainerViewDelegate, AWESmartLongVideoFeedQuestionnaireMessage>

@property (nonatomic) BOOL hasRequest;
@property (nonatomic) BOOL hasRequestInner;
@property (retain, nonatomic) NSMutableDictionary *surveyRecordDict;
@property (retain, nonatomic) id<AWEFrequencyControlStrategyProtocol> frequencyControl;
@property (retain, nonatomic) id<AWEFrequencyControlStrategyProtocol> frequencyControlForInner;
@property (retain, nonatomic) UIView<AWESurveyContainerViewProtocol> *surveyView;
@property (nonatomic) BOOL feelGoodLoaded;
@property (nonatomic) BOOL feelGoodLoadFailed;
@property (nonatomic) BOOL surveyIsShowing;
@property (nonatomic) BOOL hasReportDismissQuit;
@property (copy, nonatomic) NSString *quitMethod;
@property (retain, nonatomic) id<AWESurveyTrackerProtocol> currentSurveyTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)detailTableViewControllerWillExit:(id)a0 currentAwemeModel:(id)a1;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)listDidReloadData;
- (void)getLongVideoFeedQuestionnaire:(id /* block */)a0;
- (void)onSmartLongVideoFeedQuestionnaireResult:(id)a0;
- (void)registerSurveyEvent;
- (void)userDidSubmitFeelGood;
- (void)userDidCloseFeelGood;
- (void)dismissSurveyView;
- (void)sendCellAppear;
- (void)addMessage;
- (BOOL)hasRecordSurveyForModel:(id)a0;
- (void)addSurveyRecord:(id)a0;
- (BOOL)isValidFeelGoodInMediumVideoChannel:(id)a0;
- (void)trackLoadResult:(BOOL)a0 errorCode:(long long)a1 errorMsg:(id)a2;
- (void)requestQuestionnaireIfNeed;
- (void)requestInnerQuestionnaireIfNeed;
- (void)cacheSurveyIfNeed;
- (void)trackSurveyQuit:(id)a0;
- (void)trackToastShow:(id)a0;
- (void)cleanCachedMediumVideoChannelSurvey;
- (void)trackSurveyShow:(id)a0 errorCode:(long long)a1 errorMsg:(id)a2;
- (void)requestQuestionnaire:(long long)a0 actionBlock:(id /* block */)a1;
- (id)surveyTracker:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)containerViewDidLoad;

@end
