@interface WCFinderLiveStartBlueGiftActivityCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithTaskID:(id)a0 itemID:(unsigned int)a1 liveCookies:(id)a2 success:(id /* block */)a3 fail:(id /* block */)a4;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
