@class NSString, NSArray;

@interface AFDMentionSettingViewModel : AWESettingBaseViewModel <AFDSettingSearchDelegate> {
    NSArray *_sectionDataArray;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:(id)a0;

- (id)aAWEPadModuleAdapter;
- (void)updateAllowMentionStatus;
- (id)mentionSettingModel:(id)a0 withIndex:(long long)a1 isSelected:(BOOL)a2;
- (void)showActionSheetVCWithItems:(id)a0 headerText:(id)a1 useCardUIStyle:(BOOL)a2 dismissBlock:(id /* block */)a3;
- (void)requestModifyAllowMentionRelation:(long long)a0;
- (void)trackModifyAllowMentionRelation:(long long)a0;
- (void)tapAllowMentionToMeCell;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void).cxx_destruct;
- (void)updateStatus;
- (void)viewDidLoad;

@end
