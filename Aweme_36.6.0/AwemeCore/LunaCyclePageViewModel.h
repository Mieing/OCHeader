@class NSMutableDictionary, LunaCyclePageItem;
@protocol LunaCyclePageViewModelDelegate;

@interface LunaCyclePageViewModel : NSObject

@property (weak, nonatomic) id<LunaCyclePageViewModelDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (retain, nonatomic) LunaCyclePageItem *preItem;
@property (retain, nonatomic) LunaCyclePageItem *currentItem;
@property (retain, nonatomic) LunaCyclePageItem *nextItem;
@property (retain, nonatomic) NSMutableDictionary *reuse;

- (BOOL)canScrollToNext;
- (void)pageWillChangeAnimation:(BOOL)a0;
- (BOOL)canScrollToPre;
- (unsigned long long)currentPageItem:(double)a0;
- (BOOL)updateCurrentItem:(id)a0;
- (void)correctScrollViewOffsetIfNeed:(id)a0;
- (void)onScrollDidEnd:(id)a0 isManual:(BOOL)a1;
- (void)dropPageItem:(id)a0;
- (id)reusePageItem:(id)a0;
- (void)addPageItemViews;
- (void)addPageItemView:(id)a0;
- (id)pageItemOfPosition:(unsigned long long)a0;
- (void)onScrolling:(id)a0;
- (void)initViewItems;
- (void).cxx_destruct;
- (id)init;
- (void)reloadData:(BOOL)a0;
- (void)layoutItems;

@end
