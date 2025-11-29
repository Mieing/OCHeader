@class MMFinderLiveShopSettingsSwitchItemView;

@interface MMFinderLiveSwitchSettingCell : WCTableViewNormalCellManager

@property (retain, nonatomic) MMFinderLiveShopSettingsSwitchItemView *contentView;
@property (copy, nonatomic) id /* block */ onSwitchChange;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)initCellConfig;
- (void).cxx_destruct;

@end
