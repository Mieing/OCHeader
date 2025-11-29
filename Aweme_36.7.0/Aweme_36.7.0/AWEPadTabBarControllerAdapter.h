@class NSString, AWEBinding, UIView;
@protocol AWEPadSplitScreenStatusDelegate;

@interface AWEPadTabBarControllerAdapter : NSObject <AWEPadTabBarControllerAdapter>

@property (nonatomic) BOOL enableRotateHMDInfo;
@property (nonatomic) BOOL isTabControllerAppear;
@property (weak, nonatomic) UIView *lastFloatingBar;
@property (nonatomic) BOOL hasFirstLayout;
@property (retain, nonatomic) AWEBinding *frameBind;
@property (retain, nonatomic) id<AWEPadSplitScreenStatusDelegate> splitScreenDelegate;
@property (nonatomic) double tabBarRightOffset;
@property (nonatomic) BOOL needLayoutOnOpenSplit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;
+ (id)GetAdapter;
+ (id)sharedInstance;

- (void)awe_tabBarDidlayoutSubviews;
- (void)awe_tabBarWilllayoutSubviews;
- (void)updateFloatLayoutIfNeed;
- (void)awe_viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewControllerTransitionNotification:(id)a0;
- (BOOL)enableFixPadOS26SplitTabBarLayout;
- (void)tabBarVCDidAppear;
- (void)tabBarVCDidDisAppear;
- (id)tabContainer;
- (BOOL)enableFixPadOS26TabBarLayout;
- (id)showTypeWithWindowWidth:(double)a0 windowHeight:(double)a1;
- (long long)enableFixPadOS26ScrollViewMask;
- (id)getSubViewWithView:(id)a0 subViewClassName:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)tabBar;
- (void)dealloc;
- (id)weakTarget;
- (void)addObservers;

@end
