@class NSString;

@interface WCFinderSearchGetHotWordListCgi : WCFinderBaseCgi

@property (retain, nonatomic) NSString *searchRequestId;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithHotWordListBuffer:(id)a0 objHotwordInfoBuffer:(id)a1 requestId:(id)a2 successful:(id /* block */)a3 failedBlock:(id /* block */)a4;
- (void)createRequest:(id)a0 objHotwordInfoBuffer:(id)a1;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
