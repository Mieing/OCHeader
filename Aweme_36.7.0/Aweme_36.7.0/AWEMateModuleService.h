@class NSString;

@interface AWEMateModuleService : HTSService <AWEMateModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableFriendRebrand;
- (BOOL)friendRebrandingAbValue;
- (BOOL)enableFriendRebrandWithLoginUser:(id)a0;
- (BOOL)enableFriendRebrandWithUser:(id)a0;
- (BOOL)enableMateRelation:(id)a0;
- (BOOL)enableMateHotActive;
- (BOOL)enableMateManagePage;
- (BOOL)enableMateTable;
- (BOOL)hasAddMatePermission:(id)a0;
- (BOOL)isSocialScene:(id)a0;
- (Class)mateRelationManagerClass;
- (Class)mateButtonHelper;
- (id)addMateGuideBannerManager;
- (BOOL)enableProfileAddMateButton;
- (BOOL)enableProfileMenuRefactor;
- (BOOL)enableNotMateCanSeeStory;
- (id)mateOnboardingManager;
- (BOOL)mateOnboardingHasCompleted;
- (BOOL)showingMateOnboardingOnFamiliarFeed;
- (BOOL)checkAndShowMateApplyOnboardingPanelIfNeededWithEnterFrom:(id)a0;
- (BOOL)isStrangerStory:(id)a0;
- (Class)mateTrackManager;
- (BOOL)enableStoryPublicVisibility;
- (BOOL)enableOthersProfileStoryTabPublicVisibility;
- (id)profileFriendEntry;
- (void)updateFriendRebrandSpreadToken:(long long)a0;
- (void)triggerMateHotActiveIfNeeded;
- (BOOL)hasAddMatePermission:(long long)a0 followStatus:(long long)a1 followerStatus:(long long)a2;
- (BOOL)checkAndShowOnboardingSheetIfNeededWithType:(unsigned long long)a0 delay:(double)a1 completeBlock:(id /* block */)a2;
- (BOOL)isHitFriendRebrandSpread:(id)a0;

@end
