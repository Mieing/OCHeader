@class IESECLiveGoodsListCollectionService, NSString, IESECLiveGoodsListHeaderService;

@interface IESECLiveGoodsListInteractionMessageService : IESECLiveGoodsListBaseServiceV2 <IESECLiveMessageSubscriber>

@property (weak, nonatomic) IESECLiveGoodsListHeaderService *headerService;
@property (weak, nonatomic) IESECLiveGoodsListCollectionService *collectionService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)showAuthorConnect;
- (void)p_destroyConnectedDataIfNeeded;
- (void)p_refetchListDataOnAuthorDisconnectWithRefreshScene:(long long)a0;
- (void)messageReceived_IESECLiveInteractionMessage:(id)a0;
- (void)messageReceived_IESECAuthorConnectMessage:(id)a0;
- (void).cxx_destruct;
- (void)setup;
- (void)messageReceived:(id)a0;

@end
