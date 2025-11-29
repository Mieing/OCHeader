@class AWELeftSideBarItemModel, UIView;
@protocol AWELeftSideBarBaseCollectionViewCellDelegate;

@interface AWELeftSideBarBaseCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (weak, nonatomic) id<AWELeftSideBarBaseCollectionViewCellDelegate> delegate;
@property (retain, nonatomic) AWELeftSideBarItemModel *itemModel;

- (BOOL)checkTouchView:(id)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (void)p_remakeContainerView;
- (void)setDelegate:(id)a0 itemModel:(id)a1;
- (void)updateDelegate:(id)a0 itemModel:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
