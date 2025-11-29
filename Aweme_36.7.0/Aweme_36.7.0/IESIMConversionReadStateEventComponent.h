@class NSString, NSObject;
@protocol IESIMMessageReadDataManagerProtocol, AWEIMMessageTableViewInterface, AWEIMMessageListComponentCenter, OS_dispatch_queue;

@interface IESIMConversionReadStateEventComponent : AWEIMComponentBase <AWEIMMessageListDataAction, IESIMReadStateNotifyProtocol, AWEIMMessageListComponent>

@property (copy, nonatomic) NSString *convId;
@property (copy, nonatomic) NSString *currentUid;
@property (retain, nonatomic) id<IESIMMessageReadDataManagerProtocol> readDataManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (copy, nonatomic) NSString *requestingMsgId;
@property (nonatomic) BOOL isFirstLoading;
@property (copy, nonatomic) NSString *pullingTimerName;
@property (nonatomic) BOOL isGroup;
@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> messageListTableViewService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEIMMessageListComponentCenter> componentCenter;

- (void)afterReloadData;
- (void)reloadDataTransactionCompleted;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)didReceiveSendMessageResponse:(id)a0 message:(id)a1 result:(BOOL)a2;
- (void)recallMessage:(id)a0 toMessage:(id)a1;
- (void)willDeleteMessage:(id)a0 sendToServer:(BOOL)a1;
- (id)messageListVC;
- (id)messageListViewModel;
- (void)cancelPullingTimer;
- (id)anchorCellModel;
- (id)refactorCellStateComponent:(id)a0;
- (id)refactorCellTailStateComponent:(id)a0;
- (id)correspondingUserMsgCellForCellModel:(id)a0 visibleCells:(id)a1;
- (id)stateViewModelToShowForCellModel:(id)a0 readStateEnable:(BOOL)a1;
- (BOOL)p_isGroup;
- (void)p_messageReadReceiptDidUpdate:(id)a0;
- (void)updateStateViewForCellModel:(id)a0 needUpdateHeight:(BOOL)a1;
- (void)startPollingTimerForUpdateReadReceiptFrom:(id)a0;
- (double)defaultTimeForLCConnect;
- (void)updateReadReceiptForIdentifier:(id)a0 from:(id)a1 completion:(id /* block */)a2;
- (void)fetchReadReceiptForReceiptID:(id)a0 from:(id)a1 completion:(id /* block */)a2;
- (void)messageReadReceiptDidUpdate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
