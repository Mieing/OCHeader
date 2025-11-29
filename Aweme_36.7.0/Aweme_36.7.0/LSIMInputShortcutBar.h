@class NSArray, UIScrollView;

@interface LSIMInputShortcutBar : UIView

@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSArray *itemViews;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (copy, nonatomic) id /* block */ didClickAction;

- (id)createItemViewWithModel:(id)a0;
- (void)itemLabelDidTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateItems:(id)a0;

@end
