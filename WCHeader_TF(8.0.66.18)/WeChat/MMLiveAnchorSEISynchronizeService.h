@class MMLiveTask, NSString, MMLiveTaskId, NSMutableArray;

@interface MMLiveAnchorSEISynchronizeService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *synchronizeObjList;
@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMLiveTask *liveTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)registerWithTaskId:(id)a0;
- (void)unRegisterWithTaskId:(id)a0;
- (void)startSynchronizeFromObj:(id)a0;
- (void)stopSynchronizeFromObj:(id)a0;
- (id)handleSynchronizedAnchorSEIMsg:(id)a0 taskId:(id)a1;
- (void)synchronizeAnchorSeiInfo;
- (double)getNextSynchronizeInterval;
- (BOOL)containSEISynchronizeDelegate:(id)a0;
- (void)addSEISynchronizeDelegate:(id)a0;
- (void)removeSEISynchronizeDelegate:(id)a0;
- (void).cxx_destruct;

@end
