@class WCCommentWCDB, WCCommentPostManager, NSString, NSMutableArray;

@interface WCUniCommentDataService : WCCommentDataService <WCCommentPostManagerDelegate>

@property (retain, nonatomic) WCCommentPostManager *postManager;
@property (retain, nonatomic) WCCommentWCDB *dataBase;
@property (retain, nonatomic) NSMutableArray *tasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)genFinderBaseRequest;
+ (void)commentLikeChangedWithCommentObject:(id)a0 scene:(unsigned long long)a1 selectedFlag:(BOOL)a2 isDislike:(BOOL)a3 comment:(id)a4 successBlock:(id /* block */)a5 failureBlock:(id /* block */)a6;
+ (void)commentLikeChangedWithEntityId:(id)a0 uniCommentAppName:(id)a1 bypassBuffer:(id)a2 bypassBufferType:(int)a3 scene:(unsigned long long)a4 selectedFlag:(BOOL)a5 isDislike:(BOOL)a6 comment:(id)a7 successBlock:(id /* block */)a8 failureBlock:(id /* block */)a9;
+ (int)operationIdentityTypeFromScene:(unsigned long long)a0;
+ (void)sendLikeRequest:(id)a0 completion:(id /* block */)a1;

- (id)init;
- (id)generateFinderBaseRequest;
- (void)getCommentWithLastBuffer:(id)a0 refCommentId:(unsigned long long)a1 direction:(int)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4;
- (void)sendGetCommentRequest:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (id)commentFromPbComment:(id)a0;
- (id)getPostingFailCommentWithObjectId:(id)a0;
- (void)deletePostingCommentWithComment:(id)a0;
- (id)getPostingFailComment;
- (BOOL)markObjectFailCommentsRead;
- (void)fetchSubCommentListWithRootCommentBuffer:(id)a0 rootCommentID:(unsigned long long)a1 direction:(int)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4;
- (void)setupCommentBaseElementBeforePosting:(id)a0;
- (void)postCommentWith:(id)a0;
- (void)postCommentWith:(id)a0 scene:(unsigned long long)a1 entityId:(id)a2;
- (void)postSubCommentWith:(id)a0;
- (void)postSubCommentWith:(id)a0 scene:(unsigned long long)a1 entityId:(id)a2;
- (void)repostCommentWith:(id)a0;
- (void)repostCommentWith:(id)a0 entityId:(id)a1;
- (void)sendUniCommentRequest:(id)a0 completion:(id /* block */)a1;
- (void)deleteComment:(id)a0 rootCommentID:(unsigned long long)a1 successful:(id /* block */)a2 failure:(id /* block */)a3;
- (void)commentLikeChangedWithSelectedFlag:(BOOL)a0 isDislike:(BOOL)a1 comment:(id)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4;
- (void)commentStartPostWithComment:(id)a0;
- (void)handleSendCommentSuccessWithCommentId:(unsigned long long)a0 clientId:(id)a1 comment:(id)a2;
- (void)handleSendCommentFailWithRet:(int)a0 errorMessage:(id)a1 comment:(id)a2;
- (void)commentPostFailWithComment:(id)a0;
- (void)commentPostSuccessfulWitComment:(id)a0;
- (id)commentBaseDirectory;
- (id)commentPostingDirectory;
- (id)commentDbDirectory;
- (void).cxx_destruct;

@end
