@interface AWEIMChatMessageTransferUtility : NSObject

+ (id)messageVCWithConversationID:(id)a0 inNavigationController:(id)a1;
+ (void)tryTransferToMessageVCWithParamsDict:(id)a0 fromVC:(id)a1 requestScene:(id)a2 completion:(id /* block */)a3;
+ (id)targetViewControllerInitIfAvailableWithParamsDict:(id)a0;
+ (BOOL)routerParamsValidationWithParamsDictionary:(id)a0;
+ (id)requestSceneForRouterChatVCFromTransferParams:(id)a0;
+ (void)transferToMessageVCWithRouterTransitionInfo:(id)a0 requestScene:(id)a1;
+ (void)__tryTransferToMessageVCAfterLoginWithRouterParamsDict:(id)a0 fromVC:(id)a1 targetVC:(id)a2 requestScene:(id)a3 completion:(id /* block */)a4;
+ (void)trackGroupEnterChatIfNeedWithQueryParams:(id)a0;
+ (id)p_transformParameters:(id)a0;
+ (void)__tryTransferToMessageVCWithRouterParamsDict:(id)a0 fromVC:(id)a1 targetVC:(id)a2 requestScene:(id)a3 completion:(id /* block */)a4;
+ (void)__tryTransferToLiveConsultVCWithSpUid:(id)a0 fromVC:(id)a1 targetVC:(id)a2 paramsDict:(id)a3 requestScene:(id)a4 completion:(id /* block */)a5;
+ (id)generateConversationIDWithParamsDictionary:(id)a0;
+ (void)__tryTransferToSingleMessageVCWithChatExist:(BOOL)a0 uid:(id)a1 fromVC:(id)a2 targetVC:(id)a3 paramsDict:(id)a4 requestScene:(id)a5 completion:(id /* block */)a6;
+ (void)__tryTransferToMessageVCWithChatExist:(BOOL)a0 cid:(id)a1 fromVC:(id)a2 targetVC:(id)a3 paramsDict:(id)a4 requestScene:(id)a5 completion:(id /* block */)a6;
+ (void)__tryTransferToMessageVCWithUid:(id)a0 fromVC:(id)a1 targetVC:(id)a2 paramsDict:(id)a3 requestScene:(id)a4 completion:(id /* block */)a5;
+ (void)__tryTransferToMessageVCWithConversationID:(id)a0 fromVC:(id)a1 targetVC:(id)a2 paramsDict:(id)a3 requestScene:(id)a4 completion:(id /* block */)a5;
+ (void)__transferToMessageVCWithConversationID:(id)a0 fromVC:(id)a1 targetVC:(id)a2 paramsDict:(id)a3 requestScene:(id)a4 completion:(id /* block */)a5;
+ (id)__messageVCWithConversationID:(id)a0 existInNavigationController:(id)a1;
+ (unsigned long long)__checkParamsIfValidWithConversationID:(id)a0;
+ (void)__dealWithInvalidMessageVCRouterStatus:(unsigned long long)a0 conversationID:(id)a1;
+ (id)__targetViewControllerWithNeedFloatMode:(BOOL)a0 paramsDict:(id)a1;
+ (void)transferToLightCameraWithFromVC:(id)a0 toVC:(id)a1 completion:(id /* block */)a2;
+ (void)__defaultFloatModeRouterPushTargetVC:(id)a0 withParamsDict:(id)a1 completion:(id /* block */)a2;
+ (void)__routerPushTargetVC:(id)a0 fromVC:(id)a1 withCid:(id)a2 paramsDict:(id)a3 requestScene:(id)a4 completion:(id /* block */)a5;
+ (void)dismissSimilarViewControllerWithBlock:(id /* block */)a0;
+ (BOOL)p_dealwithGroupDissovleWithConversation:(id)a0;
+ (void)p_dealWithGroupRemoveWithConversation:(id)a0;
+ (void)trackEvent:(id)a0 groupConversation:(id)a1;
+ (id)p_newTargetVCWithNeedFloatMode:(BOOL)a0;
+ (void)__routerPushTargetVC:(id)a0 paramsDict:(id)a1 withCompletion:(id /* block */)a2;
+ (void)transferToMediaDetailWithTargetMessageId:(id)a0 fromVC:(id)a1 toVC:(id)a2 requestScene:(id)a3 completion:(id /* block */)a4;
+ (id /* block */)lightCameraReplyCompletionBlock:(id)a0;

@end
