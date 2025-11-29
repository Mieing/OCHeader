@class NSString;

@interface MMFinderLiveCommentDataFetchEngne : MMLiveCommentDataFetchEngne <WCFinderLiveExt>

@property (nonatomic) int logCommentOpen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)filterUnValidMsg:(id)a0;
+ (id)filterLikeMsg:(id)a0;
+ (id)filterAdAppMsg:(id)a0 type:(unsigned int)a1;
+ (id)filterNotifyTypeCommentData:(id)a0 taskId:(id)a1;
+ (void)logForRewardRankComment:(id)a0 logStr:(id)a1;

- (id)init;
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)applyGetLiveMessageWithTaskId:(id)a0;
- (id)commentDataMgr;
- (void)appendLiveComment:(id)a0 forTaskId:(id)a1 isHistoryMsg:(BOOL)a2;
- (id)filterOrdinaryCommentsFromOtherUsersForAppendingComments:(id)a0;
- (void)onGetFinderLiveMessage:(id)a0 taskId:(id)a1 onlineContacts:(id)a2 msgList:(id)a3 finderLiveInfo:(id)a4 onlineCount:(unsigned int)a5 liveInfoEnable:(BOOL)a6 liveClosed:(BOOL)a7 liveExtFlag:(unsigned int)a8 onlineViewCount:(unsigned int)a9 ktvPlayerCount:(unsigned int)a10 nextRequestInterval:(unsigned int)a11 currentLikeCount:(unsigned long long)a12 extraClientConfigUpdated:(BOOL)a13 liveGameData:(id)a14 respContext:(id)a15;
- (BOOL)isCommentMsgTypeBanCommentPersonal:(unsigned int)a0;
- (void)logForCommentData:(id)a0;
- (void)logForComboLiveRewardComment:(id)a0 logStr:(id)a1 selfUserName:(id)a2;
- (void)logForRewardRankingNoticeComment:(id)a0 logStr:(id)a1;
- (void)logForGlobalRankUpdateNoticeComment:(id)a0 logStr:(id)a1;
- (void)logForJoinFansGroupNoticeComment:(id)a0 logStr:(id)a1;
- (void)logForRedPacketComment:(id)a0 logStr:(id)a1;
- (void)checkAndPickExtraInfoFromCommentDatas:(id)a0 forTaskId:(id)a1;
- (void)checkAndPickExraInfoFromGlobalRankUpdateNoticeMsg:(id)a0 forTaskId:(id)a1;
- (void)logForSpecialNotifyToMe:(id)a0 logStr:(id)a1;

@end
