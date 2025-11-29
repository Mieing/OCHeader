@class AWEJSBridge, NSString;

@interface AWELiveInjectedJSBridgeHandler : NSObject <IESLivePiperHandlerProtocol>

@property (retain, nonatomic) AWEJSBridge *aweJSBridge;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (void).cxx_destruct;

@end
