@interface AWEIMMessageTagUtil : NSObject

+ (BOOL)enableGroupAssistantNameTagWithMessage:(id)a0;
+ (BOOL)canCreateParticipantTagWithContext:(id)a0;
+ (BOOL)enableMessageNameAITagWithMessage:(id)a0;
+ (BOOL)isAIBot:(id)a0;
+ (BOOL)enableMessageAvatarAITagWithMessage:(id)a0;
+ (id)groupParticipantModelWithContext:(id)a0;
+ (BOOL)hitFansTagsABTest:(id)a0;
+ (BOOL)canCreateLiveFansTagWithContext:(id)a0;
+ (BOOL)canShowLiveFansTagWithContext:(id)a0;
+ (id)tagWithContext:(id)a0 tagType:(long long)a1;
+ (id)tagsModelWithContext:(id)a0;
+ (BOOL)canCreatePurchasedFansTagWithContext:(id)a0;
+ (BOOL)canShowPurchasedFansTagWithContext:(id)a0;
+ (BOOL)canCreateActiveTagWithContext:(id)a0;
+ (BOOL)canShowActiveTagWithContext:(id)a0;
+ (BOOL)canCreateHighValueTagWithContext:(id)a0;
+ (BOOL)canShowHighValueTagWithContext:(id)a0;
+ (BOOL)canCreateRoleTagWithContext:(id)a0;
+ (BOOL)canShowRoleTagWithContext:(id)a0;
+ (BOOL)canCreateSubscribeTagWithContext:(id)a0;
+ (BOOL)canShowSubscribeTagWithContext:(id)a0;
+ (id)p_conversationForContext:(id)a0;
+ (BOOL)p_canDisplayNameWithContext:(id)a0;
+ (BOOL)canShowFansClubTagWithContext:(id)a0;
+ (BOOL)p_hitFansTagsABTest:(id)a0;
+ (BOOL)p_canCreateFansGroupTagWithContext:(id)a0;
+ (BOOL)p_canShowFansTagWithContext:(id)a0 tagType:(long long)a1;
+ (id)p_displayNameWithContext:(id)a0;
+ (id)sharedInstance;

@end
