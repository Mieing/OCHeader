@interface WCFinderShowNpsSurveyCGI : WCFinderBaseCgi

@property (nonatomic) unsigned long long taskId;
@property (nonatomic) unsigned long long surveyId;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithTaskId:(unsigned long long)a0 surveyId:(unsigned long long)a1 successBlock:(id /* block */)a2 failureBlock:(id /* block */)a3;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
