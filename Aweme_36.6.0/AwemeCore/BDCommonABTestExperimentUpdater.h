@interface BDCommonABTestExperimentUpdater : NSObject

- (void)handleResponse:(id)a0 completionBlock:(id /* block */)a1;
- (void)fetchABTestExperimentsWithURL:(id)a0 params:(id)a1 headers:(id)a2 completionBlock:(id /* block */)a3;
- (id)modelsWithJsonData:(id)a0 error:(id *)a1;
- (void)fetchABTestExperimentsWithURL:(id)a0 params:(id)a1 completionBlock:(id /* block */)a2;

@end
