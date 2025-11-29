@class UIColor, NSMapTable, NSString, NSMutableSet, UIScrollView, NSMutableArray;
@protocol WCFinderShowcasePagingViewDatasource, WCFinderShowcasePagingViewDelegate;

@interface WCFinderShowcasePagingView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double padding;
@property (nonatomic) long long pagingNumber;
@property (retain, nonatomic) Class itemClass;
@property (nonatomic) double cardCorner;
@property (retain, nonatomic) UIColor *cardColor;
@property (retain, nonatomic) UIColor *highlightColor;
@property (nonatomic) BOOL showPlaceholder;
@property (weak, nonatomic) id<WCFinderShowcasePagingViewDatasource> datasource;
@property (weak, nonatomic) id<WCFinderShowcasePagingViewDelegate> delegate;
@property (nonatomic) long long count;
@property (nonatomic) struct CGSize { double width; double height; } cacheSize;
@property (nonatomic) struct CGSize { double width; double height; } cacheItemSize;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } oldCheckRange;
@property (retain, nonatomic) NSMutableArray *cacheViews;
@property (retain, nonatomic) NSMapTable *cell2IndexMap;
@property (retain, nonatomic) NSMapTable *index2CellMap;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) NSMutableSet *exposedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)reloadData;
- (void)didMoveToSuperview;
- (void)applyItemsLayout;
- (id)fetchView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)itemWidth;
- (void)handleLongPress:(id)a0;
- (void)_onHightlightCell:(id)a0;
- (void)_endHightlightCell:(id)a0;
- (void)_onTapCell:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
