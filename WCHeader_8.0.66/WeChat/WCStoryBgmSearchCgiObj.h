@interface WCStoryBgmSearchCgiObj : WCStoryBaseCGIObj

@property (copy, nonatomic) id /* block */ completionBlock;

- (id)initWithSearchId:(unsigned long long)a0 searchKey:(id)a1 pageOffset:(unsigned int)a2 recommentId:(unsigned long long)a3 bussId:(unsigned long long)a4 completionBlock:(id /* block */)a5;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
