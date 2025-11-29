@class MMLiveColorfulLabel, MMTimer, InfiniteLoopContainerView, NSString;

@interface WCFinderLiveHomePageAggregationAnchorCarouselCard : WCFinderLiveHomePageAggregationBaseCard <InfiniteLoopContainerViewDelegate>

@property (retain, nonatomic) InfiniteLoopContainerView *loopPageView;
@property (retain, nonatomic) MMLiveColorfulLabel *titleLabel;
@property (retain, nonatomic) MMTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initViews;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithCard:(id)a0;
- (double)pageHeight;
- (BOOL)isSmallScreen;
- (void)stopTimer;
- (void)startTimer;
- (void)changeToNextPage;
- (id)currentGroupEntryBuffer;
- (unsigned long long)numberOfItemsInContainerView:(id)a0;
- (id)containerView:(id)a0 viewForItemAtIndex:(unsigned long long)a1;
- (void)containerView:(id)a0 onTapItemAtIndex:(unsigned long long)a1;
- (void)willDisplay;
- (void)didEndDisplay;
- (void).cxx_destruct;

@end
