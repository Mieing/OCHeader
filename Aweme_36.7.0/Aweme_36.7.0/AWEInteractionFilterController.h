@interface AWEInteractionFilterController : NSObject

+ (Class)aAWENoticeModuleServiceCommonAdaperClass;
+ (void)tranEnterNotificationPageWithActionType:(id)a0 enterFrom:(id)a1;
+ (void)trackEnterPersonalDetail:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 followStatus:(long long)a3 accountType:(id)a4 logExtraDict:(id)a5;
+ (void)transToProfileWithUser:(id)a0 enterFrom:(id)a1 enterPosition:(id)a2 pushID:(id)a3 model:(id)a4;
+ (long long)notificationTypeFromModel:(id)a0;
+ (BOOL)isOneDayComment:(id)a0;
+ (BOOL)isOneDayDigg:(id)a0;
+ (BOOL)hasUnfollowFamiliarRelationTagWithModel:(id)a0;
+ (long long)unreadCountWithNoticeType:(id)a0;
+ (id)fromUserForNotificationModel:(id)a0;
+ (void)tranEnterNotificationPageWithActionType:(id)a0 enterFrom:(id)a1 previousEnterFrom:(id)a2 isLandFromPush:(BOOL)a3 isSecondaryTab:(BOOL)a4 landingTab:(unsigned long long)a5 extraDict:(id)a6;
+ (unsigned long long)unreadModelTypeByConfig:(id)a0 defaultType:(unsigned long long)a1;

- (id)aAWENoticeModuleServiceCommonAdaper;

@end
