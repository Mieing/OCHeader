@class NSString, TIMXSDKInstance;

@interface TIMXPBAutoFallbackRequestManager : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pbRequestWithSuccessBlock:(id /* block */)a0 failureBlock:(id /* block */)a1;
- (void)fetchMessagesWithConversationShortID:(long long)a0 messageIndex:(long long)a1 direction:(int)a2 limit:(int)a3 completion:(id /* block */)a4;
- (void)fetchMessageWithConversationShortID:(long long)a0 messageServerID:(long long)a1 completion:(id /* block */)a2;
- (id)pbRequestWithSuccessResponseBlock:(id /* block */)a0 failureBlock:(id /* block */)a1;
- (void)ackMessageWithReportType:(int)a0 cmd:(int)a1 logId:(id)a2 startTimeStamp:(long long)a3 messageServerID:(long long)a4 completion:(id /* block */)a5;
- (void)batchAckMessagesWithReportType:(int)a0 cmd:(int)a1 logId:(id)a2 startTimeStamp:(long long)a3 arrMessageServerID:(id)a4 completion:(id /* block */)a5;
- (void)fetchMessageWithConversationShortID:(long long)a0 messageServerID:(long long)a1 onlyStatus:(BOOL)a2 completion:(id /* block */)a3;
- (id)pbRequestWithCompletionBlock:(id /* block */)a0;
- (void)modifyMessagePropertyWithConversationShortID:(long long)a0 messageServerID:(long long)a1 inbox:(int)a2 arrModify:(id)a3 completion:(id /* block */)a4;
- (int)networkType;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
