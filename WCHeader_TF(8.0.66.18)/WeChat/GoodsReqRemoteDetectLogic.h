@interface GoodsReqRemoteDetectLogic : MMObject <PBMessageObserverDelegate>

- (void)dealloc;
- (void)requestRemoteDetectItemWithReqKey:(id)a0 andExchangeInfo:(id)a1;
- (void)doReqeustRemoteDetectTask:(id)a0;
- (void)handleCallRemoteDetectItemInfoResponse:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;

@end
