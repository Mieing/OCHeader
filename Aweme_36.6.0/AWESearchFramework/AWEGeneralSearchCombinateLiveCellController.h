@class AWEAwemeModel, UIView, AWESearchEcommerceInfoAnchorModel, AWEGeneralSearchModel, NSString, AWEGradientView, AWESearchEcommerceGoodsView, AWESearchLivePlayerView, UILabel;
@protocol AWEModernFeedCellContext;

@interface AWEGeneralSearchCombinateLiveCellController : UIViewController <AWEModernFeedCellControllerProtocol>

@property (retain, nonatomic) AWESearchEcommerceInfoAnchorModel *goodsModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) AWESearchLivePlayerView *playerView;
@property (retain, nonatomic) AWESearchEcommerceGoodsView *goodsView;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (retain, nonatomic) AWEGeneralSearchModel *searchModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEGradientView *gradientMaskView;
@property (retain, nonatomic) Class cardClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (void)__awe__codeRunnerRun___LINE__;

- (id)liveTransitionContext;
- (void)resetContext:(id)a0;
- (void)trackPlay;
- (void)trackLiveShow;
- (BOOL)isMediaSourceCard;
- (void)didBecomeActiveForReason:(unsigned long long)a0;
- (void)didResignActiveForReason:(unsigned long long)a0;
- (void)trackSearchResultShow;
- (void)clickGoodAtIndex:(long long)a0;
- (void)clickLiveView;
- (void)clickGoods;
- (void)clickGoodsMore;
- (void)trackSearchResultClickLive;
- (void)trackSearchResultClickGoods;
- (void)trackSearchLivePlay;
- (void)trackSearchLiveDurationWithDuration:(long long)a0;
- (id)searchTrackParamsWithParams:(id)a0;
- (id)getSearchKeyword;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)transitionContext;
- (id)videoView;
- (void)viewDidLoad;
- (void)setupUI;
- (void)updateWithModel:(id)a0;
- (id)fetchContext;

@end
