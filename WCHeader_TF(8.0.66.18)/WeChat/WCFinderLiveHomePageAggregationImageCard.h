@class MMTimer, InfiniteLoopContainerView, NSString, UIView;

@interface WCFinderLiveHomePageAggregationImageCard : WCFinderLiveHomePageAggregationBaseCard <InfiniteLoopContainerViewDelegate>

@property (retain, nonatomic) UIView *headInfoBgView;
@property (retain, nonatomic) InfiniteLoopContainerView *loopPageView;
@property (retain, nonatomic) MMTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initViews;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithCard:(id)a0;
- (void)stopTimer;
- (void)startTimer;
- (void)changeToNextPage;
- (unsigned long long)numberOfItemsInContainerView:(id)a0;
- (id)containerView:(id)a0 viewForItemAtIndex:(unsigned long long)a1;
- (void)containerView:(id)a0 onTapItemAtIndex:(unsigned long long)a1;
- (void)willDisplay;
- (void)didEndDisplay;
- (void).cxx_destruct;

@end
