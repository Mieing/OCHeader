@interface MJTemplateGetListCGI : WCFinderBaseCgi

@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithPageBuf:(id)a0 optionalParams:(id)a1 successBlock:(id /* block */)a2 failureBlock:(id /* block */)a3;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
