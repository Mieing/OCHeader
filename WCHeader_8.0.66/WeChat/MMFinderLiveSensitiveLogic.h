@class WCFinderLiveBaseCgi, NSString, MMFinderLiveTaskId, NSMutableArray;

@interface MMFinderLiveSensitiveLogic : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (retain, nonatomic) NSMutableArray *baseSensitiveDataItemList;
@property (retain, nonatomic) NSMutableArray *sensitiveDataItemList;
@property (retain, nonatomic) NSMutableArray *pendingActionItemList;
@property (nonatomic) BOOL isInvokeingAction;
@property (weak, nonatomic) WCFinderLiveBaseCgi *invokingCGI;
@property (nonatomic) unsigned long long currMaxActionId;
@property (copy, nonatomic) id /* block */ onSensitiveDataItemListUpdateCallback;
@property (copy, nonatomic) id /* block */ onSensitiveDataActionFailCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onActionServiceInit:(id)a0;
- (void)clearCache;
- (void)requestSensitiveDataItem;
- (void)addSensitiveDataItem:(id)a0;
- (void)deleteSensitiveDataItem:(id)a0;
- (id)currentSensitiveDataItems;
- (BOOL)hasPendingAction;
- (void)invokeRequestAction:(id)a0;
- (void)invokeAddAction:(id)a0;
- (void)invokeDeleteAction:(id)a0;
- (void)onActionInvokeEnd;
- (void)updateSensitiveDataItemListIfNeeded:(id)a0;
- (void)updateBaseSensitiveDataItemList:(id)a0;
- (unsigned long long)getNextActionId;
- (void)clearPendingActions;
- (void)invokeNextPendingActionIfNeeded;
- (id)getNextBatchActionItemList;
- (id)getSensitiveDataItemListFromPendingActions:(id)a0;
- (id)getActionDescription:(id)a0;
- (void).cxx_destruct;

@end
