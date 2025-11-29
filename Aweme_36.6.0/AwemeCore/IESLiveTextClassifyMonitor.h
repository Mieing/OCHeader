@interface IESLiveTextClassifyMonitor : NSObject

- (void)trackTextClassifyPipeLine:(id)a0;
- (void)trackTextClassifyError:(id)a0 reason:(id)a1;
- (void)trackTextClassifyTextResult:(id)a0 label:(id)a1;
- (void)trackTextClassifyGiftResult:(id)a0 label:(id)a1 giftNickName:(id)a2 giftName:(id)a3 giftId:(id)a4 giftNameCandidateQueue:(id)a5;
- (id)init;

@end
