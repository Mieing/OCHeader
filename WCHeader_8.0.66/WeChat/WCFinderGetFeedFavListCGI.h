@class NSString, NSData;

@interface WCFinderGetFeedFavListCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) NSData *lastBuffer;
@property (copy, nonatomic) NSString *objectID;
@property (nonatomic) int requestType;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithFinderUsername:(id)a0 scene:(unsigned long long)a1 lastBuffer:(id)a2 objectID:(id)a3 requestType:(int)a4 successful:(id /* block */)a5 failure:(id /* block */)a6;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
