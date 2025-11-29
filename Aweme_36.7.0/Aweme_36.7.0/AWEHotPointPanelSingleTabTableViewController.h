@class CAGradientLayer, AWEHotSearchParamsModel, AWEHotSearchBoardTabModel, AWEHotSearchManager;
@protocol AWEHotPointSingleTabVCDelegate;

@interface AWEHotPointPanelSingleTabTableViewController : AWEHotPointPanelTableViewController

@property (retain, nonatomic) AWEHotSearchManager *tabRecommendManager;
@property (retain, nonatomic) AWEHotSearchBoardTabModel *boardModel;
@property (retain, nonatomic) AWEHotSearchParamsModel *paramsModel;
@property (nonatomic) BOOL shouldFake;
@property (retain, nonatomic) CAGradientLayer *gradientMaskForRecommendWords;
@property (retain, nonatomic) AWEHotSearchManager *manager;
@property (nonatomic) BOOL hasMultiTabs;
@property (copy, nonatomic) id /* block */ showLinearGradientMaskBlock;
@property (weak, nonatomic) id<AWEHotPointSingleTabVCDelegate> tabVCDelegate;

+ (Class)aAWEPadDetailTableAdapterClass;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (id)tabManager;
- (void)configureUI;
- (id)recommendManager;
- (id)aAWEPadDetailTableAdapter;
- (void)showRecommendView;
- (void)hideRecommendView;
- (void)selectSameHotSpotModel:(id)a0 paramsModel:(id)a1;
- (void)selectSameHotSpotModel:(id)a0;
- (id)initWithBoardTabModel:(id)a0 shouldFake:(BOOL)a1;
- (void)updateTabManager:(id)a0;
- (void)updateTabRecommendManager:(id)a0;
- (void)fetchTabDataIfNeeded:(id /* block */)a0;
- (void)configCell:(id)a0 model:(id)a1 indexPath:(id)a2;
- (id)tableViewFooter;
- (void)trackTrendingTopicForEvent:(id)a0 searchModel:(id)a1 indexPath:(id)a2 withOtherParams:(id)a3;
- (void)showTableFooter:(BOOL)a0;
- (id)tabHeaderString;
- (BOOL)shouldCurrentPanelStyleShowRecommendHotWords;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)init;
- (Class)tableViewCellClass;

@end
