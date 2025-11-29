@class MMFinderLiveShopSettingsSelectItemView;

@interface MMFinderLiveCommonSettingCell : WCTableViewNormalCellManager

@property (retain, nonatomic) MMFinderLiveShopSettingsSelectItemView *contentView;
@property (copy, nonatomic) id /* block */ selectCallback;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)initCellConfig;
- (void).cxx_destruct;

@end
