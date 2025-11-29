@class NSString, NSDictionary;

@interface WCFinderFeedFavCgi : WCFinderBaseCgi

@property (nonatomic, getter=isFav) BOOL fav;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) int scene;
@property (copy, nonatomic) NSDictionary *clientUdfKv;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (id)initWithFeedID:(id)a0 nonceID:(id)a1 isFav:(BOOL)a2 sessionBuffer:(id)a3 scene:(int)a4 sourceType:(int)a5 clientUdfKv:(id)a6 params:(id)a7 completion:(id /* block */)a8 failed:(id /* block */)a9;
- (id)additionalUdfKVInfo;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
