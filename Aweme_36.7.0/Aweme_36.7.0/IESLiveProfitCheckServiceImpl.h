@class NSString, IESLiveGCDTimer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface IESLiveProfitCheckServiceImpl : NSObject <IESLiveProfitCheckTaskDelegate, HTSLiveMessageSubscriber, IESLiveProfitCheckService>

@property (retain, nonatomic) NSMutableArray *checkTasks;
@property (retain, nonatomic) NSMutableArray *inValidTasks;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didRevenueInteractContributeListChanged:(id)a0;
- (void)didRevenueInteractScoreChanged:(id)a0;
- (void)didGiveGiftWithResponse:(id)a0;
- (void)giftViewShow:(id)a0 withItems:(id)a1;
- (void)giftTrayShow:(id)a0 withTrayInfo:(id)a1;
- (void)giftEffectShow:(id)a0 withEffectInfo:(id)a1;
- (void)giftOptionRightBuffOrDIYShowWithInfo:(id)a0;
- (void)openAssetShow:(id)a0 withInfo:(id)a1;
- (void)userCardDrssShow:(id)a0 withInfo:(id)a1;
- (void)seqListborderShow:(id)a0 withInfo:(id)a1;
- (void)userEnterShow:(id)a0 withInfo:(id)a1;
- (void)enterRoom:(id)a0;
- (void)createProfitCheckWithProfitCheckDatas:(id)a0 extra:(id)a1;
- (void)reportImWithMessage:(id)a0;
- (void)reportTask:(id)a0;
- (void)reportProfitCheck:(unsigned long long)a0 withUserId:(id)a1 roomId:(id)a2 data:(id)a3;
- (void)checkTasksIsValid;
- (void)reportConsumeRequest:(id)a0;
- (void)createProfitCheckWithProfitCheckData:(id)a0 extra:(id)a1;
- (void)fansClubTaskReceived:(id)a0 withRoomId:(id)a1 withFansClubInfo:(id)a2;
- (void)payGradeTaskReceived:(id)a0 withRoomId:(id)a1 withPayGradeInfo:(id)a2;
- (void)exhibitionTaskReceived:(id)a0 withRoomId:(id)a1 withExhibitionInfo:(id)a2;
- (void)wishTaskReceived:(id)a0 withRoomId:(id)a1 withWishInfo:(id)a2;
- (void)audienceRankListTaskReceived:(id)a0 withRoomId:(id)a1 withAudienceRankListInfo:(id)a2;
- (void)linkmicContributeRankListTaskReceived:(id)a0 withRoomId:(id)a1 withLinkmicContributeRankListInfo:(id)a2;
- (void)generalFrontEndTaskReceived:(id)a0 withRoomId:(id)a1 withTaskInfo:(id)a2;
- (void)luckyBoxShowWithUserId:(id)a0 extraInfo:(id)a1;
- (void)registerMessageProcesser;
- (void)reportAnchorProfit:(id)a0 data:(id)a1 fromUserId:(id)a2;
- (BOOL)checkTaskIsValid:(id)a0;
- (void)reportTrackWithEventName:(id)a0 userId:(id)a1 roomId:(id)a2 anchorId:(id)a3 traceId:(id)a4 logId:(id)a5 params:(id)a6 index:(id)a7;
- (void)clearInValidTasks;
- (void)leaveRoom;
- (void).cxx_destruct;
- (id)init;
- (void)messageReceived:(id)a0;

@end
