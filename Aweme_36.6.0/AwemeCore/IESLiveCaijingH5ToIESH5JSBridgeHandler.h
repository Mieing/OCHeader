@class NSDictionary, NSString;

@interface IESLiveCaijingH5ToIESH5JSBridgeHandler : NSObject <IESLivePiperHandlerProtocol>

@property (nonatomic) BOOL hasAddNotifications;
@property (copy, nonatomic) NSDictionary *h5ToH5Message;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (id /* block */)getCjBindInfoCallHandler;
- (void)addCaijingNotificationObserver;
- (void)p_caijingNotification:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
