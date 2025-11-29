@class NSData, NSString;

@interface MMFinderLiveOlyBarragePubbleDataMgr : MMUserService <MMFinderLiveOlyBarrageDataExt, MMLiveTaskMgrExt, MMServiceProtocol>

@property (retain, nonatomic) NSData *lastBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (id)convertToBarrageDataItemList:(id)a0;
- (id)convertToCommentDataItemList:(id)a0 withTaskId:(id)a1;
- (void)updateFinderLiveBarrageDataWithResponse:(id)a0 andTaskId:(id)a1;
- (void)onFinderLiveOlyBarrageDataUpdate:(id)a0 taskId:(id)a1;
- (void)onExitLiveSuccessWithLiveTaskId:(id)a0;
- (void).cxx_destruct;

@end
