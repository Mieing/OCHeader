@interface StoreEmotionModEmotionPackCgi : StoreEmotionBaseCgi

@property (copy, nonatomic) id /* block */ onFinishBlock;

- (id)init;
- (void)startAddTusiji;
- (void)startDeleteProductId:(id)a0;
- (void)onFinishWithIsSuccess:(BOOL)a0 productId:(id)a1;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
