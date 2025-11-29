@class NSString;

@interface AWECommentSendHelper : NSObject <AWECommentSendHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)sendCommentCompletionWithItemID:(id)a0 commentModel:(id)a1 error:(id)a2 sucessCompletion:(id /* block */)a3 retryBlock:(id /* block */)a4;
+ (void)sendCommentSucessWithItemID:(id)a0 commentModel:(id)a1 interactionViewController:(id)a2 completion:(id /* block */)a3 needToast:(BOOL)a4;
+ (void)comment:(id)a0 publishParameterModel:(id)a1 content:(id)a2 context:(id)a3 interactionViewController:(id)a4 needToast:(BOOL)a5 sendSuccessBlock:(id /* block */)a6;
+ (void)sendCommentFailedWithError:(id)a0 retryBlock:(id /* block */)a1 needToast:(BOOL)a2;
+ (void)repost:(id)a0 inputView:(id)a1 context:(id)a2;


@end
