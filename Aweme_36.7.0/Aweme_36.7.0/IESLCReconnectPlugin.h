@class NSString;
@protocol IESLCMessageHandlerProtocol, IESLCConnectManagerProtocol;

@interface IESLCReconnectPlugin : NSObject <IESLCConnectService, IESLCMessageHandlerService>

@property unsigned long long state;
@property (nonatomic) BOOL isConnected;
@property (nonatomic) double startConnectingTimestamp;
@property (weak, nonatomic) id<IESLCConnectManagerProtocol> connectManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;

- (void)ieslc_onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (void)ieslc_onConnectionErrorWithState:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2 errorStr:(id)a3 errorDict:(id)a4;
- (void)handleReachabilityChangedNotification:(id)a0;
- (void)handleDidBecomeActiveNotification:(id)a0;
- (void)p_reconnectIfNeededForNetworkReachability;
- (void)p_reconnectIfNeededForActive;
- (void)p_reconnectIfNeededForConnectingLongTime;
- (void)reconnectWhenConnectingLongTime;
- (void).cxx_destruct;
- (id)init;

@end
