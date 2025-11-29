@class ShopItemIDUnit;

@interface WCFinderLiveModShelfPinProductToTopCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) ShopItemIDUnit *idUnit;
@property (nonatomic) BOOL cancel;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderTaskId:(id)a0 idUnit:(id)a1 cancel:(BOOL)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
