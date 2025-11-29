@class NSMutableDictionary, AWEFeedFeelGoodCellViewController, AWEAwemeModel, NSString, UIViewController;
@protocol AWEFeedContainerViewControllerProtocol, AWEFrequencyControlStrategyProtocol;

@interface AWEFeedFeelGoodController : AWEBaseController <AWEFeedControllerProtocol, AWEFeedFeelGoodCellViewControllerDelegate, AWESmartQuestionnaireMessage, AWEFeedFeelGoodControllerProtocol>

@property (retain, nonatomic) AWEFeedFeelGoodCellViewController *feelGoodCellViewController;
@property (weak, nonatomic) UIViewController<AWEFeedContainerViewControllerProtocol> *feedContainerVC;
@property (retain, nonatomic) NSMutableDictionary *surveyRecordDict;
@property (retain, nonatomic) NSMutableDictionary *surveyShowDict;
@property (retain, nonatomic) NSMutableDictionary *surveyLoopDict;
@property (retain, nonatomic) NSMutableDictionary *surveyPlayProgressDict;
@property (retain, nonatomic) AWEAwemeModel *shouldPreloadModel;
@property (nonatomic) BOOL justRefresh;
@property (copy, nonatomic) NSString *quitMethod;
@property (retain, nonatomic) AWEAwemeModel *beforeRefreshModel;
@property (nonatomic) double playPercent;
@property (nonatomic) BOOL hasRequest;
@property (retain, nonatomic) AWEAwemeModel *interactionModel;
@property (retain, nonatomic) id<AWEFrequencyControlStrategyProtocol> frequencyControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (void)beginRefresh;
- (void)configureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)scrollViewDidScrollEndWithActive;
- (void)videoControllerWillStartNextLoop:(id)a0;
- (void)getQuestionnaire:(id /* block */)a0;
- (void)onSmartQuestionnaireResult:(id)a0;
- (void)bindEvent;
- (void)userDidCloseFeelGood;
- (void)addMessage;
- (void)addLogWithMessage:(id)a0 extraInfo:(id)a1;
- (BOOL)shouldShowSurvey:(id)a0;
- (BOOL)isReadyForFeedSurvey:(id)a0;
- (BOOL)isShowingFeedSurvey:(id)a0;
- (BOOL)showFeelGood;
- (void)dismissFeelGood:(BOOL)a0;
- (void)tryAddPlayRecord:(id)a0 playbackProgress:(double)a1;
- (BOOL)hasRecordSurveyForModel:(id)a0;
- (void)trackSurveyShow:(id)a0 show:(long long)a1 msg:(id)a2 playPercent:(double)a3;
- (id)arrayToJsonString:(id)a0;
- (void)addSurveyRecord:(id)a0;
- (void)userDidClickPlayer:(id)a0;
- (void)userDidSubmitFeelGood:(id)a0;
- (void)userDidNotUnderstandFeelGood:(id)a0;
- (void)scrollToNextByLynx:(id)a0;
- (BOOL)enableFeedPullRefresh;
- (void)dismissFeedSplitIfNeed;
- (void)filterSurveyModels;
- (BOOL)shouldQuestionDismissForNotShow;
- (void)addQestuionQuitLog:(id)a0;
- (BOOL)enableShowUserProfile;
- (void)cleanCachedInteractionSurvey;
- (void)hasShownNonInteractionSurvey:(id)a0;
- (void)requestQuestionnaireIfNeed;
- (BOOL)disableContainerHorizontalScrollWithModel:(id)a0 directionToRight:(BOOL)a1;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)addNotificationObserver;

@end
