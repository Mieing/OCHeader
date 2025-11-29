@interface WCFinderGetLiveTabsCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithLongitude:(float)a0 latitude:(float)a1 tabScene:(long long)a2 byPassInfo:(id)a3 title:(id)a4 feedExportId:(id)a5 feedNonceId:(id)a6 SuccessBlock:(id /* block */)a7 failBlock:(id /* block */)a8;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
