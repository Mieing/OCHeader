@class UINavigationController, NSString, AFDModalViewHelper, AFDPrivacyPublishParamsModel, AWEPublishPrivacyOptionViewController, NSArray;

@interface AWEPublishPrivacyHalfScreenViewController : UIViewController <AWEPanelTransitionWithBackground, AWEPublishAdvanceSettingsPopupMenuViewControllerDelegate, AWEPublishPrivacyOptionViewControllerDelegate, AWEPublishPrivacyDismissWithChildVCProtocol, AWEPublishPrivacyHalfScreenViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEPublishPrivacyOptionViewController *optionVC;
@property (retain, nonatomic) UINavigationController *innerNavigation;
@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (retain, nonatomic) AFDPrivacyPublishParamsModel *paramsModel;
@property (nonatomic) BOOL shouldDismissChildVC;
@property (nonatomic) BOOL needMixConfrimAlert;
@property (copy, nonatomic) NSArray *disallowedCellTypes;
@property (copy, nonatomic) id /* block */ selectPrivacyBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ didSelectedAdvanceSettingCellBlock;
@property (nonatomic) long long preferredViewTheme;

+ (Class)aAWEAwemeInteractionManagerDOUYINLiteAdapterClass;

- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)a0;
- (void)presentedViewPanFinished;
- (id)awemeID;
- (void)updateContentHeight:(double)a0;
- (void)pushAdvanceSettingMenuAfterPublish;
- (id)aAWEAwemeInteractionManagerDOUYINLiteAdapter;
- (void)dismissHalfScreen;
- (id)initWithParamsModel:(id)a0;
- (id)initWithAweme:(id)a0 previousPage:(id)a1 referString:(id)a2 enterFrom:(id)a3 scene:(long long)a4;
- (id)sceneTypeForTrack;
- (void)dismissHalfScreenWithChildVC;
- (void)setupTransitionController;
- (double)p_getContentHeight;
- (void)p_updatePreferredViewTheme;
- (void)trackConfirmEvent:(id)a0;
- (id)constructPublishOutputParamsModelWithExtraParams:(id)a0;
- (BOOL)isNewFriendsDailyPublishPanelExperimentStatus;
- (BOOL)shouldShowLiteChangePrivacyPopupWithPrivacyOption:(unsigned long long)a0 awemeModel:(id)a1;
- (void)p_changePrivacyTypeWithParamsModel:(id)a0;
- (id)__fromStatus;
- (void)trackDismissWithType:(long long)a0;
- (long long)duetDownloadSettingScene;
- (void)p_changePrivacyTypeWithContext:(id)a0;
- (void)p_changeAwemePrivacy:(id)a0;
- (void)p_needMixConfirmAlertAndChangeAwemePrivacyWithContext:(id)a0;
- (void)confirmPrivacySettingAndDismiss:(id)a0 andChildVC:(BOOL)a1;
- (void)transferToNotMateCanSeeSetting;
- (void)pushAdvancedSettingViewController;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)show;

@end
