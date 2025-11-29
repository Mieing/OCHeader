@class NSDictionary, NSString;

@interface AWEMVUGInFlowBackInsertController : AWEAwemeNewDetailBaseController <AWEAwemeNewDetailTableControllerProtocol, AWEAwemeDetailTableViewControllerDelegate>

@property (retain, nonatomic) NSDictionary *mvInsertRouteParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithRouterParamDict:(id)a0;
- (void)detailTableViewControllerWillExit:(id)a0 currentAwemeModel:(id)a1;
- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)configInitialFetchParams:(id)a0;
- (void).cxx_destruct;

@end
