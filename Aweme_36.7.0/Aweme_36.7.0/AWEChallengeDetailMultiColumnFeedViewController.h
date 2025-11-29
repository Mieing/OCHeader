@class UILabel, UIView;

@interface AWEChallengeDetailMultiColumnFeedViewController : AWEChallengeDetailBaseFeedViewController

@property (retain, nonatomic) UIView *emptyTipView;
@property (retain, nonatomic) UILabel *emptyTipLabel;
@property (retain, nonatomic) UILabel *emptyMainTipLabel;
@property (retain, nonatomic) UIView *adDismissPositionView;

+ (Class)viewModelClass;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (id)emptySectionsPlaceholderView;
- (BOOL)shouldHideNoMoreText;
- (id)previewingViewControllerAtIndexPath:(id)a0;
- (void)updateFeedWithDataState:(long long)a0;
- (void)selectHeaderVideoAtIndex:(long long)a0;
- (void)createEmptyViewIfNeeded;
- (id)produceDismissAdView;
- (id)calculateFeedZoomTransitionStartViewWithModel:(id)a0;
- (void)addAdDismissPositionViewIfNeeded;
- (void).cxx_destruct;

@end
