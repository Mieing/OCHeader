@class NSString, TIMXSDKInstance;

@interface TIMXConversationChecker : NSObject <TIMXConversationsCheckProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long lastCheckTime;
@property (nonatomic) BOOL isCheckingInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkInfoConversations:(int)a0;
- (void)loadLastCheckTime;
- (void)checkInfoConversationV2:(int)a0;
- (void)realOldCheckInfoConversations:(int)a0;
- (void)fetchAllFetchFailedConversations:(id /* block */)a0;
- (BOOL)needCheckInfoConversations;
- (void)persistCheckTime;
- (void)handleSuccessCheckInfos:(id)a0 startTime:(long long)a1 maxMessageServerCreateTime:(double)a2 inbox:(int)a3;
- (void)recursiveCheckInfoConversation:(int)a0 version:(long long)a1 maxPage:(int)a2 checkInfoList:(id)a3 completion:(id /* block */)a4;
- (void)resetConversation:(id)a0;
- (void)batchFetchConversationInfos:(id)a0 inbox:(int)a1 completion:(id /* block */)a2;
- (void)checkLocalConversationsWithCheckInfoList:(id)a0 page:(int)a1 logId:(id)a2 startTime:(long long)a3 maxMessageServerCreateTime:(double)a4 inbox:(int)a5;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
