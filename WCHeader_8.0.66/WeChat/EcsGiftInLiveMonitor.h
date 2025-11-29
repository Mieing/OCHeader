@interface EcsGiftInLiveMonitor : NSObject

- (void)onStartResendWithSeqId:(id)a0 liveId:(unsigned long long)a1 finderUsername:(id)a2 giftId:(id)a3;
- (void)onFinishResendWithResult:(id)a0;

@end
