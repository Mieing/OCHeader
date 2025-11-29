@class NSArray;

@interface WCFinderSelectMenuView : UIView

@property (retain, nonatomic) NSArray *items;
@property (nonatomic) unsigned long long selectedIndex;
@property (copy, nonatomic) id /* block */ selection;
@property (retain, nonatomic) NSArray *itemViews;
@property (nonatomic) double itemViewHeight;
@property (nonatomic) double itemCornerRadius;

- (id)initWithItems:(id)a0 selectedIndex:(unsigned long long)a1;
- (void)makeView;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)batchUpdateItemWidth;
- (double)calculatedHeight;
- (id)selectedItemView;
- (void)onTapItemView:(id)a0;
- (void).cxx_destruct;

@end
