@class NSArray;

@interface AWEMyMusicSettingViewModel : AWESettingBaseViewModel {
    NSArray *_sectionDataArray;
}

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)__settingModel:(id)a0 withIndex:(long long)a1 isSelected:(BOOL)a2;
- (void)tapMyCollectedMusic;
- (void)tapMyCollectedPlaylist;
- (void)tapDouyinVideo2Luna:(BOOL)a0;
- (void)showActionSheetWithPrivacy:(unsigned long long)a0 trackInfo:(id)a1 type:(unsigned long long)a2;
- (id)subtitleOfPrivacyActionSheet:(unsigned long long)a0;
- (id)nameOfPrivacyActionSheet:(unsigned long long)a0;
- (id)nameOfPrivacyFieldParam:(unsigned long long)a0;
- (void)__trackMyCollectedMusicPrivacySelect:(unsigned long long)a0 to_status:(unsigned long long)a1 enterMethod:(id)a2;
- (void)__showActionSheetVCWithItems:(id)a0 headerText:(id)a1 useCardUIStyle:(BOOL)a2 confirmBlock:(id /* block */)a3;
- (id)nameOfMyCollectedMusicPrivacy:(unsigned long long)a0;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)refreshStatus;

@end
