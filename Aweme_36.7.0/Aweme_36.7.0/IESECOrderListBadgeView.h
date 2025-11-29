@class UILabel, NSString, IESECOrderListTabItemUIConfigModel;

@interface IESECOrderListBadgeView : UIView

@property (retain, nonatomic) IESECOrderListTabItemUIConfigModel *uiConfig;
@property (nonatomic) double fontScale;
@property (readonly, nonatomic) UILabel *badgeLabel;
@property (copy, nonatomic) NSString *badgeText;

- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCenter:(struct CGPoint { double x0; double x1; })a0;

@end
