@class NSArray;

@interface AWEPrivacyOneKeyGuardContainerViewModel : AWESettingBaseViewModel {
    NSArray *_sectionDataArray;
}

@property (retain, nonatomic) NSArray *oneKeyGuardSelectSectionItems;

- (void)refreshView;
- (id)setupSectionArray;
- (id)topPrefix;
- (void)postOneKeyGuardSetting:(long long)a0;
- (void)trackItemSelected:(id)a0 fromStatus:(id)a1;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
