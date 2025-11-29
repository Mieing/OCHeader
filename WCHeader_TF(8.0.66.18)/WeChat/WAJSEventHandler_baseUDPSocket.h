@interface WAJSEventHandler_baseUDPSocket : WAJSEventHandler_BaseEvent

+ (void)removePairSocketId:(id)a0;
+ (void)removeAllUdpSocketForAppId:(id)a0;
+ (id)socketIdForUdpClient:(void *)a0;
+ (void *)udpClientForSocketId:(id)a0;

- (void)handleJSEvent:(id)a0;
- (void)handleJSEvent:(id)a0 socketId:(id)a1 udpClient:(void *)a2;
- (void)sendEvent:(id)a0 param:(id)a1;
- (void)addPairSocketId:(id)a0 udpClient:(void *)a1;

@end
