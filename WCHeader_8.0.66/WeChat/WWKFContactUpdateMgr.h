@class NSMutableDictionary, WWKFContactOpLogic, NSString, NSMutableArray;

@interface WWKFContactUpdateMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WWKFContactOpLogic *contactOpLogic;
@property (retain, nonatomic) NSMutableArray *queueWaitingTasks;
@property (retain, nonatomic) NSMutableDictionary *dictUserName2RequestingTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)updateWWKFContact:(id)a0 isForce:(BOOL)a1;
- (void)mainThread_addTaskToUpdateQueue:(id)a0;
- (id)taskInWaittingQueueWithUsername:(id)a0;
- (void)mainThread_checkWaitingQueue;
- (BOOL)isContactStillInUpdateInterval:(id)a0;
- (void)removeTaskAferUpdate:(id)a0;
- (void)handleFetchContactResponse:(id)a0;
- (unsigned long long)maxRequestTaskCount;
- (long long)updateContactDefautltInterval;
- (void).cxx_destruct;

@end
