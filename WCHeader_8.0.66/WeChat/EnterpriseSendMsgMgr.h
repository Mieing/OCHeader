@class NSMutableArray;
@protocol EnterpriseSendMsgMgrDelegate;

@interface EnterpriseSendMsgMgr : MMObject <PBMessageObserverDelegate> {
    NSMutableArray *arySendMsgRunningQueue;
    NSMutableArray *arySendMsgWaitingQueue;
}

@property (weak, nonatomic) id<EnterpriseSendMsgMgrDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)sendMsg:(id)a0;
- (void)checkWaitingQueue;
- (void)batchSendMsg:(id)a0;
- (id)microMsgReq2WrapMsg:(id)a0;
- (void)handleSendMsgListFail:(id)a0;
- (void)handleSendMsgListSuc:(id)a0 microMsgReqList:(id)a1;
- (void)handleSendMsgResp:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
