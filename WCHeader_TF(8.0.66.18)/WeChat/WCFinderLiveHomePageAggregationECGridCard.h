@class MMLiveColorfulLabel, MMTimer, InfiniteLoopContainerView, NSString;

@interface WCFinderLiveHomePageAggregationECGridCard : WCFinderLiveHomePageAggregationBaseCard <InfiniteLoopContainerViewDelegate, WCFinderLiveHomePageAggregationECGridGroupDelegate>

@property (retain, nonatomic) MMLiveColorfulLabel *titleLabel;
@property (retain, nonatomic) MMLiveColorfulLabel *subTitleLabel;
@property (retain, nonatomic) InfiniteLoopContainerView *loopPageView;
@property (retain, nonatomic) MMTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (double)pageSize;
- (void)updateWithCard:(id)a0;
- (void)layoutSubviews;
- (void)stopTimer;
- (void)startTimer;
- (void)changeToNextPage;
- (unsigned long long)currenLoopPageIndex;
- (id)currentGroupEntryBuffer;
- (id)currentGroupJumpBypassBuffer;
- (void)refreshHotSalePag;
- (unsigned long long)numberOfItemsInContainerView:(id)a0;
- (id)containerView:(id)a0 viewForItemAtIndex:(unsigned long long)a1;
- (void)containerView:(id)a0 onTapItemAtIndex:(unsigned long long)a1;
- (void)willDisplay;
- (void)didEndDisplay;
- (void)onAggregationECGridStartHotSellingAnimation:(id)a0;
- (void)onAggregationECGridStopHotSellingAnimation:(id)a0;
- (BOOL)enableAggregationECGridHotSellingAnimation:(id)a0;
- (void).cxx_destruct;

@end
