@interface IESLiveGiftAssetMessageInstance : IESLiveGiftMessageInstance

- (void)didReceiveNewResource:(id)a0 resourceID:(id)a1 retryCount:(long long)a2;
- (void)messageSectionDidLoad;
- (Class)currentObserveMessage;
- (BOOL)bussinessMessageFilter:(id)a0 retryCount:(long long)a1;
- (BOOL)resourceIsReadyForMessage:(id)a0 retryCount:(long long)a1;
- (BOOL)needEnqueue:(id)a0;
- (void)p_subscribeSportsJSBEvent;
- (void)didReceiveNewAssetResource:(id)a0 multiResourceID:(id)a1 retryCount:(long long)a2;
- (BOOL)needQuickDownLoadWithAssetMessage:(id)a0;

@end
