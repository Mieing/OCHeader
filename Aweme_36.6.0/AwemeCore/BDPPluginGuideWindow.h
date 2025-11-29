@class NSTimer, BDPThreadSafeDictionary;

@interface BDPPluginGuideWindow : BDPBridgeInstancePlugin

@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) BDPThreadSafeDictionary *serverIdTaskIDDic;

- (void)sendUpdateReviewInfoReq:(id)a0 uniqueID:(id)a1 taskID:(id)a2;
- (void)sendGetReviewInfoReqWithUniqueID:(id)a0;
- (void)buildNewTimerWithIntervalIfNeeded:(double)a0 executeBlock:(id /* block */)a1;
- (id)getResultInfo:(id)a0 error:(id)a1 taskID:(id)a2 logId:(id)a3;
- (void)reviewResultInfoDone:(id)a0 uniqueID:(id)a1;
- (void)updateExitGuideWindowInfoSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
