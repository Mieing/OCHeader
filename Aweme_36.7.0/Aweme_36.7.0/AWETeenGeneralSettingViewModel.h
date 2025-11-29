@class NSArray;

@interface AWETeenGeneralSettingViewModel : NSObject

@property (retain, nonatomic) NSArray *sectionDataArray;

- (id)constructSectionDataArray;
- (id)_buildSettingSectionModelWithItems:(id)a0;
- (id)_buildSettingItemWithType:(long long)a0;
- (void)tapGeneralSettingCell;
- (void).cxx_destruct;

@end
