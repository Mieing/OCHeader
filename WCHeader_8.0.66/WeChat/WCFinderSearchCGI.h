@class NSString, NSData;

@interface WCFinderSearchCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (retain, nonatomic) NSString *queryText;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSString *requestID;

+ (id)hotwordSessionBufferKey;

- (id)initWithQueryText:(id)a0 requestID:(id)a1 scene:(int)a2 lastBuffer:(id)a3 objHotwordInfoBuff:(id)a4 optionalParams:(id)a5 successful:(id /* block */)a6 failure:(id /* block */)a7;
- (id)initWithQueryText:(id)a0 requestID:(id)a1 scene:(int)a2 lastBuffer:(id)a3 optionalParams:(id)a4 commentScene:(int)a5 successful:(id /* block */)a6 failure:(id /* block */)a7;
- (id)initWithSearchUGCParams:(id)a0 lastBuffer:(id)a1 requestID:(id)a2 successful:(id /* block */)a3 failure:(id /* block */)a4;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
