@interface AWEPaySKMPayStatusSyncRequest : CJPayBaseRequest

+ (id)buildUrl:(id)a0;
+ (void)pushMessageNotifyArrivedEventWithMsgId:(id)a0 msgType:(id)a1;
+ (void)pushPayStatus:(unsigned long long)a0 codeToken:(id)a1;
+ (void)pushVoiceBroadcastSwitchOpenStatus:(BOOL)a0 completion:(id /* block */)a1;

@end
