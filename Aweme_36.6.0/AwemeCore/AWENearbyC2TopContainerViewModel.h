@class NSArray, AWENearbyPageContext;

@interface AWENearbyC2TopContainerViewModel : AWEBaseViewModel

@property (nonatomic) double topContainerHeight;
@property (nonatomic) double topContainerOffsetY;
@property (retain, nonatomic) NSArray *topLynxModelList;
@property (nonatomic) double cardGap;
@property (nonatomic) BOOL isTopContainerShowing;
@property (nonatomic) double currentDisplayPct;
@property (nonatomic) unsigned long long lastRefreshType;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;

- (id)initWithPageContext:(id)a0;
- (void)updateScrollerOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)topContainerDidAppear;
- (void)topContainerDidDisapper;
- (void)enterToNearby;
- (void)updateTopContainerPct:(double)a0;
- (void)updateTopContainerShowStatus:(BOOL)a0;
- (void).cxx_destruct;
- (void)addObserver;

@end
