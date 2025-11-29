@class NSString, GetEmotionDetailRequest, EmoticonStoreItem;

@interface StoreEmotionGetDetailCgi : StoreEmotionBaseCgi

@property (retain, nonatomic) GetEmotionDetailRequest *request;
@property (nonatomic) unsigned long long lastRequestTime;
@property (retain, nonatomic) EmoticonStoreItem *originItem;
@property (readonly, nonatomic) NSString *productID;
@property (nonatomic) unsigned int scene;
@property (nonatomic) BOOL forceUpdate;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (copy, nonatomic) id /* block */ getValidCacheItemBlock;
@property (readonly, nonatomic) BOOL isActive;

- (id)initWithPackageId:(id)a0;
- (void)createRequest;
- (void)tryStartRequest;
- (void)startRequest;
- (void)loadEmoticonItem;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
