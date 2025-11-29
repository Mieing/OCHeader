@class NSArray, NSString;
@protocol IESLCPushManagerProtocol;

@interface IESLCConnectManager : NSObject <IESLCConnectManagerProtocol, IESLCPushManagerDelegate, IESLCConnectManagerProtocol_Private>

@property unsigned long long state;
@property (copy, nonatomic) NSArray *pluginArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLCPushManagerProtocol> pushManager;

- (void)ieslc_onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (BOOL)startConnectionWithConfig:(id)a0;
- (BOOL)p_checkConnectParams:(id)a0 stage:(long long)a1;
- (void)p_restartConnectionIfNeed;
- (BOOL)reconnectWithConfig:(id)a0;
- (unsigned long long)p_checkCurrentConfigIsValid:(id)a0;
- (void)ieslc_onConnectionErrorWithState:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2 error:(id)a3;
- (void)reconnectAfterFailIfNeeded;
- (void)reconnect;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (id)init;
- (void)stopConnection;
- (void)removePlugin:(id)a0;
- (void)addPlugin:(id)a0;

@end
