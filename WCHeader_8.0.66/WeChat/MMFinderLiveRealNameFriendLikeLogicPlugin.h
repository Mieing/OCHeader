@class MMFinderLiveRealNameFriendLikeBubbleView, NSString, MMFinderLiveRealNameFriendLikeNotificationMsg, MMFinderLiveRealNameFriendLikeMenuInfo, FinderObjectMonotonicData_LiveIndependentData, MMFinderLiveRealNameFriendLikeBubble, FinderLiveRealnameLikeClientBubble, NSMutableArray;

@interface MMFinderLiveRealNameFriendLikeLogicPlugin : MMLiveTaskBaseFunctionPlugin <WCFinderLiveExt, WCFinderDataItemExt>

@property (retain, nonatomic) MMFinderLiveRealNameFriendLikeBubble *currentBubble;
@property (retain, nonatomic) MMFinderLiveRealNameFriendLikeMenuInfo *currentMenuInfo;
@property (retain, nonatomic) MMFinderLiveRealNameFriendLikeNotificationMsg *currentNotificationMsg;
@property (retain, nonatomic) FinderLiveRealnameLikeClientBubble *clientBubble;
@property (retain, nonatomic) FinderObjectMonotonicData_LiveIndependentData *currentLiveMonoData;
@property (retain, nonatomic) NSMutableArray *clientFriendLikeUsernameList;
@property (nonatomic) BOOL isLiked;
@property (nonatomic) BOOL hasDismissBubble;
@property (nonatomic) BOOL hasBubbleShowed;
@property (nonatomic) BOOL disableMenuButton;
@property (nonatomic) BOOL likeCgiProcessing;
@property (readonly, nonatomic) BOOL hasNotLikedBefore;
@property (readonly, nonatomic) BOOL isCurrentBubbleShow;
@property (readonly, nonatomic) unsigned long long menuIconReportStyleType;
@property (weak, nonatomic) MMFinderLiveRealNameFriendLikeBubbleView *bubbleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveTask:(id)a0;
- (void)onDataItemUpdated;
- (void)dismissBubble:(BOOL)a0;
- (void)likeEvent:(BOOL)a0 source:(long long)a1;
- (void)doLike:(BOOL)a0 source:(long long)a1;
- (void)checkPerformDismissBubble;
- (void)delayDismissBubble;
- (BOOL)checkShowGuideIfNeeded:(long long)a0;
- (void)notifyEnterFriendLikeGuidePage:(long long)a0 sendReason:(unsigned long long)a1;
- (void)notifyExitFriendLikeGuidePage:(long long)a0;
- (void)postFriendLike:(BOOL)a0 source:(long long)a1;
- (void)notifyLikeStatus;
- (void)showBubbleIfNeeded:(id)a0;
- (void)checkShowBubbleWhenLikeAction;
- (void)notifyNotificationHalfListWillOpened;
- (void)notifyNotificationHalfListClosed;
- (void)onGetFinderLiveMessage:(id)a0 taskId:(id)a1 onlineContacts:(id)a2 msgList:(id)a3 finderLiveInfo:(id)a4 onlineCount:(unsigned int)a5 liveInfoEnable:(BOOL)a6 liveClosed:(BOOL)a7 liveExtFlag:(unsigned int)a8 onlineViewCount:(unsigned int)a9 ktvPlayerCount:(unsigned int)a10 nextRequestInterval:(unsigned int)a11 currentLikeCount:(unsigned long long)a12 extraClientConfigUpdated:(BOOL)a13 liveGameData:(id)a14 respContext:(id)a15;
- (void)onJoinFinderLiveError:(id)a0 finderDataItem:(id)a1 joinLiveContext:(id)a2 errorPage:(id)a3;
- (void)checkShowJoinLiveFriendLikeNotification:(id)a0;
- (void)fillJoinliveClientLatestLikeUsernameList:(id)a0;
- (void)onGetPollingFetchEventWithTaskId:(id)a0 cmdId:(long long)a1 respBuffer:(id)a2 ret:(unsigned int)a3;
- (void)receivePollingFriendLikeResp:(id)a0;
- (id)minusNewLikeListFromArray:(id)a0 oldArray:(id)a1;
- (void)postFriendLikeNotification;
- (void)onSelfLikeSuccess;
- (BOOL)enableShowLikeGuide;
- (unsigned int)guidePageShowTimes;
- (void)didSelectNotificationMsg:(id)a0;
- (void)onFinderDataItemIsLikedUpdateByKeyExtention:(id)a0;
- (void)reportExtStat:(unsigned long long)a0 feedActionSubType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
