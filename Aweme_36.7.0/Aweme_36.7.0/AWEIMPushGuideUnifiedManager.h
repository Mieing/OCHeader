@class AFDFrequencyCountRule, NSString, AFDFrequencyDynamicPeriodExitRule;

@interface AWEIMPushGuideUnifiedManager : NSObject <IESIMPushGuideUnifiedManagerInterface, IESIMChatDataManagerDelegate>

@property (retain, nonatomic) AFDFrequencyDynamicPeriodExitRule *noticePushGuideDynamicPeriodExitRule;
@property (retain, nonatomic) AFDFrequencyCountRule *noticePushGuideShowRule;
@property (retain, nonatomic) AFDFrequencyCountRule *messageTabPushGuideShowRule;
@property (nonatomic) BOOL hasShowRTVNotice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)iesim_didInsertNewMessagesWithMessageIdentifiers:(id)a0 belongingConversationMap:(id)a1 reason:(long long)a2 context:(id)a3;
- (void)didClickGoToSystemWithStyle:(unsigned long long)a0 selectionInfo:(id)a1;
- (id)getPushGuideUnificationDic;
- (long long)getPushGuideUnificationDisplayDays;
- (long long)getPushGuideUnificationExitShortDays;
- (long long)getPushGuideUnificationExitLongDays;
- (BOOL)isHitPushGuideUnificationNoticeUsePsort;
- (BOOL)isHitPushGuideUnificationDifferentStylesAvoid;
- (id)getPushGuideUnificationNoticeLeftIcon;
- (BOOL)isHitPushGuideUnificationNoticeAddShowRule;
- (BOOL)isHitRTVNoticeMoveToClient;
- (void)chatDataManagerAddDelegate;
- (void)noticePushGuideAddShowCount;
- (BOOL)noticePushGuideCanShow;
- (void)noticePushGuideRuleReset;
- (void)messageTabPushGuideAddShowCount;
- (BOOL)messageTabPushGuideCanShow;
- (id)getPushGuideUnificationSettings;
- (void).cxx_destruct;

@end
