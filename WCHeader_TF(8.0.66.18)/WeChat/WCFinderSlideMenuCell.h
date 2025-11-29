@class NSArray, NSString, UIView, UIPanGestureRecognizer;

@interface WCFinderSlideMenuCell : UICollectionViewCell <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *menuView;
@property (retain, nonatomic) NSArray *menuInfos;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) struct CGPoint { double x; double y; } gestureOrigin;
@property (nonatomic) BOOL menuOpened;
@property (nonatomic) BOOL closedOtherMenu;
@property (copy, nonatomic) NSArray *menuItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)displayContentView;
- (void)prepareForReuse;
- (void)setupGesture:(BOOL)a0;
- (void)createMenuInfo;
- (void)onPan:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)tryOpenMenu:(double)a0;
- (void)tryCloseMenu:(double)a0;
- (void)exposeMenuOpened;
- (void)closeMenu;
- (void)_cleanMenuViews;
- (void)_closeOtherCellMenu;
- (id)findCollectionView;
- (id)recardMenuIdentify;
- (void)recardMeuOpened;
- (void)removeSelfRecardMenuOpened;
- (id)menuIdentify;
- (void)ensureMenuView;
- (void)layoutMenuViewsWthenExpand;
- (void)resetMenuViewLayout;
- (void)layoutEachMenuSubviews:(id)a0;
- (double)totalWidth;
- (void)updateMenuPosition;
- (void)onTap:(id)a0;
- (void)invokeTarget:(id)a0 action:(SEL)a1 menu:(id)a2;
- (void).cxx_destruct;

@end
