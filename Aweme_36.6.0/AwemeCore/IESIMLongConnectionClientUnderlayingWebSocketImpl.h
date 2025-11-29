@class NSString;
@protocol IESLCConnectManagerProtocol, IESLCMessageHandlerProtocol, IESIMSuspendWSConnectionCheckerProtocol;

@interface IESIMLongConnectionClientUnderlayingWebSocketImpl : NSObject <TIMXLongConnectionClientUnderlayingWebSocket, IESIMLongConnectionClientUnderlayingWebSocketProtocol>

@property (copy, nonatomic) id /* block */ notifyNewMessageCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESIMSuspendWSConnectionCheckerProtocol> wsSuspendChecker;
@property (retain, nonatomic) id<IESLCConnectManagerProtocol> lcConnectManager;
@property (retain, nonatomic) id<IESLCMessageHandlerProtocol> lcMessageHandler;

- (BOOL)webSocketBreak;
- (void)webSocketRequestDidFinishWithError:(id)a0;
- (void)handleIMPushMessage:(id)a0;
- (void)handleIMPushMessage:(id)a0 receivedTimestamp:(double)a1;
- (id)generateNextMessage;
- (BOOL)sendMessage:(id)a0;
- (void).cxx_destruct;

@end
