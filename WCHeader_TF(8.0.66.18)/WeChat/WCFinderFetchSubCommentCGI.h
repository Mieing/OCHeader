@class NSData, NSString;

@interface WCFinderFetchSubCommentCGI : WCFinderBaseCgi

@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long refCommentID;
@property (retain, nonatomic) NSData *rootCommentLastBuffer;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) int scene;
@property (copy, nonatomic) NSString *nonceID;
@property (nonatomic) unsigned long long rootCommentID;
@property (nonatomic) unsigned long long identityScene;
@property (nonatomic) int pullScene;

- (id)initWithObjectid:(unsigned long long)a0 nonceID:(id)a1 rootCommentID:(unsigned long long)a2 scene:(int)a3 pullScene:(int)a4 identityScene:(unsigned long long)a5 rootCommentLastBuffer:(id)a6 direction:(unsigned long long)a7 successBlock:(id /* block */)a8 failureBlock:(id /* block */)a9;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
