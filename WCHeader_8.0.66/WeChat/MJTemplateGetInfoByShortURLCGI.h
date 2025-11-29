@interface MJTemplateGetInfoByShortURLCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successfulBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (id)initWithShortURL:(id)a0 type:(unsigned long long)a1 scene:(unsigned long long)a2 successfulBlock:(id /* block */)a3 failedBlock:(id /* block */)a4;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
