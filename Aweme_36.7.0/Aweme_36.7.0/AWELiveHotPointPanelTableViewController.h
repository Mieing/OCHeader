@protocol AWELiveHotPointPanelTableVCDelegate;

@interface AWELiveHotPointPanelTableViewController : AWEHotPointPanelTableViewController

@property (nonatomic) BOOL cellEnableClick;
@property (weak, nonatomic) id<AWELiveHotPointPanelTableVCDelegate> emptyPageDelegate;

- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (void)configureUI;
- (void)trackTrendingTopicForEvent:(id)a0 searchModel:(id)a1 indexPath:(id)a2 withOtherParams:(id)a3;
- (BOOL)shouldCurrentPanelStyleShowRecommendHotWords;
- (double)constHeaderHeight;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (Class)tableViewCellClass;
- (double)viewHeight;

@end
