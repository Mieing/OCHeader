@class IESECAlertSheetViewItem, UIView, NSMutableArray, IESECAlertSheetViewConfig;

@interface IESECAlertSheetView : UIView

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) IESECAlertSheetViewItem *cancelItem;
@property (retain, nonatomic) UIView *maskActionView;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly, nonatomic) IESECAlertSheetViewConfig *config;

- (void)didClickItem:(id)a0;
- (void)showInView:(id)a0 completion:(id /* block */)a1;
- (void)didClickMaskActionView;
- (void)didClickCancelItem;
- (void)makeConstraintWithAppear:(BOOL)a0;
- (void)itemDidTap:(id)a0;
- (void)addItem:(id /* block */)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithConfig:(id)a0;
- (void)addItems;

@end
