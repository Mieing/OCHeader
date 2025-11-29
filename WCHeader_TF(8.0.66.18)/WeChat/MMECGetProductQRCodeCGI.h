@class NSString;

@interface MMECGetProductQRCodeCGI : WCFinderBaseCgi

@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) NSString *promoterKey;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithAppId:(id)a0 productId:(unsigned long long)a1 promoterKey:(id)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
