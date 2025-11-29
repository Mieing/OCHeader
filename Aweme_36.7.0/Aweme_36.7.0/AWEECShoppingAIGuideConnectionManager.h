@class TTHttpTask, NSMutableString, NSObject;
@protocol OS_dispatch_queue, AWEECShoppingAIGuideConnectionManagerDelegate;

@interface AWEECShoppingAIGuideConnectionManager : NSObject {
    NSObject<OS_dispatch_queue> *chatFlowQueue;
}

@property (nonatomic) unsigned long long agentType;
@property (retain, nonatomic) TTHttpTask *chatFlowTask;
@property (nonatomic) long long chatFlowFlag;
@property (retain, nonatomic) NSMutableString *chatFlowBuffer;
@property (nonatomic) BOOL isChatFlowDiscarded;
@property (weak, nonatomic) id<AWEECShoppingAIGuideConnectionManagerDelegate> delegate;
@property (nonatomic) double timeout;
@property (nonatomic) long long opType;

+ (id)welcomeSugApi;
+ (id)searchWordApi;
+ (id)inputSugApi;
+ (id)feedbackApi;
+ (void)requestPageThemeWithRequestInfo:(id)a0 completion:(id /* block */)a1;
+ (void)requestPageDynamicWithRequestInfo:(id)a0 completion:(id /* block */)a1;
+ (void)requestWelcomeInfoWithType:(unsigned long long)a0 completion:(id /* block */)a1;
+ (void)requestSearchWordWithText:(id)a0 sessionIdString:(id)a1 completion:(id /* block */)a2;
+ (void)requestInputSugInfoWithInput:(id)a0 sessionIdString:(id)a1 completion:(id /* block */)a2;
+ (void)requestFeedbackWithContentData:(id)a0 completion:(id /* block */)a1;

- (void)readChatFlow;
- (id)bizDynamicStreamApiPath;
- (void)initChatFlowBuffer;
- (void)requestChatFlowWithQuery:(id)a0 queryExtra:(id)a1 paramExtra:(id)a2 sessionIdString:(id)a3;
- (id)chatApi;
- (id)initWithAgentType:(unsigned long long)a0;
- (void)requestBizDynamicDataWithParamExtra:(id)a0 sessionID:(id)a1;
- (void)requestChatFlowWithQuery:(id)a0 sessionIdString:(id)a1;
- (void)discardChatFlow;
- (void).cxx_destruct;

@end
