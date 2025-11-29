@class WAMediaCastingRoutePickerDeviceItem, MMProgressViewEx, UIImageView, UIView, MMUILabel;

@interface WAMediaCastingRoutePickerTableViewCell : UITableViewCell

@property (retain, nonatomic) WAMediaCastingRoutePickerDeviceItem *deviceItem;
@property (retain, nonatomic) MMUILabel *deviceLabel;
@property (retain, nonatomic) UIView *separatorLineView;
@property (retain, nonatomic) MMUILabel *failLabel;
@property (retain, nonatomic) UIImageView *successImageView;
@property (retain, nonatomic) MMProgressViewEx *loadingView;
@property (nonatomic) unsigned long long status;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWith:(id)a0 deviceStatus:(unsigned long long)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
