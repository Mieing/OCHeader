@class NSString;

@interface MMECGetProductTagLinkCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) NSString *promoterKey;
@property (nonatomic) unsigned long long cpsProductId;
@property (retain, nonatomic) NSString *passBuffer;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithAppId:(id)a0 productId:(unsigned long long)a1 promoterKey:(id)a2 cpsProductId:(unsigned long long)a3 passBuffer:(id)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
