@class NSString;

@interface WCFinderGetLiveIncomePageCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) NSString *finderUsrName;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderUsrName:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
