@class AWESidebarPanGestureRecognizer, NSString, UIView, AWELeftSideBarHostParams, UIViewController;
@protocol AWESideBarViewControllerProtocol, AWELeftSideBarTransitionObjectDelegateProtocol;

@interface AWELeftSideBarAddChildTransitionObject : NSObject <UIGestureRecognizerDelegate, AWEPadUIAdaptionViewTransitionObserver, AWELeftSideBarTransitionObjectProtocol>

@property (retain, nonatomic) AWELeftSideBarHostParams *hostParams;
@property (weak, nonatomic) id<AWELeftSideBarTransitionObjectDelegateProtocol> delegate;
@property (retain, nonatomic) AWESidebarPanGestureRecognizer *showPanGesture;
@property (retain, nonatomic) AWESidebarPanGestureRecognizer *hidePanGesture;
@property (retain, nonatomic) UIView *sideBarMenuView;
@property (nonatomic) double sidebarMoveOffsetX;
@property (retain, nonatomic) UIViewController<AWESideBarViewControllerProtocol> *sideBarViewController;
@property (nonatomic) long long sideBarStatus;
@property (nonatomic) BOOL sidebarAnimating;
@property (nonatomic) long long leftSideBarOpenOperateMethod;
@property (nonatomic) double openBeginTime;
@property (nonatomic) double openEndTime;
@property (readonly, nonatomic) long long openType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadLeftSideBarAdapterClass;

- (void)awe_viewController:(id)a0 willTransitionToSize:(struct CGSize { double x0; double x1; })a1 transitionCoordinator:(id)a2;
- (id)getTabBarController;
- (double)leftSideBarWidth;
- (id)aAWEPadLeftSideBarAdapter;
- (void)dispatch_sideBarHostViewDidDisappear;
- (BOOL)awe_slidingScrollViewShouldScrollWithPan:(id)a0;
- (void)dismissAnimation:(id)a0;
- (void)closeSideBarWithParams:(id)a0 completion:(id /* block */)a1;
- (void)p_sideBarWillOpenPerfMonitor;
- (id)generateSideBarViewController;
- (void)showLeftSideBarViewController;
- (void)tryReopenWithConfig:(id)a0 completion:(id /* block */)a1;
- (void)leftSideBarAnimationWithOriginX:(double)a0 duration:(double)a1 showSideBar:(BOOL)a2 isOpen:(BOOL)a3 operateMethod:(long long)a4 completion:(id /* block */)a5;
- (void)track_leftSideBarStartIsOpen:(BOOL)a0;
- (void)monitor_leftSideBarStartIsOpen:(BOOL)a0 success:(BOOL)a1 operateMethod:(long long)a2;
- (double)p_rightSideHotEdge;
- (unsigned long long)p_directionForPan:(id)a0;
- (void)handlePanGestureSideBarIsOpen:(BOOL)a0 gestureRecognizer:(id)a1;
- (void)updateCurrentViewWithOriginX:(double)a0;
- (void)p_sideBarCancelOpenPerfMonitor;
- (void)__leftSideBarWithoutAnimationWithOriginX:(double)a0 showSideBar:(BOOL)a1 isOpen:(BOOL)a2 operateMethod:(long long)a3;
- (void)p_sideBarDidOpenPerfMonitor;
- (void)hideLeftSideBarViewController;
- (id)getLeftSideBarOpenOperateMethodTrackName;
- (void)handleHideSliderPanGesture:(id)a0;
- (void)_updateTabBarSnapshot;
- (id)initWithHostParams:(id)a0 withDelegate:(id)a1;
- (void)updateWithHostParams:(id)a0;
- (void)openSideBarWithParams:(id)a0 completion:(id /* block */)a1;
- (long long)leftSideBarStatus;
- (id)getLeftSideBarViewController;
- (void)entranceTouchesBegan;
- (void)entranceTapFailed;
- (void)handleShowSliderPanGesture:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dealloc;

@end
