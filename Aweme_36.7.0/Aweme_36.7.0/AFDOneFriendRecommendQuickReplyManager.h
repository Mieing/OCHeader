@interface AFDOneFriendRecommendQuickReplyManager : NSObject <AFDOneFriendRecommendQuickReplyManagerProtocol>

+ (void)setIsShowingAweme:(id)a0;
+ (void)recordBlockedUserID:(id)a0;
+ (void)removeBlockedUserID:(id)a0;
+ (id)blockedUserIDs;
+ (id)blockUserIDStorageKey;
+ (id)isShowingAweme;
+ (BOOL)isBlockedUser:(id)a0;

@end
