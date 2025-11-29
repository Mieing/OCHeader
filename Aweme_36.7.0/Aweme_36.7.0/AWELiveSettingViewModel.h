@class NSString, NSArray, AWEUILoadingView, AWEHalfScreenBaseViewController;

@interface AWELiveSettingViewModel : AWESettingBaseViewModel <AFDSettingSearchDelegate> {
    NSArray *_sectionDataArray;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEHalfScreenBaseViewController *linkmicDistributionActionSheet;
@property (retain, nonatomic) AWEHalfScreenBaseViewController *linkmicDistributionRulPageActionSheet;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL gamecpPropDataAuthorized;
@property (nonatomic) unsigned long long type;

+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:(id)a0;
+ (Class)aAWEUserCenterModuleServiceCommonAdapterClass;
+ (BOOL)disableGameCPPropAuth;
+ (id)recommendBoughtGoodsCellTitle;
+ (id)recommendBoughtGoodsCellDescription;
+ (id)settingSearchRegisterDic_live;
+ (id)settingSearchRegisterDic_eCommerce;

- (void)p_refreshUI;
- (id)aAWEUserCenterModuleServiceCommonAdapter;
- (void)p_addLoadingViewToVC;
- (void)p_removeLoadingViewFromVC;
- (void)changeUserSettingsWithParam:(id)a0 completion:(id /* block */)a1;
- (id)setupLiveSectionModel;
- (void)tapLinkmicDistributionOptionCell;
- (void)tapEnableRecommendFollowSeenLiveCell;
- (void)tapEnableRecommendBoughtGoodsCell:(id)a0;
- (void)tapEnableProtectOrderPhoneNumberCell;
- (void)tapEnableGameCPPropAuthCell;
- (void)p_updateRecommandLiveUI;
- (void)p_updateRecommandGoodsUI;
- (void)p_fetchPropDataAuthStatus;
- (id)setupECommerceSectionModel;
- (void)p_updateGameCPPropAuthUIWithStatus:(BOOL)a0;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
