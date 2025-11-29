@class NSString;

@interface AFDSkylightService : HTSService <AFDSkylightService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transitionProviderProxyForProvider:(id)a0;
- (id)momentNotesDataHandler;
- (id)momentRingItemsDataHandler;
- (id)colorRingDisplayManagerWithScene:(unsigned long long)a0;
- (id)storyCircleShowTracker;
- (void)updateColorRingInfoWithAPIData:(id)a0;
- (id)getAllUserData;
- (void)deleteAwemeWithItemID:(id)a0 withUserID:(id)a1;
- (id)momentColorRingInfoWithDict:(id)a0;
- (id)skylightMomentController;
- (id)skylightStory25BubbleInfoWithDict:(id)a0;
- (BOOL)isHitShowNotesBubbleTest;
- (BOOL)shouldStory25EnableColorRingSkylightLayoutModification;
- (id)skylightFlashBackRingConfig;
- (id)skylightFriendGradientActiveConfig;
- (id)skylightGradientActiveConfig;
- (id)skylightGradientInactiveConfig;
- (id)livingStatusColorRingConfig;
- (BOOL)momentUserSettingDisabled;
- (void)switchCloseFriendsMomentUserSetting:(BOOL)a0 completion:(id /* block */)a1;
- (unsigned long long)skylightAvatarSize;
- (double)skylightAvatarWidth;
- (double)skylightCellMargin;
- (double)adjustedHeightForBubbleDisplay;
- (double)skylightTopPadding;
- (double)skylightAvatarContainerMargin;
- (double)skylightStory25AvatarContainerItemSpacing;
- (id)skylightApiParams;
- (void)resetStory25ColorRingTracker;
- (BOOL)enableFixStory25Tracker;
- (void)markHasReadStoryWithAwemeModel:(id)a0;
- (id)p_createColorRingConfigWithColor:(id)a0 configType:(long long)a1;
- (id)p_greenColorRingConfig;
- (id)p_blueColorRingConfig;
- (id)p_purpleColorRingConfig;
- (id)p_redColorRingConfig;
- (id)p_greyColorRingConfig;
- (BOOL)shouldAdjustSkylightHeightForBubbleDisplay;

@end
