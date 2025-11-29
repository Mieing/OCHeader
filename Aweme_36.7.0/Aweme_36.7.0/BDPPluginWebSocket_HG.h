@class NSString, BDPUniqueID, NSMutableDictionary;
@protocol BDPTTNetWSPluginDelegate;

@interface BDPPluginWebSocket_HG : BDPBridgeInstancePlugin <BDPBindingWebSocketDelegate, BDPPluginTTNetWSCustomImplDelegate, BDPAPIInterruptionMessage> {
    NSMutableDictionary *_socketTypeDict;
    NSMutableDictionary *_socketCloseInfoDict;
}

@property (weak, nonatomic) id<BDPTTNetWSPluginDelegate> ttnetWSPlugin;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)generateTaskID;
- (void)ttnetWebSocket:(unsigned long long)a0 withProtocol:(id)a1 didReceiveStringMessage:(id)a2;
- (void)ttnetWebSocket:(unsigned long long)a0 withProtocol:(id)a1 didReceiveBinaryMessage:(id)a2;
- (void)ttnetWebSocket:(unsigned long long)a0 withProtocol:(id)a1 didOpenWithHeader:(id)a2;
- (void)ttnetWebSocket:(unsigned long long)a0 withProtocol:(id)a1 didCloseWithError:(id)a2;
- (void)onSocketTaskStateChange:(id)a0 withMessage:(id)a1 error:(id)a2;
- (void)startInterruptingSubscribeHandler:(id)a0;
- (void)createSocketTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateSocketTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (double)getSocketTimeoutWithParam:(id)a0 task:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
