@protocol IESLiveScreenModule;

@interface IESLiveGiftBindingGiftMessageInstance : IESLiveGiftMessageInstance

@property (nonatomic) BOOL enableGiftMsgReceiverPromoteEffectFetch;
@property (retain, nonatomic) id<IESLiveScreenModule> screenModule;

- (void)didReceiveNewResource:(id)a0 resourceID:(id)a1 retryCount:(long long)a2;
- (void)messageSectionDidLoad;
- (Class)currentObserveMessage;
- (BOOL)bussinessMessageFilter:(id)a0 retryCount:(long long)a1;
- (BOOL)resourceIsReadyForMessage:(id)a0 retryCount:(long long)a1;
- (BOOL)needEnqueue:(id)a0;
- (id)giftMessageInstance;
- (BOOL)needQuickDownLoadWithGiftMessage:(id)a0;
- (void)reportUseLocalGift:(id)a0;
- (void).cxx_destruct;

@end
