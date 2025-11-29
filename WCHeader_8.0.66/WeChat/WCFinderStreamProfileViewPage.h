@class WCFinderAnimationLoadingView, WCFinderProfileTopRefreshView, NSString, WCFinderStreamProfileViewController, UIScrollView, UIView, WCFinderStreamProfileViewScrollProxy;

@interface WCFinderStreamProfileViewPage : NSObject <WCFinderStreamProfileViewPage>

@property (weak, nonatomic) WCFinderStreamProfileViewController *profileViewController;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) BOOL isLoadingView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) WCFinderStreamProfileViewScrollProxy *scrollDelegateProxy;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (readonly, nonatomic) id view;
@property (retain, nonatomic) id viewModel;
@property (readonly, nonatomic) int commentScene;
@property (readonly, nonatomic) BOOL isViewLoaded;
@property (readonly, nonatomic) BOOL isViewAppeared;
@property (nonatomic) double minContentInsetBottom;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (retain, nonatomic) WCFinderProfileTopRefreshView *topRefreshView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)pageScrollViewClass;

- (id)initWithViewModel:(id)a0;
- (void)dealloc;
- (id)getContentView;
- (void)ensureView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void *)frameKVOPath;
- (BOOL)useCustomBackgroundColor;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)adjustScrollViewContentSize;
- (id)loadView;
- (void)onPageSizeDidChanged;
- (void)pageSizeDidChanged;
- (void)viewDidLoad;
- (void)viewWillApear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillPopOrDismiss:(BOOL)a0;
- (double)originY30percent;
- (double)topSafePadding;
- (double)tabHeaderHeight;
- (void)pushVCAnimated:(id)a0;
- (BOOL)isVCClosing;
- (void)onStateLoading;
- (void)onStateNormal;
- (void)configLoading:(BOOL)a0;
- (BOOL)isStateLoading;
- (void)adjustContentViewMinSize;
- (struct CGSize { double x0; double x1; })contentScrollViewMinSize;
- (long long)onJustWatchBannerClickFromVC:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })liveMorphDismissRectWithCustomKey:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)getSortedExposingFeeds;
- (void).cxx_destruct;

@end
