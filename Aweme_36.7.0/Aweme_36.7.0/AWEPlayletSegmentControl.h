@class NSArray, NSString, AWESlidingViewController, UIScrollView, UIView;

@interface AWEPlayletSegmentControl : UIView <UIScrollViewDelegate, AWESlidingTabbarProtocol>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *indicatorView;
@property (copy, nonatomic) NSArray *itemViews;
@property (copy, nonatomic) NSArray *itemModels;
@property (nonatomic) BOOL ignoreProgressEvent;
@property (nonatomic) long long defaultIndex;
@property (nonatomic) long long contentWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) AWESlidingViewController *slidingViewController;
@property (nonatomic) long long selectedIndex;

- (void)trackShowWithIndex:(long long)a0;
- (double)totalContentWidth;
- (id)initWithItems:(id)a0 defaultIndex:(long long)a1;
- (void)selectedIndex:(long long)a0 animated:(BOOL)a1;
- (void)trackClickWithIndex:(long long)a0;
- (void)setupSubViews;
- (void)reloadData;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
