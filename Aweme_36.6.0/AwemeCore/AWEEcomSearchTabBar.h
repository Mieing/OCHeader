@class NSArray, NSString, UIScrollView, NSMutableArray, AWEEcomSearchTabBarConfig;
@protocol AWEEcomSearchTabBarDelegate;

@interface AWEEcomSearchTabBar : UIView <AWEEcomSearchTabBarItemDelegate, UIScrollViewDelegate> {
    long long _fromIndex;
}

@property (retain, nonatomic) NSMutableArray *items;
@property (copy, nonatomic) NSArray *tabList;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) AWEEcomSearchTabBarConfig *config;
@property (weak, nonatomic) id<AWEEcomSearchTabBarDelegate> delegate;
@property (nonatomic) BOOL scrollEnabled;
@property (readonly, nonatomic) long long interactionState;
@property (copy, nonatomic) id /* block */ interactiveTransitionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tabButtonClicked:(id)a0;
- (void)onButtonAccessibilityFocus:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tabList:(id)a1 config:(id)a2;
- (void)updateScrollViewScrollEnable;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setupSubviews;

@end
