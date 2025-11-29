@interface WCFinderLiveEntranceVerifyCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) long long status;

- (id)initWithNewEntranceStatus:(long long)a0 completionBlock:(id /* block */)a1;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
