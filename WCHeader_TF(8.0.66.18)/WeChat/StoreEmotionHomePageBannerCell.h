@class MMTimer, NSArray, InfiniteLoopContainerView, NSString;

@interface StoreEmotionHomePageBannerCell : UICollectionViewCell <InfiniteLoopContainerViewDelegate>

@property (retain, nonatomic) InfiniteLoopContainerView *pageLoopView;
@property (retain, nonatomic) MMTimer *timer;
@property (copy, nonatomic) id /* block */ tapItemHandler;
@property (retain, nonatomic) NSArray *bannerList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)initTimer;
- (void)onLoop;
- (unsigned long long)numberOfItemsInContainerView:(id)a0;
- (id)containerView:(id)a0 viewForItemAtIndex:(unsigned long long)a1;
- (void)containerView:(id)a0 onTapItemAtIndex:(unsigned long long)a1;
- (void).cxx_destruct;

@end
