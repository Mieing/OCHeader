@class NSString, NSArray;

@interface AWEPraiseAndCommentSettingViewModel : AWESettingBaseViewModel <AFDSettingSearchDelegate> {
    NSArray *_sectionDataArray;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long prePushSwitch;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:(id)a0;

- (id)aAWEPadModuleAdapter;
- (id)__settingModel:(id)a0 withIndex:(long long)a1 isSelected:(BOOL)a2;
- (void)tapLikeListCell;
- (void)tapPraiseListCell;
- (void)tapCommentOnPostCell;
- (void)tapPushCommentToFansCell;
- (void)tapCommentBlockKeywordsCell;
- (void)__trackLikePrivacySelect:(id)a0 to_status:(id)a1;
- (void)__showActionSheetVCWithItems:(id)a0 headerText:(id)a1 useCardUIStyle:(BOOL)a2 dismissBlock:(id /* block */)a3;
- (void)__trackCommentPrivacySelect:(long long)a0 originIndex:(long long)a1;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)updateMessage;

@end
