@interface WCFinderLiveLegalPromotReportCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderTaskId:(id)a0 legalType:(int)a1 legalVersion:(unsigned int)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)createRequestWithLegalType:(int)a0 legalVersion:(unsigned int)a1;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
