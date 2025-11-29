@class UIStackView, UIScrollView, NSArray, DUXTabBarContainerController, UIView, DUXTabBarUIConfigModel, UIColor, NSString, DUXDivider;

@interface DUXTabBar : UIView <DUXTabBarItemViewDelegate, DUXTabBarProtocol>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIStackView *contentView;
@property (retain, nonatomic) UIView *selectIndicatorView;
@property (retain, nonatomic) DUXDivider *separatorLineView;
@property (nonatomic) double itemMeanWidth;
@property (nonatomic) double lastContentOffset;
@property (nonatomic) BOOL switchByScroll;
@property (nonatomic) BOOL codeChangeSelected;
@property (retain, nonatomic) DUXTabBarUIConfigModel *uiConfig;
@property (nonatomic) BOOL scrollable;
@property (nonatomic) BOOL autoFixWidth;
@property (nonatomic) BOOL showDivider;
@property (retain, nonatomic) NSArray *tabs;
@property (nonatomic) long long selectedIndex;
@property (copy, nonatomic) id /* block */ selectedChangeBlock;
@property (weak, nonatomic) DUXTabBarContainerController *tabBarContainer;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long enlargeType;
@property (retain, nonatomic) UIColor *indicatorColor;
@property (nonatomic) double indicatorCornerRadius;
@property (nonatomic) long long selectIndicatorType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aDUXTabBarAdapterClass;

- (void)updateFrameIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 container:(id)a1 tabs:(id)a2 scrollable:(BOOL)a3 type:(long long)a4;
- (id)initWithContainer:(id)a0 tabs:(id)a1 scrollable:(BOOL)a2 type:(long long)a3;
- (void)itemViewDidClick:(id)a0;
- (void)slidingControllerDidScroll:(id)a0 animated:(BOOL)a1;
- (void)setupTabBar;
- (void)updateSelectedIndex:(long long)a0;
- (void)setupUIByType;
- (void)updateTabBarItemWidth;
- (void)setSelectIndicatorViewUI;
- (void)updateSelectedView:(id)a0;
- (void)updateSelectedLineFrameWithAnimated;
- (void)slidingControllerDidFinishScrollAnimation:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 container:(id)a1 tabs:(id)a2 scrollable:(BOOL)a3 type:(long long)a4 enlargeType:(unsigned long long)a5;
- (id)aDUXTabBarAdapter;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
