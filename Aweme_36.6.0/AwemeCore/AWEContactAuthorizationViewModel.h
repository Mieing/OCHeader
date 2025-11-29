@class NSString, NSArray;

@interface AWEContactAuthorizationViewModel : AWESettingBaseViewModel <AFDSettingSearchDelegate> {
    NSArray *_sectionDataArray;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:(id)a0;
+ (BOOL)disableManageContactSetUploadFrequency;

- (id)aAWEPadModuleAdapter;
- (void)p_refreshUI;
- (void)configSectionDataArray;
- (void)tapContactSystemAuthorizationCell;
- (void)tapSetContactUploadFrequecyCell;
- (void)tapContactInstantUploadCell;
- (id)_settingModel:(id)a0 withIndex:(long long)a1 isSelected:(BOOL)a2 actionSheetVC:(id)a3;
- (void)setUploadFrequecySettingWithIndex:(long long)a0 completion:(id /* block */)a1;
- (void)showNeverUploadDoubleCheckModalView:(id /* block */)a0;
- (id)getDisplayStringWithOption:(long long)a0;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void).cxx_destruct;
- (id)optionsArray;
- (void)viewDidLoad;

@end
