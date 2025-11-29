@protocol WCCardPkgBatchGetCardItemByTpInfoMgrDelegate;

@interface WCCardPkgBatchGetCardItemByTpInfoMgr : MMObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<WCCardPkgBatchGetCardItemByTpInfoMgrDelegate> delegate;

- (void)dealloc;
- (void)batchGetCardItemByIpInfo:(id)a0 templateMsgId:(id)a1 fromScene:(unsigned long long)a2;
- (void)handleBatchGetWCCardByTpInfoResp:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
