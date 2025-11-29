@class NSString, AWEUILoadingView;

@interface AWEPrivateAccountFollowRequestManager : NSObject <AWEPrivateAccountFollowRequestManagerProtocol>

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL hasFindMyWayItemFromConfig;
@property (nonatomic) BOOL didCellTapped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchedByStrangerTitle;
+ (id)shareRecommendTitle;
+ (id)recommendMeToFamiliarTitle;
+ (id)sharedInstance;

- (void)p_addLoadingViewToVC;
- (void)p_removeLoadingViewFromVC;
- (void)showMoreActionSheetWithTrackParameters:(id)a0;
- (BOOL)p_shouldShowFollowRequestSetting;
- (void)p_getFollowRequestPermissionSettings;
- (BOOL)shouldShowFollowRequestHintPopup;
- (void)showFollowRequestHintPopup;
- (void)openFollowRequestAutoAccept;
- (void)closeFollowRequestAutoAccept;
- (void)notChooseOnFollowRequestHintPopup;
- (void)setFollowRequestSetting:(BOOL)a0 successToast:(id)a1 errorToast:(id)a2;
- (void)updateSettingField:(id)a0 isOn:(BOOL)a1 successToast:(id)a2 errorToast:(id)a3 completion:(id /* block */)a4;
- (void)setFollowRequestSetting:(BOOL)a0 successToast:(id)a1 errorToast:(id)a2 completion:(id /* block */)a3;
- (id)p_settingModel:(id)a0 subtitle:(id)a1 withIndex:(long long)a2 isSelected:(BOOL)a3;
- (BOOL)shouldShowIndicatorCell:(unsigned long long)a0;
- (BOOL)switchStatusWithType:(unsigned long long)a0;
- (void)indicatorCellTappedWithType:(unsigned long long)a0 trackParams:(id)a1;
- (void)switchActionWithType:(unsigned long long)a0 isOn:(BOOL)a1 trackParameters:(id)a2;
- (id)findMyWayItemList;
- (id)p_settingModel:(id)a0 index:(long long)a1 trackParameters:(id)a2;
- (id)itemFromList:(id)a0 type:(unsigned long long)a1;
- (id)defaultFindMyWayItemList;
- (void)p_trackCellSelected:(id)a0 trackParams:(id)a1;
- (void)showPrivacyNoticeWithType:(long long)a0 trackParameters:(id)a1;
- (void)trackSwitchEvent:(id)a0 enterFrom:(id)a1 isOn:(BOOL)a2;
- (BOOL)hasFollowRequestAutoAllowedPermission;
- (void)showFollowRequestHintPopupIfNeed;
- (id)findMyWaySettingsModelsWithTrackParameters:(id)a0;
- (void).cxx_destruct;

@end
