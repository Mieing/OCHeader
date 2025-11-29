@class UILabel, UISwitch;
@protocol MMFinderLiveFansGroupAnchorEditSwitchCellDelegate;

@interface MMFinderLiveFansGroupAnchorEditSwitchCell : MMFinderLiveFansGroupAnchorEditTableCellBase

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UISwitch *editSwitch;
@property (weak, nonatomic) id<MMFinderLiveFansGroupAnchorEditSwitchCellDelegate> delegate;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initUI;
- (void)configWithTitle:(id)a0 switchOn:(BOOL)a1;
- (id)getTitle;
- (void)setSwitchOn:(BOOL)a0;
- (void)layoutSubviews;
- (void)switchDidChanged:(id)a0;
- (void).cxx_destruct;

@end
