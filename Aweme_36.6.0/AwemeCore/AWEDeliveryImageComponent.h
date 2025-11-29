@class AWEDeliveryImageItemModel, UITableView, UIImageView, UIView, AWEDeliveryIndicatorView;

@interface AWEDeliveryImageComponent : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *shadeView;
@property (retain, nonatomic) AWEDeliveryIndicatorView *loadingView;
@property (retain, nonatomic) AWEDeliveryImageItemModel *imageItem;
@property (copy, nonatomic) id /* block */ popMenuItems;
@property (copy, nonatomic) id /* block */ onClickPopMenu;
@property (copy, nonatomic) id /* block */ onTapImage;
@property (weak, nonatomic) UITableView *cellSuperView;

- (void)toggleBackViewWithModel:(id)a0;
- (void)bindImageItem:(id)a0;
- (void).cxx_destruct;
- (void)customInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onLongPress:(id)a0;
- (void)tapAction:(id)a0;

@end
