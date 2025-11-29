@interface AWEIMGrowthImpl.StreakPetElfABSettings : NSObject

+ (BOOL)enableFakePetSpaceInviteNotice;
+ (id)fakePetSpaceInviteNoticeText;
+ (id)fakePetSpaceInviteNoticeHighlightText;
+ (id)fakePetSpaceInviteNoticeHighlightLink;
+ (long long)petSpaceInviteNoticeFakeCountByUser;
+ (long long)petSpaceInviteNoticeFakeCountByUserAndConversation;
+ (id)streakAchieveSchemaWith:(id)a0 enterMethod:(id)a1;
+ (id)streakInviteSchemaWith:(id)a0;
+ (id)streakPendantSchemaWith:(id)a0;
+ (id)needUpdateAchieveExtKeys;
+ (id)requestAchieveExtKeysMapping;
+ (id)achieveResponseMapping;

- (void).cxx_destruct;
- (id)init;

@end
