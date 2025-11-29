@class NSArray, NSString, AWEGeneralSearchModel, UIView, AWEWordSourceModel;
@protocol AWESearchClickRecomProtocol, AWEModernFeedCellContext;

@interface AWESearchWaterfallClickRecomCellController : UIViewController <AWESearchClickRecomViewDelegate, AWEModernFeedCellControllerProtocol>

@property (retain, nonatomic) AWEGeneralSearchModel *searchModel;
@property (copy, nonatomic) NSArray *wordsArray;
@property (retain, nonatomic) UIView<AWESearchClickRecomProtocol> *recomView;
@property (retain, nonatomic) AWEWordSourceModel *recommWordsModel;
@property (copy, nonatomic) NSString *presearchID;
@property (nonatomic) long long recomViewType;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cardClass;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (double)waterfallClickRecomCellHeightModel:(id)a0 cardWidth:(double)a1;
+ (BOOL)recomWordsArrayValidWithModel:(id)a0;
+ (void)__awe__codeRunnerRun_59;

- (void)resetContext:(id)a0;
- (void)didStartShowing;
- (void)endScroll;
- (void)trackTrendingWordsShowIfNeed;
- (BOOL)isHideWords;
- (BOOL)enableTrendingWordsShowOpt;
- (void)trendingShowTrackWithMasked:(BOOL)a0;
- (id)appendSearchAdParmasWithUrl:(id)a0 withUrl:(id)a1;
- (void)trendingWordsShowWithMasked:(BOOL)a0 wordsPosition:(long long)a1;
- (void)updateRecomViewWithModel:(id)a0;
- (void)trackMaskedEvent;
- (void)setupRecomViewIfNeeded;
- (BOOL)judgeValidWordsShowWithIndexPath:(id)a0 collectionView:(id)a1;
- (void)recomCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2 recomViewType:(long long)a3;
- (void)recomCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1 recomViewType:(long long)a2;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)updateWithModel:(id)a0;
- (id)fetchContext;

@end
