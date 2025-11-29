@interface WAJSEventHandler_baseTCPSocket : WAJSEventHandler_BaseEvent

+ (BOOL)removePairSocketId:(id)a0 sockfd:(id)a1;
+ (void)removeAllTcpSocketForAppId:(id)a0;
+ (id)socketIdForTcpClient:(void *)a0;
+ (void *)tcpClientForSocketId:(id)a0;

- (void)handleJSEvent:(id)a0;
- (void)handleJSEvent:(id)a0 socketId:(id)a1 tcpClient:(void *)a2;
- (void)sendEvent:(id)a0 param:(id)a1;
- (void)addPairSocketId:(id)a0 tcpClient:(void *)a1;

@end
