@class NSString, FinderLiveNoticeInfo, UIView, FinderLiveNoticeListInfo, MMFinderLiveReserveNoticeLogic;

@interface MMFinderLiveNoticeLogicPlugin : MMLiveTaskBaseFunctionPlugin <WCFinderLiveExt>

@property (nonatomic) BOOL isDisplayingNoticeBubble;
@property (retain, nonatomic) FinderLiveNoticeListInfo *noticeListInfo;
@property (retain, nonatomic) FinderLiveNoticeInfo *bubbleNoticeInfo;
@property (nonatomic) unsigned int delayDisappearDurationAfterReserve;
@property (weak, nonatomic) UIView *noticeBubbleView;
@property (retain, nonatomic) MMFinderLiveReserveNoticeLogic *reserveNoticeLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveTask:(id)a0;
- (void)dismissBubble:(BOOL)a0;
- (void)updateNoticeListInfo:(id)a0;
- (id)getNoticeListInfo;
- (id)reserveableNoticeInfoForAudience;
- (id)usableNoticeInfoForAudience;
- (BOOL)isNoticeValidForDisplay:(id)a0 checkReserveState:(BOOL)a1;
- (void)onGetFinderLiveMessage:(id)a0 taskId:(id)a1 onlineContacts:(id)a2 msgList:(id)a3 finderLiveInfo:(id)a4 onlineCount:(unsigned int)a5 liveInfoEnable:(BOOL)a6 liveClosed:(BOOL)a7 liveExtFlag:(unsigned int)a8 onlineViewCount:(unsigned int)a9 ktvPlayerCount:(unsigned int)a10 nextRequestInterval:(unsigned int)a11 currentLikeCount:(unsigned long long)a12 extraClientConfigUpdated:(BOOL)a13 liveGameData:(id)a14 respContext:(id)a15;
- (void)onLiveNoticeListInfoUpdatedWithTaskId:(id)a0 noticeListInfo:(id)a1;
- (void)onFinderLiveNoticeWithNoticeId:(id)a0 reserveStateChanged:(unsigned long long)a1;
- (void)dismissBubbleOnReseveIfNeeded;
- (void)delayDismissBubble;
- (void).cxx_destruct;

@end
