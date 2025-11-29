@class EmoticonStoreItem;
@protocol StoreEmotionExchangeEmotionPackCgiDelegate;

@interface StoreEmotionExchangeEmotionPackCgi : StoreEmotionBaseCgi {
    EmoticonStoreItem *m_storeItem;
}

@property (weak, nonatomic) id<StoreEmotionExchangeEmotionPackCgiDelegate> delegate;
@property (nonatomic) int exchangeScence;
@property (retain, nonatomic) EmoticonStoreItem *item;

- (id)init;
- (BOOL)startRequestWithStoreItem:(id)a0 reqScene:(int)a1 IsAutomatic:(BOOL)a2;
- (BOOL)startRequestWithProductId:(id)a0 reqScene:(int)a1 IsAutomatic:(BOOL)a2;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
