@interface WCCommentFinderDataService : WCCommentDataService

@property (nonatomic) unsigned long long reportScene;
@property (nonatomic) int viewScene;

- (id)init;
- (void)setCommentObject:(id)a0;
- (unsigned long long)finderCommentListDirectionFromUniCommentDirection:(int)a0;
- (id)finderObjectId;
- (id)finderNonceId;
- (int)commentViewScene;
- (unsigned long long)finderCommentAndLikeSceneFromUniCommentScene:(unsigned long long)a0;
- (unsigned long long)finderCommentAndLikeScene;
- (void)getCommentWithLastBuffer:(id)a0 refCommentId:(unsigned long long)a1 direction:(int)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4;
- (BOOL)markObjectFailCommentsRead;
- (void)fetchSubCommentListWithRootCommentBuffer:(id)a0 rootCommentID:(unsigned long long)a1 direction:(int)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4;
- (void)postCommentWith:(id)a0;
- (void)postSubCommentWith:(id)a0;
- (void)repostCommentWith:(id)a0;
- (void)postFinderComment:(id)a0;
- (void)postCommentWithComment:(id)a0;
- (void)deleteComment:(id)a0 rootCommentID:(unsigned long long)a1 successful:(id /* block */)a2 failure:(id /* block */)a3;
- (void)commentLikeChangedWithSelectedFlag:(BOOL)a0 isDislike:(BOOL)a1 comment:(id)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4;
- (void)deletePostingCommentWithComment:(id)a0;
- (id)getPostingFailComment;
- (void)onFinderDataItemPostComment:(id)a0 tid:(id)a1;
- (void)onFinderDataItemPostCommentFail:(id)a0 tid:(id)a1;
- (void)onFinderDataItemPostCommentFailBySpecialError:(id)a0 errorCode:(int)a1 errorMsg:(id)a2;
- (void)onFinderDataItemPostCommentSuccessful:(id)a0 tid:(id)a1;
- (void)onFinderDataItemPostSubComment:(id)a0 tid:(id)a1 rootCommentID:(unsigned long long)a2;
- (void)onFinderDataItemPostSubCommentSuccessful:(id)a0 tid:(id)a1 rootCommentID:(unsigned long long)a2;
- (void)onFinderDataItemPostSubCommentFail:(id)a0 tid:(id)a1 rootCommentID:(unsigned long long)a2 retCode:(int)a3;
- (void)onFinderDataItemCommentLikeStatusChangeWithTid:(id)a0 commentID:(unsigned long long)a1 rootCommentID:(unsigned long long)a2 likeStatus:(BOOL)a3;

@end
