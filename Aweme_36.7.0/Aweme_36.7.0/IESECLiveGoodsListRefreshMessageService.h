@class IESECLiveGoodsListUtilsService, IESECLiveGoodsListHeaderService, NSString, IESECLiveGoodsListCollectionService;

@interface IESECLiveGoodsListRefreshMessageService : IESECLiveGoodsListBaseServiceV2 <IESECLiveMessageSubscriber>

@property (weak, nonatomic) IESECLiveGoodsListHeaderService *headerService;
@property (weak, nonatomic) IESECLiveGoodsListCollectionService *collectionService;
@property (weak, nonatomic) IESECLiveGoodsListUtilsService *utilsService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tabType;
- (id)tabModels;
- (BOOL)enableLiveListAnchorAdapter;
- (void)messageReceived_IESECLiveCommonMessage:(id)a0;
- (void)messageReceived_IESECLiveMarketingMessage:(id)a0;
- (BOOL)isInstantStore;
- (id)goodsListAnchorInfo;
- (id)fetchParams;
- (id)p_listCacheFetchParams;
- (id)curPageUniqueKey;
- (id)renewListRequestConfigWithUniqueKey:(id)a0;
- (void)messageReceived_IESECProductListUpdateMessage:(id)a0;
- (void)messageReceived_IESECProductListRefreshMessage:(id)a0;
- (void)messageReceived_IESECCategoryRefreshMessage:(id)a0;
- (void).cxx_destruct;
- (void)setup;
- (void)messageReceived:(id)a0;

@end
