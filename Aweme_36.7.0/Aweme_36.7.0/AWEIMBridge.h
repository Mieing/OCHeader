@interface AWEIMBridge : NSObject

+ (void)enterIMMessageVCFromReportWithRequestParams:(id)a0 completionBlock:(id /* block */)a1;
+ (void)sendGroupInviteCardToChatWithParams:(id)a0 completionBlock:(id /* block */)a1;
+ (void)tryIMPanelShareWithParams:(id)a0 shareCompletion:(id /* block */)a1;
+ (void)getIMShareContactListWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)__transferToSendMsgPanelWithParams:(id)a0 shareCompletion:(id /* block */)a1;
+ (id)__errorWithErrorType:(long long)a0;

@end
