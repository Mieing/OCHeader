@interface AWECommentBaseDataHelper : NSObject <AWECommentManagerProtocol, NSObject>

+ (void)publishCommentWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)changeCommentAICloneStateWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)deleteCommentWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)requestCommentReplyListWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)requestCommentListWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)actionCommentWithModel:(id)a0 completion:(id /* block */)a1;

- (id)init;

@end
