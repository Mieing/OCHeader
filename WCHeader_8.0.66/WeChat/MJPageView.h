@class NSString, MJPageViewContentView, MJPageViewLayout, MJPageViewTitleView, MJPageViewConfig;
@protocol MJPageViewDataSource, MJPageViewDelegate;

@interface MJPageView : MMUIView <MJPageViewInnerProtocol>

@property (retain, nonatomic) MJPageViewTitleView *titleView;
@property (retain, nonatomic) MJPageViewContentView *contentView;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) long long pageCount;
@property (readonly, nonatomic) MJPageViewLayout *layout;
@property (readonly, nonatomic) MJPageViewConfig *config;
@property (weak, nonatomic) id<MJPageViewDelegate> delegate;
@property (weak, nonatomic) id<MJPageViewDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layout:(id)a1 config:(id)a2;
- (void)setupViews;
- (void)reloadData;
- (void)clear;
- (void)scrollToPageAtIndex:(long long)a0 animated:(BOOL)a1;
- (void)invalidateLayout;
- (long long)visiblePageIndex;
- (id)pageView;
- (void)item:(id)a0 changeSelectedToIndex:(long long)a1 animated:(BOOL)a2;
- (void)contentViewDidScrolled:(double)a0;
- (void)contentViewWillDisplayItemAtIndex:(long long)a0;
- (void)contentViewDidEndDisplayingItemAtIndex:(long long)a0;
- (void).cxx_destruct;

@end
