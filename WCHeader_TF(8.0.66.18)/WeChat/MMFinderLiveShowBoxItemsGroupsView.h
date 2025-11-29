@class MMFinderLiveShowBoxItemsGroupsViewTuple, NSArray, NSTimer, MMFinderLiveShowBoxItemsViewConfig;

@interface MMFinderLiveShowBoxItemsGroupsView : UIView

@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSArray *tuples;
@property (retain, nonatomic) MMFinderLiveShowBoxItemsGroupsViewTuple *current;
@property (nonatomic) double interval;
@property (retain, nonatomic) MMFinderLiveShowBoxItemsViewConfig *config;
@property (copy, nonatomic) id /* block */ onBecomeNoVisibleItemsForLimitDiscountInvalid;
@property (readonly, nonatomic) NSArray *visibleShowBoxItems;

- (void)updateWithGroups:(id)a0;
- (void)layoutSubviews;
- (void)updateTimer;
- (void)tryDisplayNext;
- (void)switchTo:(id)a0;
- (void)cleanInvalidLimitDiscountIn:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
