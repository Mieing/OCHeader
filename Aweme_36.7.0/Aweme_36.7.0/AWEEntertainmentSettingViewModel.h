@class NSArray;

@interface AWEEntertainmentSettingViewModel : AWESettingBaseViewModel {
    NSArray *_sectionDataArray;
}

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)tapEntertainmentUserProfileTabEnableListCell;
- (BOOL)entertainmentTabShowAtUserProfileEnable;
- (void)showActionSheetWithItems:(id)a0 confirmBlock:(id /* block */)a1;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void).cxx_destruct;
- (void)updateStatus;
- (void)viewDidLoad;

@end
