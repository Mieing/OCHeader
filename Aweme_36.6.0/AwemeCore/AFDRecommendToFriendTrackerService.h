@class NSString;

@interface AFDRecommendToFriendTrackerService : NSObject <AFDRecommendToFriendTrackerServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackRecommendVideoPostscriptEventWithModel:(id)a0;
+ (id)trackRecommendToFriendsVisibility:(id)a0;
+ (id)afd_likeExtraParamsWithModel:(id)a0;
+ (id)getIsFriendWatchingWithAweme:(id)a0;
+ (id)getFriendUserIdStringWithAweme:(id)a0;
+ (id)getLikeCountStringWithAweme:(id)a0;
+ (id)postscriptCommonParamWithModel:(id)a0;
+ (void)trackRecommendSubmitRequestWithParams:(id)a0;
+ (void)trackRecommendSubmitResponseWithParams:(id)a0 isSuccess:(BOOL)a1;
+ (void)trackRecommendCancelRequestWithParams:(id)a0;
+ (void)trackRecommendCancelResponseWithParams:(id)a0 isSuccess:(BOOL)a1;
+ (void)trackCancelRecommendVideoWithAweme:(id)a0 actionType:(unsigned long long)a1 enterMethod:(unsigned long long)a2 extraParams:(id)a3;
+ (void)trackRecommendVideoToastWithAweme:(id)a0 actionType:(unsigned long long)a1 enterMethod:(unsigned long long)a2 extraParams:(id)a3;
+ (void)trackUnloginShowWithAwemeModel:(id)a0 enterMethod:(unsigned long long)a1;
+ (void)trackUnloginClickWithAwemeModel:(id)a0 enterMethod:(unsigned long long)a1;
+ (void)trackFinishLoginClickWithAwemeModel:(id)a0 enterMethod:(unsigned long long)a1;
+ (id)afd_friendsWatchingShowParamsWithModel:(id)a0;
+ (id)clickLabelParamsWithModel:(id)a0;
+ (id)recommendVideoPostscriptParamWithModel:(id)a0;
+ (void)checkPrivacyWithModel:(id)a0 checkList:(id)a1;
+ (void)trackFriendsWatchingShowWithAweme:(id)a0 context:(id)a1;
+ (void)trackRecommendVideoWithAweme:(id)a0 actionType:(unsigned long long)a1 enterMethod:(unsigned long long)a2 isForCancelEvent:(BOOL)a3 extraParams:(id)a4;
+ (void)trackRecommendToFriendsSettingEntranceWithAction:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2;
+ (void)trackRecommendVideoUserCellEventWithModel:(id)a0;
+ (void)trackCancelRecommendPostscriptPopupWithModel:(id)a0 actionType:(id)a1;
+ (void)trackRecommendDataLossEventWithModel:(id)a0;
+ (void)trackRecommendToFriendsSettingPanelWithAction:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2;
+ (void)trackRecommendToFriendsSettingDoubleCheckAlertWithAction:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 selectedVisibleType:(long long)a3;
+ (id)getStringFromEnterMethod:(unsigned long long)a0;
+ (id)getRecommendVideoWithAweme:(id)a0 actionType:(unsigned long long)a1 enterMethod:(unsigned long long)a2 extraParams:(id)a3;
+ (void)trackUnloginRecommendVideoToastWithParam:(id)a0;
+ (id)getStringFromActionType:(unsigned long long)a0;
+ (id)getPlayEventSubTypeWithModel:(id)a0;
+ (id)recommendRequestResponseTrackParams:(id)a0;
+ (id)privacyWithAweme:(id)a0 andType:(unsigned long long)a1;
+ (void)checkPrivacy:(id)a0;
+ (id)recommendToFriendCommonParamsWithModel:(id)a0;
+ (long long)getRecommendUserRelationWithUserModel:(id)a0;
+ (id)feedRelationExtraWithAweme:(id)a0;
+ (void)trackRecommendToFansPopup:(unsigned long long)a0;
+ (id)afd_recommendVideoToastParamWithModel:(id)a0 type:(id)a1 enterMethod:(id)a2;
+ (void)reportRecommendWorkTabNotShowReason;


@end
