@class NSString, WCFinderInteractionThankCGIParams;

@interface WCFinderInteractionThankCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSString *wxUsername;
@property (nonatomic) BOOL thanked;
@property (retain, nonatomic) WCFinderInteractionThankCGIParams *params;

- (id)initWithThanked:(BOOL)a0 finderUsername:(id)a1 wxUsername:(id)a2 params:(id)a3 success:(id /* block */)a4 fail:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
