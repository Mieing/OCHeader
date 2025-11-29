@class WCCommentObject;
@protocol WCCommentDataServiceDelegate;

@interface WCCommentDataService : NSObject

@property (retain, nonatomic) WCCommentObject *commentObject;
@property (nonatomic) unsigned long long pullScene;
@property (nonatomic) unsigned long long commentAndLikeScene;
@property (weak, nonatomic) id<WCCommentDataServiceDelegate> delegate;

+ (void)commentLikeChangedWithCommentObject:(id)a0 scene:(unsigned long long)a1 selectedFlag:(BOOL)a2 isDislike:(BOOL)a3 comment:(id)a4 successBlock:(id /* block */)a5 failureBlock:(id /* block */)a6;
+ (void)updateFinderComment:(id)a0 withSelectedFlag:(BOOL)a1 isDislike:(BOOL)a2 entityId:(id)a3;

- (void)getCommentWithLastBuffer:(id)a0 refCommentId:(unsigned long long)a1 direction:(int)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4;
- (BOOL)markObjectFailCommentsRead;
- (void)fetchSubCommentListWithRootCommentBuffer:(id)a0 rootCommentID:(unsigned long long)a1 direction:(int)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4;
- (void)postCommentWith:(id)a0;
- (void)postSubCommentWith:(id)a0;
- (void)repostCommentWith:(id)a0;
- (void)deleteComment:(id)a0 rootCommentID:(unsigned long long)a1 successful:(id /* block */)a2 failure:(id /* block */)a3;
- (void)commentLikeChangedWithSelectedFlag:(BOOL)a0 isDislike:(BOOL)a1 comment:(id)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4;
- (void)deletePostingCommentWithComment:(id)a0;
- (id)getPostingFailComment;
- (void).cxx_destruct;

@end
