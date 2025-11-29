@class NSString, NSData;

@interface WCFinderGetFeedFriendsLikeListCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) NSData *lastBuffer;
@property (copy, nonatomic) NSString *objectID;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithUsername:(id)a0 scene:(unsigned long long)a1 lastBuffer:(id)a2 objectID:(id)a3 nonceID:(id)a4 likeBuffer:(id)a5 successful:(id /* block */)a6 failure:(id /* block */)a7;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
