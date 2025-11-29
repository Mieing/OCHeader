@class NSMutableArray, UIView;
@protocol MMActionSheetScrollViewDelegate;

@interface MMActionSheetScrollView : UIScrollView

@property (retain, nonatomic) NSMutableArray *itemViewArray;
@property (weak, nonatomic) id<MMActionSheetScrollViewDelegate> actionSheetDelegate;
@property (retain, nonatomic) UIView *customView;
@property (readonly, nonatomic) double iconMargin;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)reloadItems:(id)a0 itemDelegate:(id)a1;
- (BOOL)touchesShouldCancelInContentView:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
