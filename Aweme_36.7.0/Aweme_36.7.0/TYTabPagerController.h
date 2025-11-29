@class TYPagerController, NSString, TYTabPagerBar, TYPagerViewLayout;
@protocol TYTabPagerControllerDataSource, TYTabPagerControllerDelegate;

@interface TYTabPagerController : UIViewController <TYTabPagerBarDataSource, TYTabPagerBarDelegate, TYPagerControllerDataSource, TYPagerControllerDelegate>

@property (retain, nonatomic) TYTabPagerBar *tabBar;
@property (retain, nonatomic) TYPagerController *pagerController;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) TYPagerViewLayout *layout;
@property (weak, nonatomic) id<TYTabPagerControllerDataSource> dataSource;
@property (weak, nonatomic) id<TYTabPagerControllerDelegate> delegate;
@property (nonatomic) double tabBarOrignY;
@property (nonatomic) double tabBarHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfControllersInPagerController;
- (id)pagerController:(id)a0 controllerForIndex:(long long)a1 prefetching:(BOOL)a2;
- (void)pagerController:(id)a0 transitionFromIndex:(long long)a1 toIndex:(long long)a2 animated:(BOOL)a3;
- (void)pagerController:(id)a0 transitionFromIndex:(long long)a1 toIndex:(long long)a2 progress:(double)a3;
- (void)pagerControllerWillBeginScrolling:(id)a0 animate:(BOOL)a1;
- (void)pagerControllerDidEndScrolling:(id)a0 animate:(BOOL)a1;
- (double)pagerTabBar:(id)a0 widthForItemAtIndex:(long long)a1;
- (void)pagerTabBar:(id)a0 didSelectItemAtIndex:(long long)a1;
- (long long)numberOfItemsInPagerTabBar;
- (id)pagerTabBar:(id)a0 cellForItemAtIndex:(long long)a1;
- (void)scrollToControllerAtIndex:(long long)a0 animate:(BOOL)a1;
- (void)addTabBar;
- (void)addPagerController;
- (void)registerClass:(Class)a0 forTabBarCellWithReuseIdentifier:(id)a1;
- (double)fixedTabBarOriginY;
- (void)registerNib:(id)a0 forTabBarCellWithReuseIdentifier:(id)a1;
- (void)registerClass:(Class)a0 forPagerCellWithReuseIdentifier:(id)a1;
- (void)registerNib:(id)a0 forPagerCellWithReuseIdentifier:(id)a1;
- (id)dequeueReusablePagerCellWithReuseIdentifier:(id)a0 forIndex:(long long)a1;
- (void)reloadData;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)updateData;

@end
