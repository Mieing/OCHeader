@class NSMutableDictionary, MMUIScrollView, NSString, NSMutableArray;
@protocol HorizontalTableViewDelegate, HorizontalTableViewDataSource;

@interface HorizontalTableView : MMUIView <UIScrollViewDelegate>

@property (retain, nonatomic) MMUIScrollView *m_scrollView;
@property (retain, nonatomic) NSMutableArray *m_cellFrames;
@property (retain, nonatomic) NSMutableDictionary *m_reusableCellListDic;
@property (retain, nonatomic) NSMutableArray *m_visibleCells;
@property (weak, nonatomic) id<HorizontalTableViewDataSource> m_dataSource;
@property (weak, nonatomic) id<HorizontalTableViewDelegate> m_viewDelegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_visibleRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDataSource:(id)a0;
- (void)setViewDelegate:(id)a0;
- (id)dequeueReusableCellWithIdentifier:(id)a0;
- (void)inqueueReusableWithCell:(id)a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)setScrollViewContentEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)reloadData;
- (BOOL)rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atLeftOf:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atRightOf:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atRangeOf:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)relayoutScrollViewWithOffset:(double)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void)scrollViewDidTap:(id)a0;
- (void)addCellAtIndex:(long long)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
