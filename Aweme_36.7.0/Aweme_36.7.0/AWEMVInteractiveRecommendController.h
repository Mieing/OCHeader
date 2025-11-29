@class LOTAnimationView, UIView;

@interface AWEMVInteractiveRecommendController : AWEDCFeedBaseController

@property (retain, nonatomic) UIView *entranceView;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (nonatomic) double scrolledDistance;
@property (nonatomic) double lastScrolledPosition;
@property (nonatomic) BOOL canDecreaseAlphaToEntrance;
@property (nonatomic) BOOL canTap;
@property (nonatomic) BOOL hasPreloadGecko;

- (void)containerScrollViewDidScroll:(id)a0;
- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)showBubble;
- (id)mvPageContext;
- (void)decreaseAlphaToEntranceView;
- (void)increaseAlphaToEntranceView;
- (id)popUpSchemaURL;
- (void)didTapEntrance;
- (void).cxx_destruct;
- (void)setupViews;
- (void)containerViewDidLoad;

@end
