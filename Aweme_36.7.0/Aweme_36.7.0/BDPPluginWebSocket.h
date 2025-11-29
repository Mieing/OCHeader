@class NSString, BDPUniqueID, NSMutableDictionary;
@protocol BDPTTNetWSPluginDelegate;

@interface BDPPluginWebSocket : BDPBridgeInstancePlugin <BDPPublicWebSocketDelegate, BDPPluginTTNetWSCustomImplDelegate, BDPAPIInterruptionMessage> {
    NSMutableDictionary *_socketTypeDict;
    NSMutableDictionary *_socketCloseInfoDict;
    NSMutableDictionary *_socketTimeDict;
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
- (id)serviceReferer:(id)a0 version:(id)a1;
- (BOOL)canProcessInBackgroundWithCommon:(id)a0;
- (id)errorWithAuthorizeType:(long long)a0 url:(id)a1 uniqueId:(id)a2;
- (void)cloudWSErrorCallBackWithTaskID:(id)a0 errMsg:(id)a1;
- (void)cloudSocketTaskWithParam:(id)a0 taskId:(id)a1 sid:(id)a2 callback:(id /* block */)a3 instance:(id)a4;
- (void)cloudSocketTaskChangeGroupWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)_requestCloudSocketGroupChangeWithParam:(id)a0 sid:(id)a1 callback:(id /* block */)a2 instance:(id)a3;
- (id)generateFormatGroupArray:(id)a0;
- (id)socketSchemaSupportList:(id)a0;
- (void)createSocketTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateSocketTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)createCloudSocketTaskSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateCloudSocketTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
