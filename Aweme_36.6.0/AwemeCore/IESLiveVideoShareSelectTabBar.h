@class NSMutableArray, UIView;

@interface IESLiveVideoShareSelectTabBar : UIView

@property (nonatomic) long long type;
@property (retain, nonatomic) UIView *leftContainer;
@property (retain, nonatomic) UIView *rightContainer;
@property (retain, nonatomic) NSMutableArray *itemViews;
@property (copy, nonatomic) id /* block */ didSelectTabWithIndex;

- (double)rightContainerWidth;
- (double)leftContainerWidth;
- (double)leftRightMargin;
- (void)selectTab:(id)a0;
- (id)createItemViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 index:(long long)a2;
- (void)locateTabAtIndex:(long long)a0;
- (void)setupContainerWithContainerView:(id)a0;
- (void)loadWithTabTitles:(id)a0;
- (void).cxx_destruct;
- (double)padding;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(long long)a1;

@end
