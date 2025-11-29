@class NSString;

@interface WCFinderLiveGetShopProductDetailCGI : WCFinderLiveBaseCgi

@property (nonatomic) unsigned long long productId;
@property (nonatomic) long long reqScene;
@property (retain, nonatomic) NSString *shopRequestId;
@property (retain, nonatomic) NSString *itemSessionBuff;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderTaskId:(id)a0 productId:(unsigned long long)a1 shopRequestId:(id)a2 reqScene:(long long)a3 itemSessionBuff:(id)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
