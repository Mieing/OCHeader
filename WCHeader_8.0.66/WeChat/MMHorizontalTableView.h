@class NSString, NSMutableSet, NSMutableArray;
@protocol MMHorizontalTableViewDataSource, MMHorizontalTableViewDelegate;

@interface MMHorizontalTableView : UIScrollView <UIScrollViewDelegate> {
    NSMutableSet *recycledCells;
    NSMutableSet *visibleCells;
    NSMutableArray *originPointList;
}

@property (weak, nonatomic) id<MMHorizontalTableViewDelegate> viewDelegate;
@property (weak, nonatomic) id<MMHorizontalTableViewDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)reloadData;
- (float)contentSizeWidth;
- (void)calculateAllCellOrigin;
- (void)tileView;
- (id)dequeueReusableCellWithIdentifier:(id)a0;
- (BOOL)isDisplayingCellForIndex:(unsigned long long)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
