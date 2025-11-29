@class NSMutableArray, NSString, UIImageView, UIScrollView, UIView, UILabel;

@interface AWEPOIHeaderContentTabView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *verticalLineView;
@property (retain, nonatomic) UILabel *moreLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) long long preIndex;
@property (nonatomic) long long tagListWidth;
@property (retain, nonatomic) NSMutableArray *itemModels;
@property (retain, nonatomic) NSMutableArray *itemViews;
@property (nonatomic) double marginRight;
@property (copy, nonatomic) id /* block */ showedBlock;
@property (copy, nonatomic) id /* block */ onSelectBlock;
@property (copy, nonatomic) id /* block */ onClickArrowBlock;
@property (copy, nonatomic) id /* block */ onSlideBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSelectedIndex:(long long)a0;
- (void)adjustScrollViewOffsetWithPreTabView:(id)a0 currentTabView:(id)a1;
- (void)loadData:(id)a0 tagListWidth:(long long)a1 marginRight:(double)a2;
- (void)updateSelectedIndex:(long long)a0 innerIndex:(long long)a1 updateInner:(BOOL)a2 shouldReset:(BOOL)a3;
- (void)updateWidthWithContentWidth:(double)a0;
- (id)resizableBgImage;
- (void)onClickMoreAction;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
