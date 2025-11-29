@class NSString;

@interface WCFinderLiveSetProductRecommendWordCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) long long scene;
@property (nonatomic) unsigned long long product_id;
@property (retain, nonatomic) NSString *recommendWord;
@property (retain, nonatomic) NSString *anchorFinderUsrName;

- (id)initWithLiveTaskId:(id)a0 scene:(long long)a1 product_id:(unsigned long long)a2 recommendWord:(id)a3 finderUsrName:(id)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
