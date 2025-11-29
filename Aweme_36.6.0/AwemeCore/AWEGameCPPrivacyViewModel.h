@class NSString, NSArray;

@interface AWEGameCPPrivacyViewModel : AWESettingBaseViewModel <AFDSettingSearchDelegate> {
    NSArray *_sectionDataArray;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)settingSearchRegisterDic;

- (id)aAWEPadModuleAdapter;
- (void)removeLoadingView;
- (void)changeUserSettingsWithParam:(id)a0 completion:(id /* block */)a1;
- (void)tapGameStateCell;
- (void)tapGameEvaluationDigCell;
- (id)gamePrivacyVisibleText:(long long)a0;
- (void)showGamePrivacySettingAlert;
- (void)trackGamePrivacyClickEvent;
- (unsigned long long)actionSheetViewStyle;
- (unsigned long long)actionSheetAnimationStyle;
- (double)actionSheetContainerWidth;
- (id)settingModel:(id)a0 withIndex:(long long)a1 isSelected:(BOOL)a2;
- (void)trackGamePrivacyChangeStatus:(long long)a0 toStatus:(long long)a1;
- (void)trackGameEvaluationDigClickEventWithStatus:(BOOL)a0;
- (void)trackGameEvaluationDigResultEventWithStatus:(BOOL)a0;
- (void)trackGameEvaluationDigShowEventWithStatus:(BOOL)a0;
- (id)convertGamePrivacyPermissionForTrack:(long long)a0;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)addLoadingView;
- (void)updateMessage;

@end
