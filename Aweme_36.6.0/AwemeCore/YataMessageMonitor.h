@interface YataMessageMonitor : NSObject

- (void)trackWithParams:(id)a0;
- (void)frontierConnectionStop:(id)a0 sessionID:(id)a1;
- (void)frontierConnectionStart:(id)a0 sessionID:(id)a1;
- (void)messageConsumedFromCacheDetail:(id)a0 bizCode:(id)a1 sessionID:(id)a2 params:(id)a3;
- (void)messageDiscardDetail:(id)a0 bizCode:(id)a1 sessionID:(id)a2 params:(id)a3;
- (void)messageRecieved;
- (void)messageConsumedDetail:(id)a0 bizCode:(id)a1 sessionID:(id)a2 params:(id)a3;
- (void)messageEnterCache:(id)a0 bizCode:(id)a1 sessionID:(id)a2 params:(id)a3;
- (void)frontierConnectionFailed:(id)a0;
- (void)frontierConnectionSuccess;
- (id)exportToParams:(id)a0;

@end
