@class NSArray;

@interface MMPayLiteAppResourceBatchGetCGI : WCPayBaseCgi

@property (retain, nonatomic) NSArray *pkgList;
@property (copy, nonatomic) id /* block */ success;
@property (copy, nonatomic) id /* block */ fail;

- (id)initWithPkgList:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)createRequest;
- (id)assembleBatchResourceInfo;
- (id)assemblePushResourceInfo;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
