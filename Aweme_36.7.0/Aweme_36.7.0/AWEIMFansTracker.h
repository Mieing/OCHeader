@interface AWEIMFansTracker : NSObject

+ (void)trackStayTime:(long long)a0;
+ (void)trackEnterPersonalDetail:(id)a0;
+ (void)trackQuickReplyWithEventType:(id)a0 userModel:(id)a1;
+ (void)trackMessageCardInteractInCacheData:(long long)a0;
+ (void)trackExpandFooterViewClick;
+ (void)trackFollowBackCardWithAction:(id)a0 viewModel:(id)a1 clickIndex:(long long)a2;
+ (void)trackerInnerMessageWithAction:(id)a0 viewModel:(id)a1;
+ (void)trackShowEditRemarks:(long long)a0;
+ (void)trackFollowWitViewModel:(id)a0;
+ (void)trackEnterChatWitUser:(id)a0 enterMethod:(id)a1 enterFrom:(id)a2 extraParams:(id)a3;
+ (void)trackFollowCancelWitViewModel:(id)a0;
+ (void)trackClickMoreButtonWithViewModel:(id)a0;
+ (void)trackerInnerMessageWithViewModel:(id)a0 action:(id)a1 indexPath:(id)a2 ruleId:(id)a3 enterFrom:(id)a4 previousPage:(id)a5;
+ (void)trackerInnerMessageWithModel:(id)a0 action:(id)a1 indexPath:(id)a2 ruleId:(id)a3 enterFrom:(id)a4;
+ (id)extraTrackParamsWithRuleId:(id)a0 gdLabel:(id)a1 enterFrom:(id)a2;
+ (void)trackClickRemoveFansWithEnterMethod:(id)a0 user:(id)a1 previousPage:(id)a2;
+ (void)trackRemoveFansToastWithEnterMethod:(id)a0 eventType:(id)a1 user:(id)a2;
+ (void)trackRemoveFansWithEnterMethod:(id)a0 enterFrom:(id)a1 user:(id)a2;
+ (void)trackRelationPrivacySettingShow:(id)a0 user:(id)a1;
+ (void)tranEnterNotificationPageWithActionType:(id)a0;
+ (BOOL)showedUserIDsContainSuchUserWitViewModel:(id)a0;
+ (void)trackFollowBackShowGreetWithUserModel:(id)a0;
+ (void)trackRelationPrivacySettingShowWitUser:(id)a0;

@end
