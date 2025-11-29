@class NSMutableArray, UIView;

@interface BDReaderLineLevelView : UIView

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableArray *itemViews;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ tapRectItemBlock;
@property (nonatomic) long long level;

- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (void)removeItem:(id)a0;
- (void)removeAllItems;
- (void)draw;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end
