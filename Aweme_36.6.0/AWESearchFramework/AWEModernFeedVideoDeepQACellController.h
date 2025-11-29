@class AWEGeneralSearchModel, AWEModernFeedVideoDeepQAInteractView, UIImageView, AWEModernFeedVideoDeepQAShortAnswerView, AWEModernFeedVideoDeepQATitleView, AWEAwemeModel, AWEGeneralSearchVideoDeepQAModel;

@interface AWEModernFeedVideoDeepQACellController : AWEModernFeedAwemeViewController

@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) AWEModernFeedVideoDeepQATitleView *titleView;
@property (retain, nonatomic) AWEModernFeedVideoDeepQAShortAnswerView *shortAnswerView;
@property (retain, nonatomic) AWEModernFeedVideoDeepQAInteractView *deepQAInteractView;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEGeneralSearchVideoDeepQAModel *videoDeepQAModel;
@property (retain, nonatomic) AWEGeneralSearchModel *searchModel;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (void)__awe__codeRunnerRun___LINE__;

- (void)zoomTransitionMigrationDidEndForView:(id)a0;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)player:(id)a0 updatePlayProgressWithTime:(double)a1 totalDuration:(double)a2;
- (id)progressSectionView;
- (id)interactView;
- (void)switchVideoStatusByClick;
- (void)updateSubviewFrames;
- (void)videoPlayerViewSingleTappedAction:(id)a0 extraParams:(id)a1;
- (id)getExpandDescDic:(id)a0 extraParams:(id)a1;
- (long long)getCommentStyle:(id)a0;
- (id)stickerSearchParams:(BOOL)a0;
- (BOOL)shouldExpandDescInFlow:(id)a0 extraParams:(id)a1;
- (BOOL)isIntoFullTextWithButtonType:(id)a0;
- (void)didClickAnchorTagView;
- (void)didClickAuthorView;
- (id)searchResultShowTrackParams;
- (void)trackEvent:(id)a0 trakeDic:(id)a1;
- (id)searchResultClickTrackParams;
- (id)getBaseTrackeParams;
- (void)titleEnterInFlow;
- (void)shortAnswerEnterInFlow;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)updateWithModel:(id)a0;

@end
