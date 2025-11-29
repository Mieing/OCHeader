@class AWEIMGroupEntrySettingMenuModel, NSMutableDictionary;

@interface AWEIMFansGroupLevelViewModel : NSObject

@property (retain, nonatomic) AWEIMGroupEntrySettingMenuModel *settingMenuModel;
@property (retain, nonatomic) NSMutableDictionary *groupEntryLimitDict;
@property (retain, nonatomic) AWEIMGroupEntrySettingMenuModel *selectedFansClubSettingMenuModel;

- (void)invokeCompletionBlock:(id /* block */)a0;
- (id)titleOfNavigationBar;
- (id)titleOfFansClubTypeCellWithIndex:(long long)a0;
- (BOOL)isSelectedFansClubTypeCellWithIndex:(long long)a0;
- (id)titleOfFansLevelCell;
- (id)detailTitleOfFansLevelCell;
- (void)selectFansClubTypeWithIndex:(long long)a0;
- (BOOL)isDialogAction;
- (id)selectedLevelValue;
- (void)setSelectedLevelValue:(id)a0;
- (double)heightOfRuleDescriptionTextWithWidth:(double)a0 font:(id)a1;
- (id)titleOfHeaderInSection:(long long)a0;
- (id)ruleDescriptionText;
- (id)initWithSettingMenuModel:(id)a0 groupEntryLimitDict:(id)a1;
- (void).cxx_destruct;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)a0;

@end
