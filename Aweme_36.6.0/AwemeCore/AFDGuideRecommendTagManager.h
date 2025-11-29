@class NSString;

@interface AFDGuideRecommendTagManager : NSObject <AFDGuideRecommendTagManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cacheService;
+ (BOOL)isRecommendToFriendsEntranceWithShareToIMOptWithScene:(id)a0;
+ (BOOL)canRecommendToFriendsEntranceShowForShareToIMWithActionType:(unsigned long long)a0 context:(id)a1;
+ (BOOL)isRecommendLabelWithShareToIMShowOnly;
+ (BOOL)isEntranceLabelHitTestingBeyondEdge;
+ (void)didTapGuideRecommendTagWithModel:(id)a0 context:(id)a1;
+ (void)reportVideoPlayEventWithContext:(id)a0;
+ (BOOL)canShowGuideRecommendTagPermanentlyWithParam:(id)a0;
+ (BOOL)canShowGuideRecommendTagForVideoPlayEventWithParam:(id)a0;
+ (BOOL)canShowGuideRecommendTagForShareEventWithParam:(id)a0;
+ (BOOL)canShowGuideRecommendTagForPitayaEventWithParam:(id)a0;
+ (void)preprocessWithModel:(id)a0 context:(id)a1 actionType:(unsigned long long)a2;
+ (void)didShowGuideRecommendTagWithModel:(id)a0 context:(id)a1 actionType:(unsigned long long)a2;
+ (BOOL)shouldEntranceLabelHitTestingExpand;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })entranceLabelHitTestingInsets;
+ (id)entranceLabelConfig;
+ (id)createRecommendToFriendEntranceLabel;
+ (id)guideRecommendTagModelWithAwemeModel:(id)a0;
+ (BOOL)isClientActionMoveToPitaya;
+ (BOOL)canShowRecommendToFriendsEntranceIfNeededWithAwemeModel:(id)a0 context:(id)a1 actionType:(unsigned long long)a2;
+ (unsigned long long)pitayaActionTypeWithName:(id)a0;
+ (BOOL)canShowGuideRecommendTagWithPitayaActionType:(unsigned long long)a0 context:(id)a1;
+ (BOOL)canShowRecommendToFriendsEntranceWithShareToIM:(id)a0 context:(id)a1;
+ (void)logNotShowReason:(id)a0 context:(id)a1 actionType:(unsigned long long)a2;
+ (id)showRuleManager;
+ (BOOL)canShowRecommendEntranceForAweme:(id)a0 context:(id)a1 actionType:(unsigned long long)a2;
+ (BOOL)isHitBlockListWithActionType:(unsigned long long)a0 context:(id)a1;
+ (void)recordShowActionType:(unsigned long long)a0 withModel:(id)a1;
+ (void)markShowHighFansTextWithModel:(id)a0;
+ (id)textWithModel:(id)a0;
+ (id)recommendCountTextWithModel:(id)a0;
+ (BOOL)canShowGuideRecommendTagForDiggEventWithParam:(id)a0;
+ (id)blockListConfig;
+ (BOOL)canShowGuideRecommendTagForPitayaPlayFinishActionWithContext:(id)a0;
+ (BOOL)canShowGuideRecommendTagForPitayaShareActionWithContext:(id)a0;
+ (id)pitayaActions;


@end
