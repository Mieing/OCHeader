@class NSString, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue;

@interface TIMXStrangerConversationChecker : NSObject <TIMXStrangerConversationsCheckProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property BOOL isCheckingInfo;
@property BOOL hasChecked;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *checkQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkInfoConversations:(int)a0;
- (BOOL)needCheckInfoConversations;
- (void)persistCheckTime;
- (void)handleSuccessCheckInfos:(id)a0 startTime:(long long)a1 maxMessageServerCreateTime:(double)a2 inbox:(int)a3;
- (void)recursiveCheckInfoConversation:(int)a0 version:(long long)a1 maxPage:(int)a2 checkInfoList:(id)a3 completion:(id /* block */)a4;
- (void)resetConversation:(id)a0;
- (void)batchFetchConversationInfos:(id)a0 inbox:(int)a1 completion:(id /* block */)a2;
- (void)resetIntegrityStatus;
- (void)checkInfoConversationsCore:(int)a0;
- (double)timestampWithDate:(id)a0;
- (void)persistCheckTimeWithDate:(id)a0;
- (id)lastCheckTimeKey;
- (void)compensationConversationsWithConversationIds:(id)a0 startTime:(long long)a1 maxMessageServerCreateTime:(double)a2 inbox:(int)a3;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;
- (double)lastCheckTime;

@end
