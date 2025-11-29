@class ShopItemIDUnit;

@interface WCFinderLivePromoteProductCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) ShopItemIDUnit *idUnit;
@property (nonatomic) BOOL presentMode;
@property (nonatomic) unsigned int actionType;
@property (nonatomic) int businessType;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderTaskId:(id)a0 idUnit:(id)a1 businessType:(int)a2 actionType:(unsigned int)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
