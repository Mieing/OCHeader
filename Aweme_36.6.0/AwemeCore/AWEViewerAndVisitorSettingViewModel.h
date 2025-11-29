@class NSString, NSArray;

@interface AWEViewerAndVisitorSettingViewModel : AWESettingBaseViewModel <AFDSettingSearchDelegate> {
    NSArray *_sectionDataArray;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:(id)a0;
+ (BOOL)shouldShowViewerSetting;
+ (BOOL)shouldShowVisitorSetting;

- (void)handleNetworkFailedWithType:(long long)a0;
- (void)updateItemStatusWithType:(long long)a0;
- (void)switchViewerSetting:(BOOL)a0;
- (void)switchVisitorSetting:(BOOL)a0;
- (id)refactorSectionDataArray;
- (BOOL)itemStatusWithType:(long long)a0;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void).cxx_destruct;

@end
