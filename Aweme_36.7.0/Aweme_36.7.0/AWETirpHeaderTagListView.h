@class NSMutableArray, NSString, UIImageView, DitoPageContext, UIScrollView, UIView, UILabel;

@interface AWETirpHeaderTagListView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *albumImageView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *verticalLineView;
@property (retain, nonatomic) UILabel *countingLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) long long tagStyle;
@property (nonatomic) long long preIndex;
@property (nonatomic) long long tagListWidth;
@property (nonatomic) long long totalCount;
@property (copy, nonatomic) NSString *albumText;
@property (retain, nonatomic) NSMutableArray *itemModels;
@property (retain, nonatomic) NSMutableArray *itemViews;
@property (weak, nonatomic) DitoPageContext *context;
@property (copy, nonatomic) id /* block */ showedBlock;
@property (copy, nonatomic) id /* block */ onSelectBlock;
@property (copy, nonatomic) id /* block */ onClickArrowBlock;
@property (copy, nonatomic) id /* block */ onSlideBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)adjustScrollViewOffsetWithPreTabView:(id)a0 currentTabView:(id)a1;
- (void)onClickArrowAction;
- (void)updateLayoutWithMarginRight:(double)a0;
- (double)calculatingWidthWithMarginRight:(double)a0;
- (void)updateSelectedIndex:(long long)a0 marginRight:(double)a1;
- (void)updateSelectedIndex:(long long)a0 picIndex:(long long)a1 marginRight:(double)a2;
- (void)loadData:(id)a0 totalCount:(long long)a1 albumText:(id)a2 tagListWidth:(long long)a3 marginRight:(double)a4;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
