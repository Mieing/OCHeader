@class NSString, AWEUILoadingView, NSArray;
@protocol AWETeenProfileSettingSliderViewModelDelegate;

@interface AWETeenProfileSettingSliderViewModel : AWETeenSettingBaseViewModel {
    NSArray *_sectionDataArray;
}

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL shouldShowLoadingView;
@property (weak, nonatomic) id<AWETeenProfileSettingSliderViewModelDelegate> sliderDelegate;
@property (nonatomic) BOOL isServiceExpand;
@property (nonatomic) BOOL isPublicWalfareExpand;
@property (copy, nonatomic) NSString *shopAssistantUrl;

+ (Class)aAWETeenModeSettingsViewModelCommonAdapterClass;
+ (Class)aAWETeenProfileSettingSliderViewModelDOUYINHMAdapterClass;

- (void)dismissAnimation;
- (id)constructSectionDataArray;
- (id)aAWETeenModeSettingsViewModelCommonAdapter;
- (id)aAWETeenProfileSettingSliderViewModelDOUYINHMAdapter;
- (void)tapTeenagerProtectionCell;
- (void)tapSettingCell;
- (void)tapEyeProtectionCell;
- (void)tapHelpDeskCell;
- (void)tapWalletCell;
- (void)tapBalanceWithdrawCell;
- (void)tapContentPreferCell;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear;

@end
