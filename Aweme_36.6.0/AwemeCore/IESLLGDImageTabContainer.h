@class NSMutableArray, NSString, IESLLGDImageTabModel, UIScrollView, UILabel, UIView;

@interface IESLLGDImageTabContainer : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *verticalLineView;
@property (retain, nonatomic) UILabel *countingLabel;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) long long preIndex;
@property (nonatomic) long long totalCount;
@property (retain, nonatomic) NSMutableArray *itemModels;
@property (retain, nonatomic) NSMutableArray *itemViews;
@property (copy, nonatomic) id /* block */ onSelectBlock;
@property (readonly, nonatomic) IESLLGDImageTabModel *tabModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSelectedIndex:(long long)a0;
- (BOOL)isTabEmpty;
- (BOOL)judgeTabInfoHasChange:(id)a0 totalCount:(long long)a1;
- (long long)tagListWidth;
- (id)countLabelText:(long long)a0;
- (void)updateSelectedIndex:(long long)a0 picIndex:(long long)a1 innerSelect:(BOOL)a2;
- (void)adjustScrollViewOffsetWithPreTabView:(id)a0 currentTabView:(id)a1;
- (void)loadData:(id)a0 totalCount:(long long)a1;
- (void)updateSelectedIndex:(long long)a0 picIndex:(long long)a1;
- (void)updatePicIndex:(long long)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (double)containerHeight;
- (double)containerWidth;

@end
