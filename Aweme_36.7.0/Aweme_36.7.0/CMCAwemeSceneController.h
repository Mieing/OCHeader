@protocol AWEIronManModuleService;

@interface CMCAwemeSceneController : CMCSceneController

@property (retain, nonatomic) id<AWEIronManModuleService> ironManModuleService;

- (void)didClickButtonWithContext:(id)a0;
- (void)didClickRedPacketWithContext:(id)a0;
- (void)didClickAttractionViewWithContext:(id)a0;
- (void)didClickStartAtlasLinkWithContext:(id)a0;
- (void)didClickMissionLinkWithContext:(id)a0;
- (void)didClickAdLinkWithContext:(id)a0;
- (void)didClickIronManLinkWithContext:(id)a0;
- (void)didClickDescriptionLabelWithContext:(id)a0 attributedText:(id)a1 URLString:(id)a2 tappingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)didClickLearnMoveViewTagsView:(id)a0;
- (void)didClickNameOfProfilelessUserWithContext:(id)a0;
- (void)didClickAvatarOfProfilelessUserWithContext:(id)a0;
- (void)didClickLivePalletWithContext:(id)a0;
- (void)didClickAvatarOfProfileUserWithContext:(id)a0;
- (void)trackAwesomeSplashModelReceivedWithContext:(id)a0;
- (void)didClickAwesomeSplashWithContext:(id)a0;
- (void)trackClickOnUserAvatarWithContext:(id)a0 clickRefer:(id)a1;
- (void)didClickCarAnchorWithContext:(id)a0;
- (void)trackPlayWithContext:(id)a0;
- (void)openAdsExplanationWithContext:(id)a0;
- (void)reportAdWithContext:(id)a0;
- (id)getAdReportInfoWithContext:(id)a0;
- (void)reportViewerActionWithContext:(id)a0;
- (void)performCustomLeftPanActionWithContext:(id)a0;
- (void)trackLeftPanTransitionWithContext:(id)a0;
- (void)trackProfilelessAdLeftPanTransitionWithContext:(id)a0;
- (id)destinationViewControllerForLeftPanTransitionWithContext:(id)a0;
- (BOOL)shouldUseCustomActionWhenPanLeftWithContext:(id)a0;
- (void)notifyLeftPanTransitionToIronManWithContext:(id)a0;
- (void)clickUserNickNameWithContext:(id)a0;
- (void)challengeCoverLinkJumpToOtherPageWithContext:(id)a0;
- (void)clickButton:(id)a0 refer:(id)a1;
- (long long)ironmanTypeForURL:(id)a0;
- (void)adapter_didClickIronManLinkWithContext:(id)a0;
- (BOOL)isInteractiveAICardSceneWithAweme:(id)a0;
- (id)interactiveAIPublicParamsWithReferString:(id)a0;
- (id)getTagIdForHashtag:(id)a0 inAweme:(id)a1;
- (void)trackWithForceOpenURL:(id)a0 refer:(id)a1;
- (void)handleDidClickProfilelessUserWithTrackRefer:(id)a0 context:(id)a1;
- (id)modifyQcpxLiveOpenUrlIfNeeded:(id)a0 model:(id)a1;
- (BOOL)shouldTrackLongVideoAd:(id)a0;
- (id)_viewControllerForLeftPanTransitionOnAweme:(id)a0 context:(id)a1;
- (void)_trackLeftPanProfileTransitionOnAweme:(id)a0 withRefer:(id)a1;
- (BOOL)shouldBatManUseCustomActionWhenPanLeftWith:(id)a0;
- (BOOL)tryOpenOneKeyGetPhoneNumberWithContext:(id)a0;
- (id)buildCustomParamsWithModel:(id)a0;
- (void).cxx_destruct;
- (void)sceneDidLoad;

@end
