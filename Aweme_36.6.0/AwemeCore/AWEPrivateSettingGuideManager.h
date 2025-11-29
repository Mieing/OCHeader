@class NSString, AWEUserModel, AWEUILoadingView;

@interface AWEPrivateSettingGuideManager : NSObject <AWEUserMessage, AWEPrivateSettingGuideManagerProtocol>

@property (nonatomic) long long currentType;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) BOOL hasLogout;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL isRequesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)showPrivacyNoticeOnViewController:(id)a0 guideType:(long long)a1 dismissBlock:(id /* block */)a2 imageView:(id)a3 rightButtonClickedBlock:(id /* block */)a4 enterFrom:(id)a5 useCardUIStyle:(BOOL)a6;
- (void)p_addLoadingViewToVC;
- (void)p_removeLoadingViewFromVC;
- (void)showUserBlockPostPanelWithUser:(id)a0 aweme:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3;
- (void)updateSettingField:(id)a0 isOn:(BOOL)a1 successToast:(id)a2 errorToast:(id)a3 completion:(id /* block */)a4;
- (void)showAppearInOthersListGuideForOnViewController:(id)a0 enterFrom:(id)a1;
- (void)trackSwitchEvent:(id)a0 enterFrom:(id)a1 isOn:(BOOL)a2;
- (void)showPrivacyNoticeOnViewController:(id)a0 guideType:(long long)a1 dismissBlock:(id /* block */)a2 imageView:(id)a3 rightButtonClickedBlock:(id /* block */)a4 enterFrom:(id)a5;
- (void)showNotMateCanSeeGuideForOnViewController:(id)a0 enterFrom:(id)a1;
- (void)showVisitorGuideForOnViewController:(id)a0 enterFrom:(id)a1;
- (void)showViewerGuideForOnViewController:(id)a0 enterFrom:(id)a1;
- (void)showRecommendFamiliarToMeGuideForOnViewController:(id)a0 enterFrom:(id)a1;
- (id)privateAccountTitleText:(BOOL)a0;
- (id)privateAccountSubTitleText:(BOOL)a0;
- (id)privateAccountLeftButtonText:(BOOL)a0;
- (id)privateAccountRightButtonText:(BOOL)a0;
- (id)generatePrivacyNoticeTabContentText;
- (void)showUserBlockPanelWithUser:(id)a0 type:(unsigned long long)a1 enterFrom:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
