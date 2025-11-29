@class NSArray, UIView;
@protocol AWEIMFansAndInteractMergeViewControllerNaviBarDelegate;

@interface AWEIMFansAndInteractMergeViewControllerNaviBar : UIView

@property (readonly, weak, nonatomic) id<AWEIMFansAndInteractMergeViewControllerNaviBarDelegate> delegate;
@property (retain, nonatomic) NSArray *itemViews;
@property (nonatomic) long long currentSelectedIndex;
@property (retain, nonatomic) UIView *tabsContainerView;
@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) UIView *indicatorHelper;
@property (retain, nonatomic) UIView *popoverHelperView;

- (void)showBadgeNumber:(long long)a0 forIndex:(long long)a1;
- (id)initWithItems:(id)a0 selectedIndex:(long long)a1 delegate:(id)a2;
- (void)p_setupTabItems:(id)a0;
- (void)p_setupPopoverHelper;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)setSelectedIndex:(long long)a0;
- (void)setProgress:(double)a0;

@end
