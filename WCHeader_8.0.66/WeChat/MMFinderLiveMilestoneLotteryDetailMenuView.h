@class NSArray, NSString, MMFinderLiveMilestoneLotteryViewModel, UIScrollView, UIView, UILabel;

@interface MMFinderLiveMilestoneLotteryDetailMenuView : MMFinderLiveMilestoneLotteryDetailSubView <UIScrollViewDelegate>

@property (retain, nonatomic) NSArray *items;
@property (nonatomic) struct CGSize { double width; double height; } lastLayoutSize;
@property (retain, nonatomic) UIView *itemContainerView;
@property (retain, nonatomic) UIScrollView *itemScrollView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) BOOL isFirstLayout;
@property (retain, nonatomic) MMFinderLiveMilestoneLotteryViewModel *vm;
@property (readonly, nonatomic) double currentScrollOffset;
@property (nonatomic) double initScrollOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0 items:(id)a1;
- (id)getMenuItems;
- (void)commonInitWithTitle:(id)a0 subtitle:(id)a1;
- (void)layoutSubviews;
- (void)autoScrollToLatestLottery;
- (void)reloadGradientLayerIfNeeded;
- (void)rebuildItemViews;
- (id)buildViewWithItem:(id)a0 index:(unsigned long long)a1;
- (void)onItemButtonClicked:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
