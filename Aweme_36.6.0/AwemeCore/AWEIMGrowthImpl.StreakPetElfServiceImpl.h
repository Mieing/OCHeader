@interface AWEIMGrowthImpl.StreakPetElfServiceImpl : NSObject <IESIMStreakPetElfService>

- (id)streakPetElfParentingDataModelWith:(id)a0;
- (id)streakPetElfFullLevelIdsWith:(id)a0;
- (id)serverResponseDataWith:(id)a0 scene:(long long)a1;
- (long long)streakPetSpaceStatusWith:(id)a0;
- (void)openStreakAchievementPageWithConversation:(id)a0 enterMethod:(id)a1 anchorKey:(id)a2 message:(id)a3 extraData:(id)a4;
- (void)openStreakPetElfInvitePageWithConversation:(id)a0 enterMethod:(id)a1 pageScene:(id)a2 message:(id)a3 extraData:(id)a4 currentPopupContainer:(id)a5;
- (BOOL)streakPetElfWidgetIsHiddenStatusWithConversation:(id)a0;
- (BOOL)petElfHunterContainerNeedBlockPush;
- (BOOL)isConversationHasPet:(id)a0;
- (BOOL)canShowWidgetGuideWithConversation:(id)a0;
- (id)init;

@end
