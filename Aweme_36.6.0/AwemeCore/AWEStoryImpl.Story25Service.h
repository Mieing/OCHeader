@interface AWEStoryImpl.Story25Service : HTSService <AWEStory25Onboarding, AWEStory25ServiceCameraConfig, AWEStory25ServiceShotEntrance, AWEStory25Service>

- (Class)onboardingAlertClass;
- (Class)feedAppearEventClass;
- (Class)profileAvatarLongPressAlertClass;
- (void)addAvatarLongPressGuideIfNeededWithHostView:(id)a0;
- (id)convertToStory25DetailFrom:(id)a0 isInnerPush:(BOOL)a1;
- (void)enterStory25SocialCameraWithShootWay:(id)a0 enterFrom:(id)a1;
- (id)storyCameraSchemaWithShootWay:(id)a0 enterFrom:(id)a1;
- (BOOL)isFamiliarTabShotEntranceEnable;
- (BOOL)isIMMessageCFInviteEntranceEnable;
- (BOOL)isIMMessageTabEntranceEnable;
- (BOOL)shouldRemoveStory24FeedShotEntrance;
- (BOOL)shouldShowForwardInputPanelGuide;
- (BOOL)isWidgetForceLandingCameraEnable;
- (BOOL)shouldSkylightUseStoryCamera;
- (BOOL)shouldProfileAvatarShowPlusIcon;
- (BOOL)isStory25Enabled;
- (BOOL)isStory25With:(id)a0;
- (BOOL)isStory25WithTask:(id)a0;
- (BOOL)shouldUseImageDownloadVideoWith:(id)a0;
- (void)recordFamiliarStatusForAweme:(id)a0 enterFrom:(id)a1;
- (BOOL)shouldUseImageMusicInfoWith:(id)a0;
- (BOOL)shouldUseStory25Feed;
- (BOOL)shouldUseStory25Handler;
- (BOOL)isWidgetDistribute25Story;
- (id)generateAggregatedAwemeUsingTask:(id)a0;
- (id)mergeWithDraftOutSideAweme:(id)a0 realOutsideAweme:(id)a1;
- (id)story25FeedReferString;
- (void)trackFolderShowWithAweme:(id)a0 enterFrom:(id)a1 previousPage:(id)a2 previousMethod:(id)a3 circleType:(id)a4;
- (void)trackFolderExitWithAweme:(id)a0 enterFrom:(id)a1 previousPage:(id)a2 previousMethod:(id)a3 circleType:(id)a4 vv:(id)a5 duration:(id)a6;
- (id)story25FeedViewController;
- (BOOL)isSkylightStory25BubbleEnabled;
- (BOOL)enablePlayBackgroundColor;
- (id)init;

@end
