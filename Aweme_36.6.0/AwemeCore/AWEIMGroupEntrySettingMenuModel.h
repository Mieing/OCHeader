@class NSString, NSArray, AWEIMGroupEntrySettingMenuMultiSelectModel;

@interface AWEIMGroupEntrySettingMenuModel : IESIMBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *hintTitle;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *defaultOptionValue;
@property (copy, nonatomic) NSArray *options;
@property (retain, nonatomic) AWEIMGroupEntrySettingMenuMultiSelectModel *multiSelectConfig;
@property (copy, nonatomic) NSString *multipleSelectedSubTitle;
@property (copy, nonatomic) NSString *noSelectedSubTitle;
@property (copy, nonatomic) NSString *currentValue;
@property (retain, nonatomic) NSArray *extraMenus;
@property (weak, nonatomic) AWEIMGroupEntrySettingMenuModel *parentMenu;
@property (copy, nonatomic) NSArray *showWithParentMenuValue;

+ (id)detailTitleForEntryLimitCellWithEntrySettingModels:(id)a0 groupEntryLimitDict:(id)a1;
+ (id)optionsJSONTransformer;
+ (id)detailTitleForFansClubLevelCellWithSettingModel:(id)a0 selectedOptionValue:(id)a1;
+ (id)multiSelectConfigJSONTransformer;
+ (id)extraMenusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)optionTitleWithValue:(id)a0;
- (BOOL)isDialogType;
- (id)valueWithOptionIndex:(long long)a0;
- (long long)optionIndexWithValue:(id)a0;
- (BOOL)isMultiSelectSettingMenu;
- (BOOL)isSwitchType;
- (id)optionModelWithValue:(id)a0;
- (id)defaultOptionTitle;
- (id)titleForCellWithRow:(long long)a0;
- (void).cxx_destruct;

@end
