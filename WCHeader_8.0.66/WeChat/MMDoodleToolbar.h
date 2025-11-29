@class MMDoodleToolbarItem, NSMutableArray, UIView;

@interface MMDoodleToolbar : MMUIView

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) UIView *itemBar;
@property (retain, nonatomic) MMDoodleToolbarItem *penItem;
@property (weak, nonatomic) id delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)penItemDidClick:(id)a0;
- (void)addToolbarItem:(id)a0;
- (void)removeToolbarItem:(id)a0;
- (void).cxx_destruct;

@end
