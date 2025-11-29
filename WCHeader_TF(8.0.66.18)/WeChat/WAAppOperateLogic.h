@class NSMutableDictionary, NSMutableArray;
@protocol WAAppOperateLogicDelegate;

@interface WAAppOperateLogic : MMObject

@property (retain, nonatomic) NSMutableDictionary *m_operationInfo;
@property (retain, nonatomic) NSMutableArray *m_starOperations;
@property (weak, nonatomic) id<WAAppOperateLogicDelegate> delegate;

- (void)fetchData;
- (void)saveData;
- (void)saveStarData;
- (void)addAppOperationInRetryQueue:(id)a0;
- (void)runAllOperation;
- (void)excuteOpration:(id)a0;
- (unsigned int)getLatestAppItemsFormSvrByUpdateTime:(unsigned int)a0 withCommonUse:(BOOL)a1 requestInfo:(id)a2 inScene:(unsigned int)a3;
- (void)getLatestUsageAppItemsFromSvrInScene:(unsigned int)a0;
- (void)getStarAppItemsFromSvrInScene:(unsigned int)a0;
- (void)getCommonUseAppItemsFromSvrInScene:(unsigned int)a0;
- (void)updateAppUsageToSvrWithOpration:(id)a0;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (void)handleGetWeAppUsageRecord:(id)a0;
- (void)handleUpdateWeAppUsageRecord:(id)a0;
- (void)handleFaildUpdateUsageOperationAsync:(id)a0;
- (void)handleUpdateStarRecord:(id)a0;
- (void)handleGetWxaCommUseApp:(id)a0;
- (void)sendRequest:(id)a0 Retry:(unsigned int)a1;
- (id)convertWxaAppItem2AppItemData:(id)a0;
- (void)starItem:(id)a0 toPositionWithPreItem:(id)a1 nextItem:(id)a2 inScene:(unsigned int)a3;
- (void)unStarItem:(id)a0 inScene:(unsigned int)a1;
- (void)moveStaredItem:(id)a0 toPositionWithPreItem:(id)a1 nextItem:(id)a2 inScene:(unsigned int)a3;
- (void)operateStarItem:(id)a0 positionWithPreItem:(id)a1 nextItem:(id)a2 actionType:(unsigned int)a3 inScene:(unsigned int)a4;
- (void)operateStarItemsForReason:(unsigned int)a0;
- (void)operateStarItemsForTransferedReason:(int)a0;
- (int)transferUpdateWxaRecordReasonFromOperationSyncReason:(unsigned int)a0;
- (void).cxx_destruct;

@end
