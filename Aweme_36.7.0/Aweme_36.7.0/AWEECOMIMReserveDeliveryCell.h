@class UILabel, AWEECOMIMShopOrderCalendarItem, DUXCheckBox;

@interface AWEECOMIMReserveDeliveryCell : UICollectionViewCell

@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) AWEECOMIMShopOrderCalendarItem *model;
@property (nonatomic) BOOL checked;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isChecked;

@end
