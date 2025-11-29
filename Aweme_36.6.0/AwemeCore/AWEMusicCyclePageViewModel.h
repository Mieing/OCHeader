@class NSMutableDictionary, AWEMusicCyclePageItem;
@protocol AWEMusicCyclePageViewModelDelegate;

@interface AWEMusicCyclePageViewModel : NSObject

@property (retain, nonatomic) AWEMusicCyclePageItem *preItem;
@property (retain, nonatomic) AWEMusicCyclePageItem *currentItem;
@property (retain, nonatomic) AWEMusicCyclePageItem *nextItem;
@property (retain, nonatomic) NSMutableDictionary *reuse;
@property (weak, nonatomic) id<AWEMusicCyclePageViewModelDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;

- (BOOL)canScrollToNext;
- (void)pageWillChangeAnimation:(BOOL)a0;
- (BOOL)canScrollToPre;
- (unsigned long long)currentPageItem:(double)a0;
- (BOOL)updateCurrentItem:(id)a0;
- (void)correctScrollViewOffsetIfNeed:(id)a0;
- (void)onScrollDidEnd:(id)a0 isManual:(BOOL)a1;
- (void)dropPageItem:(id)a0;
- (id)reusePageItem:(id)a0;
- (void)initViewItems:(unsigned long long)a0;
- (void)addPageItemViews;
- (void)addPageItemView:(id)a0;
- (id)pageItemOfPosition:(unsigned long long)a0;
- (void)onScrolling:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reloadData:(BOOL)a0;
- (void)layoutItems;

@end
