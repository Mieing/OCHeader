@class NSString, TIMXSDKInstance;
@protocol TIMXMessageStoreProtocol;

@interface TIMXThirdPartyPullerInsert : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) id<TIMXMessageStoreProtocol> db;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleConversationRecentMessages:(id)a0 withBizId:(int)a1 inInbox:(int)a2 reason:(id)a3 completion:(id /* block */)a4;
- (void)handleMessages:(id)a0 withBizId:(int)a1 inInbox:(int)a2 reason:(id)a3 completion:(id /* block */)a4;
- (void)handleConversations:(id)a0 withBizId:(int)a1 inInbox:(int)a2 completion:(id /* block */)a3;
- (void)batchOverrideMessageWithPBMessages:(id)a0 bizId:(int)a1 inbox:(int)a2 completion:(id /* block */)a3;
- (void)batchUpdateDBConvInfoWithPBConvInfos:(id)a0 bizId:(int)a1 inbox:(int)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
