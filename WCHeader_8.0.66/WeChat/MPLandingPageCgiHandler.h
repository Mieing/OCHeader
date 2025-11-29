@interface MPLandingPageCgiHandler : MMObject <PBMessageObserverDelegate>

@property (nonatomic) unsigned int enterId;

- (void)dealloc;
- (void)cancelAllRequest;
- (void)getCommentsWithOpenParam:(id)a0 offset:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (void)callbackGetCommentFail:(id /* block */)a0;
- (void)callbackGetCommentWithSuccess:(BOOL)a0 commentMsgArr:(id)a1 funcEnable:(BOOL)a2 nextOffset:(int)a3 onlyFansCanComment:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)handleGetCommentResp:(id)a0 eventID:(unsigned int)a1;
- (void)addCommentsWithOpenParam:(id)a0 content:(id)a1 completionHandler:(id /* block */)a2;
- (void)addCommentReplysWithOpenParam:(id)a0 content:(id)a1 personalCommentId:(unsigned int)a2 completionHandler:(id /* block */)a3;
- (void)addCommentCommen:(id)a0 content:(id)a1 actionType:(int)a2 personalCommentId:(unsigned int)a3 completionHandler:(id /* block */)a4;
- (void)callbackAddCommentFail:(id)a0 completionHandler:(id /* block */)a1;
- (void)callbackAddCommentWithSuccess:(BOOL)a0 personalCommentId:(unsigned int)a1 errMsg:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleAddCommentResp:(id)a0 eventID:(unsigned int)a1;
- (void)deleteCommentWithOpenParam:(id)a0 commentMsg:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteReplyWithOpenParam:(id)a0 commentMsg:(id)a1 commentReply:(id)a2 completionHandler:(id /* block */)a3;
- (void)deleteWithOpenParam:(id)a0 commentMsg:(id)a1 isDeleteReply:(BOOL)a2 commentReply:(id)a3 completionHandler:(id /* block */)a4;
- (void)callbackDeleteCommentFail:(id)a0 completionHandler:(id /* block */)a1;
- (void)callbackDeleteCommentWithSuccess:(BOOL)a0 errMsg:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleDeleteCommmentResp:(id)a0 eventID:(unsigned int)a1;
- (void)setCommentLikeStatus:(id)a0 isLike:(BOOL)a1 isLikeReply:(BOOL)a2 replyId:(unsigned int)a3 openParam:(id)a4 completionHandler:(id /* block */)a5;
- (void)callbackLikeCommentFail:(id /* block */)a0;
- (void)callbackLikeCommentWithSuccess:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)handleLikeCommentResp:(id)a0 eventID:(unsigned int)a1;
- (void)requestVideoStateByVid:(id)a0 mpUrl:(id)a1 oldVideoUrl:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleGetVideoUrlResp:(id)a0 eventID:(unsigned int)a1;
- (void)callbackGetVideoUrlWithSuccess:(BOOL)a0 reqVid:(id)a1 newUrl:(id)a2 isBlock:(BOOL)a3 errorWording:(id)a4 completionHandler:(id /* block */)a5;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (BOOL)checkCGIBaseRespSuccess:(id)a0;
- (void)reportReqNetWorkFail:(id)a0;
- (void)reportReqSvrErr:(id)a0;

@end
