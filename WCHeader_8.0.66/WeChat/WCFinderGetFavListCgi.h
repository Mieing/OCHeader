@interface WCFinderGetFavListCgi : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (id)initWithUserName:(id)a0 lastBuffer:(id)a1 clientStatus:(id)a2 completion:(id /* block */)a3 failed:(id /* block */)a4;
- (id)initWithUserName:(id)a0 lastBuffer:(id)a1 tabType:(int)a2 clientStatus:(id)a3 topicId:(unsigned long long)a4 completion:(id /* block */)a5 failed:(id /* block */)a6;
- (id)initWithUserName:(id)a0 lastBuffer:(id)a1 tabType:(int)a2 clientStatus:(id)a3 scene:(int)a4 completion:(id /* block */)a5 failed:(id /* block */)a6;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
