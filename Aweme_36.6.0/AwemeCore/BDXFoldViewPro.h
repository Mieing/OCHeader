@class BDXPagerView, NSString, BDXPageBaseView, UIView;
@protocol BDXFoldViewProDelegate;

@interface BDXFoldViewPro : UIView <BDXPagerViewDelegate, BDXPagerMainTableViewGestureDelegate, BDXLynxRefreshViewConfigInject>

@property (retain, nonatomic) BDXPagerView *foldView;
@property (retain, nonatomic) BDXPageBaseView *pageView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *barView;
@property (nonatomic) double pinSectionHeaderOffset;
@property (weak, nonatomic) id<BDXFoldViewProDelegate> delegate;
@property (copy, nonatomic) id /* block */ refreshViewInjectBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupRefreshViewIfNeeded;
- (void)setupViewsName;
- (unsigned long long)tableHeaderViewHeightInPagerView:(id)a0;
- (id)tableHeaderViewInPagerView:(id)a0;
- (unsigned long long)heightForPinSectionHeaderInPagerView:(id)a0;
- (id)viewForPinSectionHeaderInPagerView:(id)a0;
- (long long)numberOfListsInPagerView:(id)a0;
- (id)pagerView:(id)a0 initListAtIndex:(long long)a1;
- (void)pagerView:(id)a0 mainTableViewDidScroll:(id)a1;
- (void)pagerView:(id)a0 listScrollViewDidScroll:(id)a1;
- (BOOL)mainTableViewGestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)refreshViewInjection:(id /* block */)a0;
- (void)setupFoldView:(BOOL)a0 scrollBarEnable:(BOOL)a1 allowVerticalBounce:(BOOL)a2 isRTL:(BOOL)a3;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
