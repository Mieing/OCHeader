@class UIScrollView, NSString, NSDictionary, AWELifeMallFeedsComponentView, AWELifeFeedsViewController, AWELifeFeedsLynxNestedItem, UIView;

@interface AWELifeMallFeedsComponentViewModel : DitoComponentViewModel <AWEGrouponLifeFeedsViewControllerDelegate, AWELifeFeedsLynxNestedItemDelegate>

@property (copy, nonatomic) NSDictionary *sourceData;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL pageFirstScreenDidLoad;
@property (nonatomic) BOOL didFetchData;
@property (copy, nonatomic) NSString *sessionID;
@property (retain, nonatomic) AWELifeFeedsViewController *lifeFeedsVC;
@property (nonatomic) double layoutWidth;
@property (nonatomic) BOOL needShow;
@property (retain, nonatomic) AWELifeFeedsLynxNestedItem *nestedItem;
@property (weak, nonatomic) AWELifeMallFeedsComponentView *cell;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIScrollView *nestedScrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindStateAndAction;
- (BOOL)skipNestedScrollWithNestedItem:(id)a0;
- (void)didBindMainData:(id)a0;
- (void)fetchMainDataFailure:(id)a0;
- (void)beBindToView;
- (void)tryFetchData;
- (void)didBandPageViewModel;
- (BOOL)canUsePreFetchData;
- (void)createLifeFeedsViewControllerWithPageScene:(id)a0 sessionId:(id)a1;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)pageView:(id)a0 didScroll:(id)a1;
- (void)pageView:(id)a0 scrollViewWillBeginDragging:(id)a1;
- (void)pageView:(id)a0 scrollViewWillBeginDecelerating:(id)a1;
- (void)pageView:(id)a0 scrollViewDidEndDragging:(id)a1 willDecelerate:(BOOL)a2;
- (void)pageView:(id)a0 scrollViewWillEndDragging:(id)a1 withVelocity:(struct CGPoint { double x0; double x1; })a2 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a3;
- (void)pageView:(id)a0 scrollViewDidEndDecelerating:(id)a1;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (void)scrollViewDidScroll:(id)a0;

@end
