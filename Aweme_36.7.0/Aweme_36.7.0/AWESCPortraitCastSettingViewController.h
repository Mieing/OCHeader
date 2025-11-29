@class NSArray, BDSCPlayControlMediaInfoModel, DUXSwitch;

@interface AWESCPortraitCastSettingViewController : AWESCPortraitSingleSelectionViewController

@property (copy, nonatomic) NSArray *supportedSettingItems;
@property (retain, nonatomic) BDSCPlayControlMediaInfoModel *mediaInfoModel;
@property (retain, nonatomic) DUXSwitch *autoNextSwitch;
@property (retain, nonatomic) DUXSwitch *stretchSwitch;
@property (retain, nonatomic) DUXSwitch *skipHTSwitch;

- (void)configWithModel:(id)a0;
- (id)dataSourceArray;
- (void)preHandleCell:(id)a0 atIndex:(long long)a1;
- (long long)accessoryStyleAtIndex:(long long)a0;
- (id)accessoryInfoAtIndex:(long long)a0;
- (Class)sheetClass;
- (void)configWithCastSettingOptions:(unsigned long long)a0 exposedOptions:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)iconImageAtIndex:(long long)a0;
- (id)titleString;
- (id)titleForItem:(id)a0;
- (void)selectItemAtIndex:(long long)a0;

@end
