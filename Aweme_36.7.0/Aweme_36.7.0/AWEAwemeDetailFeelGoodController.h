@class AWEFeedFeelGoodCellViewController, NSMutableDictionary, AWEAwemeModel, NSString;

@interface AWEAwemeDetailFeelGoodController : AWEAwemeNewDetailBaseController <AWEFeedControllerProtocol, AWEFeedFeelGoodCellViewControllerDelegate, AWESmartLongVideoInnerQuestionnaireMessage>

@property (retain, nonatomic) AWEFeedFeelGoodCellViewController *feelGoodCellViewController;
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
@property (nonatomic) BOOL isShowingSurveyWhenReloadData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (void)playerWillStartNextLoop:(id)a0;
- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (void)beginRefresh;
- (void)configCell:(id)a0 model:(id)a1;
- (void)scrollViewDidScrollEndWithActive;
- (void)willReloadData;
- (void)didReloadData;
- (void)getLongVideoInnerQuestionnaire:(id /* block */)a0;
- (void)onSmartLongVideoInnerQuestionnaireResult:(id)a0;
- (void)isInMixDetail:(id /* block */)a0;
- (void)userDidCloseFeelGood;
- (void)addMessage;
- (void)addLogWithMessage:(id)a0 extraInfo:(id)a1;
- (BOOL)shouldShowSurvey:(id)a0;
- (BOOL)isReadyForFeedSurvey:(id)a0;
- (BOOL)isShowingFeedSurvey:(id)a0;
- (BOOL)showFeelGood;
- (void)dismissFeelGood:(BOOL)a0;
- (void)addQuestionQuitLog:(id)a0;
- (BOOL)isValidFeelGoodInDetail:(id)a0;
- (void)tryAddPlayRecord:(id)a0 playbackProgress:(double)a1;
- (BOOL)hasRecordSurveyForModel:(id)a0;
- (BOOL)isInWhiteListForBottomOffset:(id)a0;
- (BOOL)isInWhiteList:(id)a0;
- (void)trackSurveyShow:(id)a0 show:(long long)a1 msg:(id)a2 playPercent:(double)a3;
- (id)arrayToJsonString:(id)a0;
- (void)addSurveyRecord:(id)a0;
- (id)currentQuestionnaireResponse;
- (id)currentQuestionnaire;
- (id)currentQuestionnaireModel;
- (void)triggerInner31Questionnaire;
- (void)triggerInner21Questionnaire;
- (void)userDidClickPlayer:(id)a0;
- (void)userDidSubmitFeelGood:(id)a0;
- (void)userDidNotUnderstandFeelGood:(id)a0;
- (void)scrollToNextByLynx:(id)a0;
- (BOOL)enableFeedPullRefresh;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)questionVersion;

@end
