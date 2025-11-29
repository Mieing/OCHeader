@class NSString;

@interface WCFinderLiveGetShareGoodsInfoCGI : WCFinderLiveBaseCgi

@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *ecSource;
@property (nonatomic) unsigned int reqType;
@property (nonatomic) int scene;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (retain, nonatomic) NSString *productCardKey;

- (id)initWithObjctId:(unsigned long long)a0 productId:(unsigned long long)a1 finderUsername:(id)a2 ecSource:(id)a3 reqType:(unsigned int)a4 productCardKey:(id)a5 scene:(int)a6 successBlock:(id /* block */)a7 failureBlock:(id /* block */)a8;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (BOOL)shouldAutoProcessingToastWithError:(id)a0;
- (void).cxx_destruct;

@end
