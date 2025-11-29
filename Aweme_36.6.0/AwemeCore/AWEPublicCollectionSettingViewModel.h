@class NSString, NSArray, NSDictionary, NSMutableArray, AWESettingSectionModel;

@interface AWEPublicCollectionSettingViewModel : AWESettingBaseViewModel <AFDSettingSearchDelegate> {
    NSArray *_sectionDataArray;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *tabDetailArray;
@property (copy, nonatomic) NSDictionary *detailTabOpenStatusDict;
@property (copy, nonatomic) NSDictionary *detailTabWhiteListDict;
@property (retain, nonatomic) NSMutableArray *faovirteTypesArray;
@property (retain, nonatomic) AWESettingSectionModel *secondSectionModel;
@property (retain, nonatomic) AWESettingSectionModel *thirdSectionModel;
@property (nonatomic) double topTipHeight;
@property (nonatomic) BOOL isSwitchRequestOnAir;
@property (nonatomic) long long collectsTotalStatus;

+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:(id)a0;

- (void)configViewModelWithParamDict:(id)a0;
- (void)showActionSheetVCWithItems:(id)a0 headerText:(id)a1 useCardUIStyle:(BOOL)a2 dismissBlock:(id /* block */)a3;
- (void)tapPublicFavoritesCell;
- (void)switchPublicTabWithDict:(id)a0;
- (id)settingModel:(id)a0 withIndex:(long long)a1 isSelected:(BOOL)a2;
- (void)reloadSettingItems;
- (void)setDetailTabOpenStatusWithChangeArray:(id)a0 success:(id /* block */)a1;
- (id)generateSecondTabItemModelWithTitle:(id)a0 index:(long long)a1 isSwitchOn:(BOOL)a2;
- (void)fetchTabDetailDataWithCompletion:(id /* block */)a0;
- (id)generateDetailTabStatusDictWithArray:(id)a0;
- (void)updateSettingManagerCacheWithChangeArray:(id)a0;
- (BOOL)canShowSettingCellWithTagDataModel:(id)a0;
- (void)convertAllWithSecret:(BOOL)a0 completion:(id /* block */)a1;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void).cxx_destruct;
- (void)updateStatus;

@end
