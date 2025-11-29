@class DitoLynxComponentViewModelV2, NSTimer, UIScrollView, UIView, DitoLynxExtensionV2;
@protocol DitoLynxContainerProtocol;

@interface DitoLynxComponentViewV2 : DitoComponentView

@property (weak, nonatomic) DitoLynxComponentViewModelV2 *viewModel;
@property (readonly, weak, nonatomic) DitoLynxExtensionV2 *lynxExtensionV2;
@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) UIScrollView *lynxNestedScrollView;
@property (retain, nonatomic) UIView<DitoLynxContainerProtocol> *lynxContainerView;

- (void)updateViewModel:(id)a0;
- (id)nestedScrollView;
- (id)findNestedScrollView;
- (BOOL)nestedScrollBoundaryDockingWhenFling;
- (void)nestedScrollStateChange:(unsigned long long)a0 newState:(unsigned long long)a1;
- (id)viscousDragItemList;
- (id)subviewForSticky;
- (void)setupPresetHeight:(double)a0 componentWidth:(double)a1;
- (void)cancelPresetHeight;
- (id)bfsSearchLynxListView;
- (id)fetchLynxContainer;
- (void)updateViewsOverflowVisible;
- (void)lynxDidUpdate;
- (id)loadLynxContainer;
- (void)tryUpdateNestedScrollConfig;
- (BOOL)fetchNestedScrollViewScrollEnabled;
- (id)findViscousDragItemListFromLynxView:(id)a0 idList:(id)a1;
- (id)viscousDragItemFromLynxView:(id)a0 viewID:(id)a1;
- (id)sideBarScrollView;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
