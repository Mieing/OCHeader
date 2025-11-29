@class NSSet, NSString, NSHashTable, IESIMReadStatePollingTimeConfig, NSObject, IESIMReadStateCache;
@protocol OS_dispatch_queue, IESLCConnectManagerProtocol, IESIMConversationReadReceiptProtocol;

@interface IESIMReadStateManager : NSObject <IESIMUserServiceMessage, IESLCConnectService, IESIMReadStateManagerProtocol>

@property (retain, nonatomic) NSHashTable *weakChannelListeners;
@property (retain, nonatomic) IESIMReadStateCache *cache;
@property (retain, nonatomic) NSSet *requestingIDs;
@property (retain, nonatomic) id<IESIMConversationReadReceiptProtocol> conversationReadReceiptManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property BOOL isLCConnected;
@property (retain, nonatomic) IESIMReadStatePollingTimeConfig *p_pollingTimeConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCConnectManagerProtocol> connectManager;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)ieslc_onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (void)p_setup;
- (BOOL)isLCConnecteBreak;
- (void)addReceiveChannel:(id)a0;
- (id)uncachedIdentifiersInSet:(id)a0;
- (void)updateReadReceiptForIdentifiers:(id)a0 requestFrom:(id)a1;
- (void)updateReadReceiptByResponseReceiptModel:(id)a0 from:(id)a1;
- (id)createReceiptModelForMessageIfNeed:(id)a0;
- (id)getReceiptModelForMessage:(id)a0;
- (id)pollingTimeConfig;
- (id)createReadReceiptReqModel;
- (void)p_clearCache;
- (void)p_registerObserver;
- (void)p_setupPollingTimeConfig;
- (void)logLCConnectState:(unsigned long long)a0;
- (id)receiptModelsForResponseModel:(id)a0 from:(id)a1;
- (void)updateLocalReadReceiptModels:(id)a0;
- (void)requestReadReceiptWithIdentifiers:(id)a0 requestFrom:(id)a1 onCompletion:(id /* block */)a2;
- (id)convertIdentifiersToRequestModels:(id)a0;
- (void)removeRequestIDs:(id)a0 completion:(id /* block */)a1;
- (void)findShouldBeRequestIDs:(id)a0 completion:(id /* block */)a1;
- (void)p_unregisterObserver;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
