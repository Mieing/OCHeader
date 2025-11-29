@class NSMutableArray, IESGCPPopoverMenuContentView, UIView;

@interface IESGCPPopoverMenu : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) IESGCPPopoverMenuContentView *contentView;
@property (retain, nonatomic) NSMutableArray *itemViews;
@property (copy, nonatomic) id /* block */ onHide;

- (void)setupItemViewsWithItems:(id)a0;
- (void)setupContentView:(id)a0 fillColor:(id)a1;
- (void)adjustContentViewPositionIn:(id)a0;
- (id)initWithAnchorPoint:(struct CGPoint { double x0; double x1; })a0 item:(id)a1;
- (id)initWithAnchorPoint:(struct CGPoint { double x0; double x1; })a0 contentView:(id)a1 fillColor:(id)a2;
- (void)showOnContainer:(id)a0;
- (void).cxx_destruct;
- (void)hide;
- (void)setupSubviews;
- (void)tap;

@end
