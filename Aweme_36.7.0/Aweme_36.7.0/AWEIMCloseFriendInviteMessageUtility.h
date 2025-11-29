@class NSString;

@interface AWEIMCloseFriendInviteMessageUtility : NSObject <IESIMCloseFriendInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)displayTextWithMessage:(id)a0 displayType:(long long)a1;
- (BOOL)isApproveMsg:(id)a0;
- (BOOL)isInviteApproved:(id)a0;
- (BOOL)isOverdueMsg:(id)a0;
- (id)getOverdueSubtitleText;
- (id)p_replaceMomentToPlaceHolderWithText:(id)a0;
- (id)p_replaceTitle:(id)a0 withPeerUser:(id)a1;
- (id)getOverdueBtnTitleText;
- (id)p_cardSchemaWithMessage:(id)a0 peerUserID:(id)a1;
- (void)trackCFCardClickType:(id)a0 withMessage:(id)a1;
- (void)didTapCardWithMessage:(id)a0 peerUserID:(id)a1;
- (void)trackCFCardAcceptWithUserID:(id)a0;
- (id)p_showTypeForMessage:(id)a0;
- (id)p_getCFCardClickAndShowCommonParamsForMessage:(id)a0;
- (BOOL)aweim_enableCloseFriend;
- (id)trackRelationTagWithUserID:(id)a0;
- (BOOL)aweim_enableSKIINoticeEntra;
- (void)p_recallCloseFriendInviteWithUserID:(id)a0 maxRetryCount:(long long)a1;
- (id)titleWithMessage:(id)a0;
- (id)subtitleWithMessage:(id)a0 peerUser:(id)a1;
- (id)btnTitleWithMessage:(id)a0;
- (id)btnTitleColorWithMessage:(id)a0;
- (id)btnColorWithMessage:(id)a0;
- (BOOL)isBtnTouchableWithMessage:(id)a0;
- (void)didTapBtnWithMessage:(id)a0 peerUserID:(id)a1;
- (void)setBubbleColor:(id)a0 forCon:(id)a1 completion:(id /* block */)a2;
- (void)trackCFCardShow:(id)a0;
- (id)getCFMomentMessageTypeStringWithMessage:(id)a0;
- (void)trackCFBackgroundInfoWithCon:(id)a0;
- (BOOL)aweim_enableSKIIMsgCard;
- (BOOL)aweim_SKIINoticeUseNewStyle;
- (BOOL)aweim_SKIINoticeTriggeredByColorfulFire;
- (long long)aweim_SKIINoticeSingleChatShowExitDays;
- (id)aweim_SKIINoticeSingleChatShowForeverExitCountKey;
- (id)aweim_SKIINoticeKey;
- (id)aweim_SKIINoticeTextTrackParam;
- (void)recallCloseFriendInviteWithUserID:(id)a0;

@end
