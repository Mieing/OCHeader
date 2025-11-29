@class MMScrollView, UIColor, NSString, UIView, WCFinderTabPageModel, NSMutableArray;
@protocol WCFinderTabPageViewBasicProtocol;

@interface WCFinderTabPageViewController : MMUIViewController <UIScrollViewDelegate, WCFinderTabPageViewBasicViewDelegate>

@property (retain, nonatomic) NSMutableArray *tabPageModelArray;
@property (weak, nonatomic) MMScrollView *tabScrollView;
@property (retain, nonatomic) WCFinderTabPageModel *currentSelectPageModel;
@property (retain, nonatomic) UIView<WCFinderTabPageViewBasicProtocol> *tabView;
@property (nonatomic) unsigned long long hasAddViewFlag;
@property (nonatomic) BOOL enableScrollPage;
@property (nonatomic) double tabMargin;
@property (retain, nonatomic) UIColor *scrollViewBackgroundColor;
@property (nonatomic) double fontSize;
@property (nonatomic) double topInset;
@property (nonatomic) double bottomInset;
@property (nonatomic) double lineMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTabPageModelArray:(id)a0;
- (id)initWithTabPageModelArray:(id)a0 tabHeaderView:(id)a1;
- (void)setTabName:(id)a0 atIndex:(unsigned long long)a1;
- (void)resetWithTabPageModelArray:(id)a0 toIndex:(unsigned long long)a1;
- (void)resetWithTabPageModelArray:(id)a0 toIndex:(unsigned long long)a1 alignment:(long long)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)viewWillBeDismissed:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (void)viewWillPush:(BOOL)a0;
- (void)viewDidPush:(BOOL)a0;
- (void)viewWillPresent:(BOOL)a0;
- (void)viewDidPresent:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (id)genTabHeaderViewWithTabPageModelArray:(id)a0;
- (id)genTabHeaderViewWithTabPageModelArray:(id)a0 alignment:(long long)a1;
- (void)configureTabPageHeaderView:(id)a0;
- (void)viewDidLoad;
- (void)reloadToIndex:(unsigned long long)a0;
- (void)setUpTabScrollView;
- (void)childViewControllerAppear:(id)a0;
- (void)childViewControllerDisAppear:(id)a0;
- (void)_childViewTransitionIsAppear:(BOOL)a0 childViewController:(id)a1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)setSelectVCIndex:(unsigned long long)a0;
- (void)_setSelectVCIndex:(unsigned long long)a0 shouldScroll:(BOOL)a1 isTriggerByUser:(BOOL)a2;
- (void)switchTabPageViewControllerFrom:(id)a0 to:(id)a1 isTriggerByUser:(BOOL)a2;
- (void)addChildViewControllerWithIndex:(unsigned long long)a0;
- (void)removeChildViewControllerWithIndex:(unsigned long long)a0;
- (void)removeAllChildViewController;
- (void)replaceTabViewControllerWith:(id)a0 AtIndex:(unsigned long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)_addChildViewToScrollViewWithIndex:(unsigned long long)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)_hasChildViewDidAddWithIndex:(unsigned long long)a0;
- (void)finderTabPageView:(id)a0 didSelectIndex:(unsigned long long)a1 isTriggerByUser:(BOOL)a2;
- (void).cxx_destruct;

@end
