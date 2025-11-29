@class UILabel, UIImageView;

@interface AWEMVFindBackModelAfterRefreshView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *rightImageView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } interactionZoneEnlargeInsets;

- (BOOL)canInteractToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupViews;

@end
