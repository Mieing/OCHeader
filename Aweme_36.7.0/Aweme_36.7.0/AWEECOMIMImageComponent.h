@class AWEECOMIMImageItemModel, AWEECOMIMPageClickUtil, UIImageView, UIView, AWEECOMIMIndicatorView, UITableView;

@interface AWEECOMIMImageComponent : AWEECOMIMCustomBaseView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *shadeView;
@property (retain, nonatomic) AWEECOMIMIndicatorView *loadingView;
@property (retain, nonatomic) AWEECOMIMImageItemModel *imageItem;
@property (copy, nonatomic) id /* block */ popMenuItems;
@property (copy, nonatomic) id /* block */ onClickPopMenu;
@property (copy, nonatomic) id /* block */ onTapImage;
@property (weak, nonatomic) UITableView *cellSuperView;
@property (weak, nonatomic) AWEECOMIMPageClickUtil *clickUtil;

- (void)toggleBackViewWithModel:(id)a0;
- (void)bindImageItem:(id)a0;
- (void).cxx_destruct;
- (void)customInit;
- (void)onLongPress:(id)a0;
- (void)tapAction:(id)a0;

@end
