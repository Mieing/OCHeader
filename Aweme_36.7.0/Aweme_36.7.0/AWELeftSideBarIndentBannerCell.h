@class DUXButton, AWELeftSideBarItemModel, UIView;
@protocol AWELeftSideBarIndentBannerCellDelegate;

@interface AWELeftSideBarIndentBannerCell : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DUXButton *closeButton;
@property (retain, nonatomic) AWELeftSideBarItemModel *itemModel;
@property (weak, nonatomic) id<AWELeftSideBarIndentBannerCellDelegate> delegate;

- (void)clickCloseButton;
- (BOOL)checkTouchView:(id)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (void)setItemModel:(id)a0 containerView:(id)a1;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
