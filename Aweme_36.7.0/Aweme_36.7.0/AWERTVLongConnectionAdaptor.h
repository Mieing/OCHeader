@class NSString;
@protocol IESLCMessageHandlerProtocol, IESLCConnectManagerProtocol;

@interface AWERTVLongConnectionAdaptor : NSObject <IESLCMessageHandlerService, IESLCConnectService>

@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCConnectManagerProtocol> connectManager;

+ (id)sharedInstance;

- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)ieslc_onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (id)init;

@end
