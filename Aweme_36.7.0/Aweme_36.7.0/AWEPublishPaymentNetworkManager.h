@interface AWEPublishPaymentNetworkManager : NSObject

+ (void)fetchVIPVideoInfo:(id /* block */)a0;
+ (void)fetchPaymentEntranceInfoWithVideoType:(long long)a0 completion:(id /* block */)a1;
+ (void)fetchPaymentConfigInfo:(id /* block */)a0;
+ (void)fetchPaymentUserItemsInfoWithCursor:(id)a0 completion:(id /* block */)a1;
+ (void)fetchPaymentGetTagInfoWithCompletion:(id /* block */)a0;
+ (void)fetchPaymentUpdateTagInfoWithTagStatus:(long long)a0 tagModel:(id)a1;
+ (void)fetchPaymentCombProductsInfoWithProductId:(id)a0 completion:(id /* block */)a1;
+ (void)updatePaymentCombProductsInfoWithProductId:(id)a0 combProductsInfo:(id)a1;
+ (void)checkMusicCanUseInPaymentVideo:(id)a0 completion:(id /* block */)a1;

@end
