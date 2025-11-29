@interface AWEProfileMenuFunctionManager : NSObject

+ (BOOL)canShowHideMyPostCellForUser:(id)a0;
+ (Class)aAFDServiceDOUYINDSAdapterClass;
+ (BOOL)canShowHideHerPostCellForUser:(id)a0;
+ (BOOL)profileMenuItemsReorder;
+ (BOOL)determineUserFollowing:(id)a0;
+ (BOOL)canShowAddMateCellForUser:(id)a0 enterFrom:(id)a1;
+ (BOOL)canShowApproveMateCellForUser:(id)a0;
+ (long long)profileMenuContentStrategy;
+ (id)profileMenuItemOrdererArrayForClickMoreWithEnableTopUser:(BOOL)a0;
+ (id)profileMenuItemOrdererArrayForClickUnFollowWithEnableTopUser:(BOOL)a0;
+ (id)profileMenuItemOrdererArrayForClickFriendsList;
+ (id)profileMenuItemOrdererArrayForClickFollowListWithEnableTopUser:(BOOL)a0;
+ (id)profileMenuItemOrdererArrayForAvatarEntrance;
+ (id)profileMenuItemOrdererArrayForUserRecentUpdateList;
+ (id)profileMenuItemOrdererArrayForClickSearchListWithEnableTopUser:(BOOL)a0;
+ (id)profileMenuItemOrdererArrayForFansList;
+ (id)profileMenuItemOrdererArrayForRelationManage;
+ (BOOL)canShowShareCellForUser:(id)a0;
+ (BOOL)canShowIMChatCellForUser:(id)a0;
+ (BOOL)canShowBlockCellForUser:(id)a0;
+ (BOOL)canShowReportCellForUser:(id)a0;
+ (BOOL)canShowPushUpdateCellForUser:(id)a0;
+ (BOOL)canShowLookWorksCellForUser:(id)a0;
+ (BOOL)canShowSetAliasCellForUser:(id)a0;
+ (BOOL)canShowTAIsFriendCellForUser:(id)a0;
+ (BOOL)canShowRemoveFansCellForUser:(id)a0;
+ (BOOL)canShowPigeonForUser:(id)a0;
+ (BOOL)canShowUnFollowCellForUser:(id)a0;
+ (BOOL)canShowGoodsServiceCellForUser:(id)a0;
+ (BOOL)canShowPOIGoodsServiceCellForUser:(id)a0;
+ (BOOL)canShowTopFollowListCellForUser:(id)a0;
+ (BOOL)canShowSetGroupCellForUser:(id)a0;
+ (BOOL)canShowBellPushCellForUser:(id)a0;
+ (BOOL)canShowAppliedMateCellForUser:(id)a0;
+ (BOOL)canShowRemoveMateCellForUser:(id)a0;
+ (BOOL)canShowFollowCellForUser:(id)a0 enterFrom:(id)a1;

- (id)aAFDServiceDOUYINDSAdapter;

@end
