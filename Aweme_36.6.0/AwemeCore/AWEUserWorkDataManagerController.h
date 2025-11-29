@interface AWEUserWorkDataManagerController : AWEUserWorkController

- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onLoadMoreListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onInnerLoadMoreListDataEndList:(id)a0;
- (id)viewModelPool;
- (void)appendData:(id)a0;
- (id)viewModel;

@end
