@class UILabel;

@interface WCFinderInteractiveFavoriteTypePickerItemView : UIView

@property (nonatomic) unsigned long long type;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (retain, nonatomic) UILabel *label;

- (id)initWithType:(unsigned long long)a0;
- (void)setupUI;
- (void)didTapSelf;
- (void).cxx_destruct;

@end
