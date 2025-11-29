@interface AWEEnterpriseGoodsDetailDataController : AWEBaseDataController

- (id)convertModelToDictWithArray:(id)a0;
- (void)fetchGoodDetailResponseModelWithProductIDs:(id)a0 completion:(id /* block */)a1;
- (void)saveLocalExt:(id)a0 messageId:(id)a1 conversationId:(id)a2;

@end
