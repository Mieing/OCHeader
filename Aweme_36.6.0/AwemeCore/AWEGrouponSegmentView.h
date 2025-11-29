@class AWEGrouponSegmentItemView, NSArray, NSString, UIScrollView, NSMutableArray, UIView;

@interface AWEGrouponSegmentView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *selectedLineView;
@property (retain, nonatomic) NSMutableArray *itemViewArray;
@property (retain, nonatomic) NSArray *tabLists;
@property (copy, nonatomic) id /* block */ tapHandler;
@property (copy, nonatomic) id /* block */ scrollHandler;
@property (copy, nonatomic) id /* block */ dragHandler;
@property (nonatomic) BOOL isAutoScroll;
@property (nonatomic) BOOL isDragging;
@property (nonatomic) BOOL isUniformDistribution;
@property (nonatomic) BOOL hasRightToLeftDrag;
@property (nonatomic) double dragBeginX;
@property (nonatomic) double firstItemRightMargin;
@property (retain, nonatomic) UIView *scrollContentView;
@property (retain, nonatomic) AWEGrouponSegmentItemView *recommendView;
@property (retain, nonatomic) AWEGrouponSegmentItemView *scrollRecommendView;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) BOOL isSelectedLineMaskWithLeftFixed;
@property (nonatomic) BOOL isSelectedLineInScrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUpSelectedLineWithItem:(id)a0;
- (BOOL)isUniformDistributionWithTabLists:(id)a0;
- (double)getContentWidthSumWithTablists:(id)a0;
- (double)getWidthWithTabModel:(id)a0;
- (double)itemLayoutSpacingWithTabLists:(id)a0;
- (long long)findIndexForItem:(id)a0;
- (void)setUpLeftRecommendViewWithTabModel:(id)a0 scrollItemView:(id)a1;
- (void)scrollToLeft;
- (void)resetScrollContentView;
- (void)changeItemViewToFixLeft;
- (BOOL)isItemVisible:(id)a0;
- (id)initWithTapHandler:(id /* block */)a0 scrollHandler:(id /* block */)a1 dragHandler:(id /* block */)a2;
- (void)configSegmentViewWithSelectedIndex:(long long)a0 previouseIndex:(long long)a1;
- (void)configSegmentViewWithTablists:(id)a0;
- (void)tryScrollingToItemWithIndex:(long long)a0 animated:(BOOL)a1;
- (id)indexListForVisibleItem;
- (id)findSegmentViewWithIndex:(long long)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setupUI;

@end
