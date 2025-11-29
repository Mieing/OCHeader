@class NSString, NSMutableSet;

@interface AWEIMRemindFriendOpenPushManager : NSObject <AWEIMRemindFriendOpenPushInterface>

@property (retain, nonatomic) NSMutableSet *displayCellMessageIdSet;
@property (nonatomic) BOOL isShowingOpenGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)remindBannerWasDisplayedForConversation:(id)a0;
- (void)bannerClickManually;
- (void)remindGuideWasDisplayed;
- (void)systemPushOpened;
- (BOOL)receiverHitABTest;
- (BOOL)canShowRemindGuide;
- (BOOL)isRemindPushNotice:(id)a0;
- (void)markRemindMsgWithId:(long long)a0;
- (BOOL)remindMsgDisplayedForMsgId:(long long)a0;
- (void)trackDisplayedWithMessageId:(id)a0;
- (BOOL)shouldTrackDisplayMessageWithId:(id)a0;
- (id)p_reminderConfig;
- (void)p_updateBannerOneDayShowTimes;
- (void)p_updateBannerOneConvShowTimesForConversation:(id)a0;
- (void)p_markBannerContinuousDisplayCount;
- (void)p_resetBannerContinuousDisplayCount;
- (BOOL)p_isBeyondRemindGuideLastTime;
- (BOOL)p_isBeyounGuideContinuousDisplayMaxDay;
- (void)p_markGuideLastDisplayTime;
- (void)p_markGuideContinuousDisplayCount;
- (void)p_resetGuideContinuousDisplayCount;
- (id)p_receiverConfig;
- (BOOL)p_checkOneDayRemindHasShownTooMuch;
- (BOOL)p_isBeyondBannerMaxTimesForConversation:(id)a0;
- (BOOL)p_isBeyondClickManuallyMaxDay;
- (BOOL)p_isBeyounBannerContinuousDisplayMaxDay;
- (BOOL)canShowChatingStatePrivacyPopupViewInConversation:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
