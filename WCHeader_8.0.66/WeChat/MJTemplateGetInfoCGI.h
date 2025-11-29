@interface MJTemplateGetInfoCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successfulBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (id)initWithTemplateId:(id)a0 type:(unsigned long long)a1 scene:(unsigned long long)a2 notUseCache:(BOOL)a3 successfulBlock:(id /* block */)a4 failedBlock:(id /* block */)a5;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
