@class DUXToast, NSString, AWEPublishBaseTask, DUXBottomNotification;

@interface AFDQuickStoryService : HTSService <AFDQuickStoryService, AWEPublishTaskMessage>

@property (retain, nonatomic) DUXBottomNotification *non24StoryPublishSuccessBottomBar;
@property (retain, nonatomic) AWEPublishBaseTask *non24StoryCurrentPublishTask;
@property (retain, nonatomic) DUXToast *non24StoryPublishToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 didAppendWithInfo:(id)a1;
- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (id)quickStoryGuideManager;
- (Class)storyDataManagerClass;
- (id)storyDataManager;
- (Class)storyOnboardingManagerClass;
- (id)storyOnboardingManager;
- (Class)feedQuickStoryTrackerClass;
- (id)friendsSettings;
- (BOOL)shouldUseNewStoryInteractionWithAweme:(id)a0;
- (id)newStoryInteractionCellIdentifier;
- (id)newStoryInteractionCellIdentifier:(id)a0;
- (id)newStoryIdentifierArray;
- (long long)combinePlayerTrackerDisableOptions;
- (BOOL)isNormalStory:(id)a0;
- (BOOL)shouldDowngradeWithAweme:(id)a0;
- (BOOL)enableNewStory;
- (BOOL)isNewStoryDowngradeToNormalWorkWithAweme:(id)a0;
- (void)showPrivacyToastTitleAfterDiggIfNeeded;
- (BOOL)shouldTriggerNewStoryEventWithModel:(id)a0;
- (void)triggerNewStoryEventWithModel:(id)a0;
- (id)newStoryViewerListRequestParamsWithModel:(id)a0 viewerUserCount:(long long)a1;
- (void)newStoryQuickReply:(id)a0 enterFrom:(id)a1;
- (BOOL)shouldHidePrivacyTagsWithAweme:(id)a0;
- (BOOL)shouldShowPostPrivacyTextWithAweme:(id)a0;
- (id)shareToStoryManager;
- (BOOL)shouldDetailViewerBottomDarUIOpt:(id)a0;
- (BOOL)shouldExposeMessageWithReferString:(id)a0 aweme:(id)a1;
- (BOOL)enableFamiliarStoryPublishEntrance;
- (BOOL)shouldAdjustFamiliarFeedTopGradientViewWithReferString:(id)a0;
- (double)familiarFeedTopGradientViewHeight;
- (double)familiarFeedTopGradientViewAlpha;
- (id)familiarStoryPublishEntranceTitle;
- (void)familiarStoryPublishWithParams:(id)a0 completion:(id /* block */)a1;
- (id)familiarOnlyDistribute24StoryText;
- (BOOL)shouldFilterNon24StoryInFamiliarCacheWithAweme:(id)a0;
- (void)addPlayerTagWithModel:(id)a0 playerController:(id)a1 referString:(id)a2;
- (BOOL)isFromNon24StoryLandingHotTabWithReferString:(id)a0;
- (BOOL)isFromNon24StoryPrivateLandingHotTabWithReferString:(id)a0;
- (id)drawBackViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setShareToStoryTrackingParams:(id)a0;
- (id)getShareToStoryTrackingParams;
- (BOOL)shouldReplaceIMNoticeStoryAndMomentText;
- (id)getStory25PublishPlusIcon;
- (BOOL)isNewStoryWithAweme:(id)a0;
- (void)enterFriendsCameraWithShootWay:(id)a0 enterFrom:(id)a1 transitionDelegate:(id)a2 modeArray:(id)a3;
- (BOOL)shouldNon24StoryLandingToHotTabWithTask:(id)a0;
- (void)handleNon24StoryLandingToHotTabWithTask:(id)a0;
- (void)tabBarFeedTabSelectStatusDidChangeNotification:(id)a0;
- (id)privacyToastTitleAfterDigg;
- (void)handleNon24StorySnackBarTransferDetailWithTask:(id)a0;
- (void)handleNon24StorySnackBarLandingToMeWithTask:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
