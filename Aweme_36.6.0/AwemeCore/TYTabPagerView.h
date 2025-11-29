@class NSString, TYPagerView, TYTabPagerBar, TYPagerViewLayout;
@protocol TYTabPagerViewDelegate, TYTabPagerViewDataSource;

@interface TYTabPagerView : UIView <TYTabPagerBarDataSource, TYTabPagerBarDelegate, TYPagerViewDataSource, TYPagerViewDelegate>

@property (weak, nonatomic) TYTabPagerBar *tabBar;
@property (weak, nonatomic) TYPagerView *pageView;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) TYPagerViewLayout *layout;
@property (weak, nonatomic) id<TYTabPagerViewDataSource> dataSource;
@property (weak, nonatomic) id<TYTabPagerViewDelegate> delegate;
@property (nonatomic) double tabBarHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)pagerTabBar:(id)a0 widthForItemAtIndex:(long long)a1;
- (void)pagerTabBar:(id)a0 didSelectItemAtIndex:(long long)a1;
- (long long)numberOfItemsInPagerTabBar;
- (id)pagerTabBar:(id)a0 cellForItemAtIndex:(long long)a1;
- (void)pagerView:(id)a0 willAppearView:(id)a1 forIndex:(long long)a2;
- (void)pagerView:(id)a0 didDisappearView:(id)a1 forIndex:(long long)a2;
- (void)pagerView:(id)a0 transitionFromIndex:(long long)a1 toIndex:(long long)a2 animated:(BOOL)a3;
- (void)pagerView:(id)a0 transitionFromIndex:(long long)a1 toIndex:(long long)a2 progress:(double)a3;
- (void)pagerViewWillBeginScrolling:(id)a0 animate:(BOOL)a1;
- (void)pagerViewDidEndScrolling:(id)a0 animate:(BOOL)a1;
- (long long)numberOfViewsInPagerView;
- (id)pagerView:(id)a0 viewForIndex:(long long)a1 prefetching:(BOOL)a2;
- (void)scrollToViewAtIndex:(long long)a0 animate:(BOOL)a1;
- (void)addTabBar;
- (void)registerClass:(Class)a0 forTabBarCellWithReuseIdentifier:(id)a1;
- (void)registerNib:(id)a0 forTabBarCellWithReuseIdentifier:(id)a1;
- (void)registerClass:(Class)a0 forPagerCellWithReuseIdentifier:(id)a1;
- (void)registerNib:(id)a0 forPagerCellWithReuseIdentifier:(id)a1;
- (id)dequeueReusablePagerCellWithReuseIdentifier:(id)a0 forIndex:(long long)a1;
- (void)addPagerView;
- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)updateData;

@end
