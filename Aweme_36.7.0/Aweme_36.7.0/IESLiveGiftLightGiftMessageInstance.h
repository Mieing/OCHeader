@protocol IESLiveScreenModule, HTSLiveViewHierarchyProvider;

@interface IESLiveGiftLightGiftMessageInstance : IESLiveGiftMessageInstance

@property (retain, nonatomic) id<IESLiveScreenModule> screenModule;
@property (weak, nonatomic) id<HTSLiveViewHierarchyProvider> viewHierarchyProvider;

- (void)didReceiveNewResource:(id)a0 resourceID:(id)a1 retryCount:(long long)a2;
- (Class)currentObserveMessage;
- (BOOL)bussinessMessageFilter:(id)a0 retryCount:(long long)a1;
- (BOOL)resourceIsReadyForMessage:(id)a0 retryCount:(long long)a1;
- (BOOL)needEnqueue:(id)a0;
- (void).cxx_destruct;

@end
