@class NSString, NSMutableDictionary, NSMutableArray;
@protocol IESECPushManagerProtocol;

@interface IESECMessageDispatcher : NSObject <IESECPushManagerDelegate, IESECMessageDispatchProvider> {
    BOOL _configured;
}

@property (retain, nonatomic) id<IESECPushManagerProtocol> pushManager;
@property (retain, nonatomic) NSMutableDictionary *subscriberDic;
@property (nonatomic) unsigned long long subscriberCount;
@property (retain, nonatomic) NSMutableArray *cachedSendMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDispatcher;

- (void)sendPushMessage:(id)a0;
- (void)configConnection:(id)a0;
- (void)onFrontierMessageReceived:(id)a0 message:(id)a1;
- (void)onConnectionErrorWithState:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2 error:(id)a3;
- (void)onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (void)addSubscriber:(id)a0 forSceneType:(id)a1 itemID:(id)a2;
- (void)unSubscribeForAll:(id)a0;
- (id)p_uniqueKeyWithSceneType:(id)a0 itemID:(id)a1;
- (BOOL)p_sendSceneMessageWithSceneType:(id)a0 itemID:(id)a1 action:(unsigned long long)a2;
- (id)p_separateUniqueKey:(id)a0;
- (void)unSubscribe:(id)a0 forSceneType:(id)a1 itemID:(id)a2;
- (BOOL)p_sendPushMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dispatchMessage:(id)a0;

@end
