@interface AWEECOMIMAuthorChatDetailVCBiz : AWEECOMIMChatDetailVCBiz

- (id)sendMsgParamsDictWithNeedSenderRole:(BOOL)a0;
- (id)addAuthorRequestCommonParamsWithOriginalParams:(id)a0;
- (id)shopInfoModelFromDict:(id)a0;
- (void)fetchAuthorProductOrOrderWithParams:(id)a0 completion:(id /* block */)a1;
- (void)sendUserCardCardType:(id)a0 extraDict:(id)a1 messageExt:(id)a2 completion:(id /* block */)a3;
- (void)fetchAuthorShopInfoWithPigeonBizType:(id)a0 completion:(id /* block */)a1;
- (void)fetchAuthorServiceInfoCompletion:(id /* block */)a0;
- (void)fetchAuthorQueuedCountWithCompletion:(id /* block */)a0;
- (void)fetchAuthorConversationIconsWithSource:(id)a0 completion:(id /* block */)a1;
- (void)fetchAuthorRobotPredictOrderWithOrderId:(id)a0 completion:(id /* block */)a1;
- (void)fetchAuthorProductOrOrderCompletion:(id /* block */)a0;
- (void)fetchAuthorShopSchemaWithRequestPage:(id)a0 requestBizParams:(id)a1 completion:(id /* block */)a2;
- (void)sendAuthorGoodsCardWithGoodId:(id)a0 completion:(id /* block */)a1;
- (void)sendAuthorOrderCardWithOrderId:(id)a0 skuOrderId:(id)a1 fromOrderPredict:(BOOL)a2 completion:(id /* block */)a3;
- (id)otherTrackParamsDict;
- (id)bizServiceEntityId;

@end
