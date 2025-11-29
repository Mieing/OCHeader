@class NSData, NSString, FinderGetCommentListCtx;

@interface WCFinderCommentListCGI : WCFinderBaseCgi

@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long refCommentID;
@property (nonatomic) unsigned long long rootCommentID;
@property (retain, nonatomic) NSData *lastBuffer;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) int scene;
@property (copy, nonatomic) NSString *nonceID;
@property (nonatomic) unsigned long long identityScene;
@property (nonatomic) int pullScene;
@property (retain, nonatomic) NSData *likeListBuffer;
@property (retain, nonatomic) FinderGetCommentListCtx *commentCtx;
@property (retain, nonatomic) NSString *enterSessionId;

- (id)init;
- (id)requestWithParam:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (id)requestWithObjectid:(unsigned long long)a0 nonceID:(id)a1 scene:(int)a2 enterSessionId:(id)a3 pullScene:(int)a4 identityScene:(unsigned long long)a5 lastBuffer:(id)a6 refCommentID:(unsigned long long)a7 direction:(unsigned long long)a8 commentRequestCtx:(id)a9 successBlock:(id /* block */)a10 failureBlock:(id /* block */)a11;
- (id)requestWithObjectid:(unsigned long long)a0 nonceID:(id)a1 scene:(int)a2 pullScene:(int)a3 identityScene:(unsigned long long)a4 lastBuffer:(id)a5 rootCommentID:(unsigned long long)a6 direction:(unsigned long long)a7 successBlock:(id /* block */)a8 failureBlock:(id /* block */)a9;
- (void)createRequest;
- (BOOL)needADDeviceInfo;
- (id)customSuccessfulRetCodeArray;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
